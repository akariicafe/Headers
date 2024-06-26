@class _MKFApplicationData, Protocol, HMDHomeNFCReaderKey, NSDate, HMDNaturalLightingContext, _MKFHomeThreadNetwork, HMDHomeKitVersion, NSArray, _MKFUser, NSString, NSSet, _MKFAccessoryNetworkProtectionGroup, HMFSoftwareVersion, MKFHomeDatabaseID, NSNumber, NSData, _MKFDevice, _MKFRoom, NSUUID;
@protocol MKFRoom, MKFAccessoryNetworkProtectionGroup, MKFUser, MKFHomeThreadNetwork, MKFApplicationData, MKFDevice;

@interface _MKFHome : _MKFModel <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFHome, MKFHomePrivateExtensions>

@property (class, readonly) Class cd_modelClass;
@property (class, readonly, copy, nonatomic) Protocol *backingModelProtocol;

@property (readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property (readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSDate *creationDate;
@property (nonatomic) BOOL doorbellChimeEnabled;
@property (copy, nonatomic) NSDate *firstHAPAccessoryAddedDate;
@property (nonatomic) BOOL hasAnyUserAcknowledgedCameraRecordingOnboarding;
@property (nonatomic) BOOL hasOnboardedForAccessCode;
@property (nonatomic) BOOL hasOnboardedForWalletKey;
@property (retain, nonatomic) NSData *homeLocationData;
@property (nonatomic) BOOL multiUserEnabled;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) HMDNaturalLightingContext *naturalLightingContext;
@property (copy, nonatomic) NSNumber *networkProtectionMode;
@property (retain, nonatomic) HMDHomeNFCReaderKey *nfcReaderKey;
@property (copy, nonatomic) NSNumber *owned;
@property (retain, nonatomic) NSData *ownerPublicKey;
@property (copy, nonatomic) NSNumber *presenceAuthorizationStatus;
@property (copy, nonatomic) NSNumber *presenceComputeStatus;
@property (retain, nonatomic) HMFSoftwareVersion *sharedHomeSourceVersion;
@property (retain, nonatomic) NSSet *accessories_;
@property (retain, nonatomic) NSSet *actionSets_;
@property (retain, nonatomic) _MKFApplicationData *applicationData;
@property (retain, nonatomic) _MKFRoom *defaultRoom;
@property (retain, nonatomic) NSSet *invitations_;
@property (retain, nonatomic) NSSet *mediaGroups_;
@property (retain, nonatomic) NSSet *mediaSystems_;
@property (retain, nonatomic) _MKFAccessoryNetworkProtectionGroup *networkProtectionGroup;
@property (retain, nonatomic) _MKFUser *owner;
@property (retain, nonatomic) _MKFDevice *primaryResident;
@property (retain, nonatomic) NSSet *residents_;
@property (retain, nonatomic) NSSet *rooms_;
@property (retain, nonatomic) NSSet *serviceGroups_;
@property (retain, nonatomic) NSSet *settings_;
@property (retain, nonatomic) _MKFHomeThreadNetwork *threadNetwork;
@property (retain, nonatomic) NSSet *triggers_;
@property (retain, nonatomic) NSSet *users_;
@property (retain, nonatomic) NSSet *zones_;
@property (copy, nonatomic) NSDate *creationDate;
@property (copy, nonatomic) NSNumber *doorbellChimeEnabled;
@property (copy, nonatomic) NSDate *firstHAPAccessoryAddedDate;
@property (copy, nonatomic) NSNumber *hasAnyUserAcknowledgedCameraRecordingOnboarding;
@property (copy, nonatomic) NSNumber *hasOnboardedForAccessCode;
@property (copy, nonatomic) NSNumber *hasOnboardedForWalletKey;
@property (retain, nonatomic) NSData *homeLocationData;
@property (copy, nonatomic) NSNumber *multiUserEnabled;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) HMDNaturalLightingContext *naturalLightingContext;
@property (copy, nonatomic) NSNumber *networkProtectionMode;
@property (retain, nonatomic) HMDHomeNFCReaderKey *nfcReaderKey;
@property (copy, nonatomic) NSNumber *owned;
@property (retain, nonatomic) NSData *ownerPublicKey;
@property (copy, nonatomic) NSNumber *presenceAuthorizationStatus;
@property (copy, nonatomic) NSNumber *presenceComputeStatus;
@property (retain, nonatomic) HMDHomeKitVersion *sharedHomeSourceVersion;
@property (readonly, retain, nonatomic) NSArray *accessories;
@property (readonly, retain, nonatomic) NSArray *actionSets;
@property (retain, nonatomic) id<MKFApplicationData> applicationData;
@property (retain, nonatomic) id<MKFRoom> defaultRoom;
@property (readonly, retain, nonatomic) NSArray *invitations;
@property (readonly, retain, nonatomic) NSArray *mediaGroups;
@property (readonly, retain, nonatomic) NSArray *mediaSystems;
@property (retain, nonatomic) id<MKFAccessoryNetworkProtectionGroup> networkProtectionGroup;
@property (retain, nonatomic) id<MKFUser> owner;
@property (retain, nonatomic) id<MKFDevice> primaryResident;
@property (readonly, retain, nonatomic) NSArray *residents;
@property (readonly, retain, nonatomic) NSArray *rooms;
@property (readonly, retain, nonatomic) NSArray *serviceGroups;
@property (readonly, retain, nonatomic) NSArray *settings;
@property (retain, nonatomic) id<MKFHomeThreadNetwork> threadNetwork;
@property (readonly, retain, nonatomic) NSArray *triggers;
@property (readonly, retain, nonatomic) NSArray *users;
@property (readonly, retain, nonatomic) NSArray *zones;
@property (readonly, copy, nonatomic) MKFHomeDatabaseID *databaseID;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetchRequest;
+ (Class)backingModelClass;

