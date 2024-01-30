@class NSManagedObjectID, NSString, NSMutableDictionary, NSArray, NSNumber, STContentPrivacyViewModel;
@protocol STPersistenceControllerProtocol;

@interface STContentPrivacyViewModelCoordinator : NSObject <NSFetchedResultsControllerDelegate, STContentPrivacyViewModelCoordinator>

@property (retain, nonatomic) STContentPrivacyViewModel *viewModel;
@property (readonly, nonatomic) id<STPersistenceControllerProtocol> persistenceController;
@property (copy, nonatomic) NSString *organizationIdentifier;
@property (copy, nonatomic) NSNumber *userDSID;
@property (copy, nonatomic) NSString *userName;
@property (copy, nonatomic) NSManagedObjectID *userObjectID;
@property (nonatomic) BOOL isLocalDevice;
@property (retain, nonatomic) NSMutableDictionary *configurationPayloadsByType;
@property (retain, nonatomic) NSArray *fetchedResultsControllers;
@property unsigned long long numExpectedChanges;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_remoteDeviceRestrictions;
+ (id)_localDeviceRestrictions;

- (void).cxx_destruct;
- (void)loadViewModelWithCompletionHandler:(id /* block */)a0;
- (id)_activationIdentifier;
- (void)_registerForPersistentStoreNotifications;
- (void)controller:(id)a0 didChangeObject:(id)a1 atIndexPath:(id)a2 forChangeType:(unsigned long long)a3 newIndexPath:(id)a4;
- (void)_contactStoreDidChange:(id)a0;
- (id)valueForRestriction:(id)a0;
- (id)_valuesByRestriction;
- (void)saveCommunicationLimits:(id)a0 completionHandler:(id /* block */)a1;
- (void)saveRestrictionValue:(id)a0 forItem:(id)a1 completionHandler:(id /* block */)a2;
- (void)saveContentPrivacyEnabled:(BOOL)a0 completionHandler:(id /* block */)a1;
- (id)_visibleRestrictions;
- (void)reloadViewModelForRemoteChanges;
- (id)_valueForWebFilterState;
- (id)_valueForMCFeature:(id)a0;
- (id)_valueForSBCapability:(id)a0;
- (id)_valueInConfiguration:(id)a0 keyPath:(id)a1;
- (id)_identifierForConfigurationType:(id)a0;
- (void)_setValue:(id)a0 forSBCapability:(id)a1;
- (void)_setValue:(id)a0 forMCFeature:(id)a1;
- (id)_createUnrestrictedConfiguration:(id)a0;
- (void)_updateConfiguration:(id)a0 keyPath:(id)a1 value:(id)a2;
- (id)_restrictionsForWebFilterState:(unsigned long long)a0;
- (void)saveValuesForRestrictions:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithPersistenceController:(id)a0 organizationIdentifier:(id)a1 userDSID:(id)a2 userName:(id)a3;

@end
