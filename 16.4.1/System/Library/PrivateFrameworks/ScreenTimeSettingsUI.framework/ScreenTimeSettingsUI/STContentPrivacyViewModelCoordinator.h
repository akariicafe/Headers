@class STContentPrivacyViewModel, NSSet, NSString, NSMutableDictionary, NSArray, NSNumber, NSManagedObjectID;
@protocol STPersistenceControllerProtocol;

@interface STContentPrivacyViewModelCoordinator : NSObject <NSFetchedResultsControllerDelegate, STContentPrivacyViewModelCoordinator>

@property (class, readonly, nonatomic) NSSet *_remoteDeviceRestrictions;

@property (readonly, nonatomic) id<STPersistenceControllerProtocol> persistenceController;
@property (copy, nonatomic) NSNumber *userDSID;
@property (copy, nonatomic) NSString *userName;
@property (copy, nonatomic) NSManagedObjectID *userObjectID;
@property (nonatomic) BOOL isLocalDevice;
@property (retain, nonatomic) NSMutableDictionary *configurationPayloadsByType;
@property (retain, nonatomic) NSArray *fetchedResultsControllers;
@property unsigned long long numExpectedChanges;
@property (retain, nonatomic) STContentPrivacyViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_coreAnalyticsEventWithRestrictionsEnabled:(BOOL)a0 valuesByRestriction:(id)a1 userType:(unsigned long long)a2 userIsManaged:(BOOL)a3;
+ (id)_localDeviceRestrictions;

- (void)controller:(id)a0 didChangeObject:(id)a1 atIndexPath:(id)a2 forChangeType:(unsigned long long)a3 newIndexPath:(id)a4;
- (void).cxx_destruct;
- (void)_contactStoreDidChange:(id)a0;
- (id)_valuesByRestriction;
- (id)_restrictionsForWebFilterState:(unsigned long long)a0;
- (void)reloadViewModelForRemoteChanges;
- (id)_createUnrestrictedConfigurationForUser:(id)a0 withType:(id)a1;
- (void)_registerForPersistentStoreNotifications;
- (void)_reportCoreAnalyticsEventForChangedCommunicationLimits:(id)a0 userType:(unsigned long long)a1 userIsRemote:(BOOL)a2;
- (void)_reportCoreAnalyticsEventWithRestrictionsEnabled:(BOOL)a0 valuesByRestriction:(id)a1 userType:(unsigned long long)a2 userIsManaged:(BOOL)a3;
- (void)_setValue:(id)a0 forMCFeature:(id)a1;
- (void)_setValue:(id)a0 forSBCapability:(id)a1;
- (void)_updateConfiguration:(id)a0 keyPath:(id)a1 value:(id)a2;
- (id)_valueForMCFeature:(id)a0;
- (id)_valueForSBCapability:(id)a0;
- (id)_valueForWebFilterState;
- (id)_valueInConfiguration:(id)a0 keyPath:(id)a1;
- (id)_visibleRestrictions;
- (id)createValuesForRestrictions:(id)a0 multiplayerRestriction:(id)a1;
- (id)initWithPersistenceController:(id)a0 userDSID:(id)a1 userName:(id)a2;
- (void)loadValuesByRestrictionWithCompletionHandler:(id /* block */)a0;
- (void)loadViewModelWithCompletionHandler:(id /* block */)a0;
- (void)saveCommunicationLimits:(id)a0 completionHandler:(id /* block */)a1;
- (void)saveContentPrivacyEnabled:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)saveRestrictionValue:(id)a0 forItem:(id)a1 completionHandler:(id /* block */)a2;
- (void)saveValuesForRestrictions:(id)a0 completionHandler:(id /* block */)a1;
- (id)valueForRestriction:(id)a0;

@end
