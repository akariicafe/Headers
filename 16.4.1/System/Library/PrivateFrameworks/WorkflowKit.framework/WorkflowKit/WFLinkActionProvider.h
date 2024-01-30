@class INSystemAppMapper, NSMutableDictionary, NSDictionary, LNMetadataProvider, NSObject;
@protocol OS_dispatch_queue;

@interface WFLinkActionProvider : WFActionProvider

@property (readonly, nonatomic) LNMetadataProvider *metadataProvider;
@property (nonatomic, getter=isObservingInstalledApplicationsChanges) BOOL observingInstalledApplicationsChanges;
@property (readonly, copy, nonatomic) NSDictionary *actionMetadataByAppIdentifier;
@property (readonly, copy, nonatomic) NSDictionary *enumMetadataByAppIdentifier;
@property (readonly, copy, nonatomic) NSDictionary *entityMetadataByAppIdentifier;
@property (readonly, copy, nonatomic) NSDictionary *queryMetadataByAppIdentifier;
@property (readonly, nonatomic) NSMutableDictionary *actionRequestToAppIntentDescriptorMap;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) INSystemAppMapper *systemAppMapper;

+ (id)sharedProvider;
+ (id)denyListedLinkActionIdentifiers;
+ (unsigned long long)allowDenyStateForActionIdentifier:(id)a0;
+ (BOOL)shouldAllowActionWithIdentifier:(id)a0;

- (void)installedApplicationsDidChange:(id)a0;
- (void).cxx_destruct;
- (id)actionMetadataByUpdatingWithEnumAndEntityMetadata:(id)a0 bundleIdentifier:(id)a1;
- (void)createActionsForRequests:(id)a0;
- (BOOL)isDiscontinuedWithAvailability:(id)a0;
- (id)availabilityWithAvailabilityAnnotations:(id)a0;
- (id)availableActionIdentifiers;
- (void)createActionsForRequests:(id)a0 allowsActionInDenyList:(BOOL)a1;
- (id)createAllAvailableActions;
- (id)disabledOnPlatformsWithAvailability:(id)a0;
- (id)entityMetadataByAppBundleIdentifier:(id)a0 entityIdentifier:(id)a1;
- (id)enumMetadataByAppBundleIdentifier:(id)a0 enumIdentifier:(id)a1;
- (void)handleApplicationDidChangeNotification:(id)a0;
- (id)initWithMetadataProvider:(id)a0;
- (id)linkActionWithActionRequest:(id)a0 fullyQualifiedActionIdentifier:(id)a1 actionMetadataByAppIdentifier:(id)a2 enumMetadataByAppIdentifier:(id)a3 entityMetadataByAppIdentifier:(id)a4;
- (id)linkContentItemFilterActionWithActionRequest:(id)a0 fullyQualifiedActionIdentifier:(id)a1 enumMetadataByAppIdentifier:(id)a2 entityMetadataByAppIdentifier:(id)a3 entityMetadata:(id)a4 queryMetadata:(id)a5;
- (id)linkCurrentPlatformName;
- (void)observeInstalledApplicationsChangesIfNeeded;
- (void)registerCustomTypesForCoercion:(id)a0 enumMetadataByAppIdentifier:(id)a1 entityMetadataByAppIdentifier:(id)a2 bundleIdentifier:(id)a3;
- (id)resolvedActionIdentifiersForActionRequests:(id)a0 availableActions:(id)a1 availableEntities:(id)a2 allowsActionInDenyList:(BOOL)a3;
- (BOOL)serializedAppIntentDescriptorIsValid:(id)a0;

@end
