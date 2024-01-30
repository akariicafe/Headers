@class NSDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface WFIntentActionProvider : WFActionProvider

@property (nonatomic, getter=isObservingInstalledApplicationsChanges) BOOL observingInstalledApplicationsChanges;
@property (copy) NSDictionary *cachedSchemasByBundleIdentifier;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;

+ (void)initialize;
+ (id)disabledPlatformsForIntentWithTypeName:(id)a0;

- (id)init;
- (void)installedApplicationsDidChange:(id)a0;
- (void).cxx_destruct;
- (void)createActionsForRequests:(id)a0;
- (id)actionIdentifiersForBundleIdentifier:(id)a0 schema:(id)a1;
- (id)availableActionIdentifiers;
- (id)createAllAvailableActions;
- (void)handleApplicationDidChangeNotification:(id)a0;
- (void)observeInstalledApplicationsChangesIfNeeded;
- (id)schemaForBundleIdentifier:(id)a0 ignoreCache:(BOOL)a1;
- (id)schemasByBundleIdentifier;
- (BOOL)shouldCreateActionForIntentClassName:(id)a0 actionIdentifier:(id)a1 bundleIdentifier:(id)a2 inSchema:(id)a3;

@end