- (id)castIfHome;
- (id)materializeOrCreateApplicationDataRelation:(BOOL *)a0;
- (id)materializeOrCreateResidentsRelationOfTypeResidentAccessoryMediaAppleWithModelID:(id)a0 createdNew:(BOOL *)a1;
- (id)materializeOrCreateUsersRelationWithModelID:(id)a0 createdNew:(BOOL *)a1;
- (id)findUsersRelationWithModelID:(id)a0;
- (id)materializeOrCreateAccessoriesRelationOfType:(id)a0 modelID:(id)a1 createdNew:(BOOL *)a2;
- (id)materializeOrCreateAccessoriesRelationOfTypeAccessoryHAPWithModelID:(id)a0 createdNew:(BOOL *)a1;
- (id)findAccessoriesRelationOfTypeAccessoryHAPWithModelID:(id)a0;
- (id)materializeOrCreateAccessoriesRelationOfTypeAccessoryMediaAirPlayWithModelID:(id)a0 createdNew:(BOOL *)a1;
- (id)findAccessoriesRelationOfTypeAccessoryMediaAirPlayWithModelID:(id)a0;
- (id)materializeOrCreateAccessoriesRelationOfTypeAccessoryMediaAppleWithModelID:(id)a0 createdNew:(BOOL *)a1;
- (id)findAccessoriesRelationOfTypeAccessoryMediaAppleWithModelID:(id)a0;
- (id)materializeOrCreateAccessoriesRelationOfTypeAccessoryMediaAppleHomePodWithModelID:(id)a0 createdNew:(BOOL *)a1;
- (id)findAccessoriesRelationOfTypeAccessoryMediaAppleHomePodWithModelID:(id)a0;
- (void)synchronizeAccessoriesRelationWith:(id)a0;
- (id)materializeOrCreateActionSetsRelationWithModelID:(id)a0 createdNew:(BOOL *)a1;
- (id)findActionSetsRelationWithModelID:(id)a0;
- (void)synchronizeActionSetsRelationWith:(id)a0;
- (id)materializeOrCreateInvitationsRelationWithModelID:(id)a0 createdNew:(BOOL *)a1;
- (id)findInvitationsRelationWithModelID:(id)a0;
- (void)synchronizeInvitationsRelationWith:(id)a0;
- (id)materializeOrCreateMediaGroupsRelationWithModelID:(id)a0 createdNew:(BOOL *)a1;
- (id)findMediaGroupsRelationWithModelID:(id)a0;
- (void)synchronizeMediaGroupsRelationWith:(id)a0;
- (id)materializeOrCreateNetworkProtectionGroupRelation:(BOOL *)a0;
- (id)materializeOrCreateResidentsRelationOfType:(id)a0 modelID:(id)a1 createdNew:(BOOL *)a2;
- (id)findResidentsRelationOfTypeResidentAccessoryMediaAppleWithModelID:(id)a0;
- (void)addResidentsObject:(id)a0;
- (void)removeResidentsObject:(id)a0;
- (id)materializeOrCreateRoomsRelationWithModelID:(id)a0 createdNew:(BOOL *)a1;
- (id)findRoomsRelationWithModelID:(id)a0;
- (void)synchronizeRoomsRelationWith:(id)a0;
- (id)materializeOrCreateServiceGroupsRelationWithModelID:(id)a0 createdNew:(BOOL *)a1;
- (id)findServiceGroupsRelationWithModelID:(id)a0;
- (void)synchronizeServiceGroupsRelationWith:(id)a0;
- (id)materializeOrCreateSettingsRelationOfTypeHomeSettingMedia:(BOOL *)a0;
- (id)findSettingsRelationOfTypeHomeSettingMedia;
- (id)materializeOrCreateSettingsRelationOfTypeHomeSettingNetworkRouter:(BOOL *)a0;
- (id)findSettingsRelationOfTypeHomeSettingNetworkRouter;
- (id)materializeOrCreateSettingsRelationOfTypeHomeSettingNetworkRouterManagingDevice:(BOOL *)a0;
- (id)findSettingsRelationOfTypeHomeSettingNetworkRouterManagingDevice;
- (id)materializeOrCreateSettingsRelationOfTypeHomeSettingPersonManager:(BOOL *)a0;
- (id)findSettingsRelationOfTypeHomeSettingPersonManager;
- (id)materializeOrCreateSettingsRelationOfTypeHomeSettingSoftwareUpdate:(BOOL *)a0;
- (id)findSettingsRelationOfTypeHomeSettingSoftwareUpdate;
- (id)materializeOrCreateThreadNetworkRelation:(BOOL *)a0;
- (id)materializeOrCreateTriggersRelationOfType:(id)a0 modelID:(id)a1 createdNew:(BOOL *)a2;
- (id)materializeOrCreateTriggersRelationOfTypeTriggerEventWithModelID:(id)a0 createdNew:(BOOL *)a1;
- (id)findTriggersRelationOfTypeTriggerEventWithModelID:(id)a0;
- (id)materializeOrCreateTriggersRelationOfTypeTriggerTimerWithModelID:(id)a0 createdNew:(BOOL *)a1;
- (id)findTriggersRelationOfTypeTriggerTimerWithModelID:(id)a0;
- (void)synchronizeTriggersRelationWith:(id)a0;
- (void)synchronizeUsersRelationWith:(id)a0;
- (id)materializeOrCreateZonesRelationWithModelID:(id)a0 createdNew:(BOOL *)a1;
- (id)findZonesRelationWithModelID:(id)a0;
- (void)synchronizeZonesRelationWith:(id)a0;
- (id)accessoryWithModelID:(id)a0 context:(id)a1;

@end
