@class Protocol, NSPredicate, HMDUserManagementOperationTimestamp, HMFPairingIdentity, NSDate, NSString, MKFAccessoryMediaAppleHomePodDatabaseID, HMFSoftwareVersion, HMFWiFiNetworkInfo, NSArray, NSData, NSNumber, NSUUID;
@protocol MKFResidentAccessoryMediaApple, MKFDevice, MKFAccessorySettingGroup, MKFApplicationData, MKFMediaDestinationController, MKFAssistantAccessControl, MKFRoom, MKFSoftwareUpdate, MKFHome;

@interface _MKFAccessoryMediaAppleHomePod : _MKFAccessoryMediaApple <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFAccessoryMediaAppleHomePod, MKFAccessoryMediaAppleHomePodPrivateExtensions>

@property (class, readonly) Class cd_modelClass;
@property (class, readonly) NSPredicate *homeRelation;
@property (class, readonly, copy, nonatomic) Protocol *backingModelProtocol;

@property (readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property (readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) MKFAccessoryMediaAppleHomePodDatabaseID *databaseID;
@property (copy, nonatomic) NSString *appleMediaAccessoryChangeTag;
@property (retain, nonatomic) NSData *loggedInAccount;
@property (retain, nonatomic) HMFPairingIdentity *pairingIdentity;
@property (copy, nonatomic) NSUUID *preferredMediaUserUUID;
@property (copy, nonatomic) NSNumber *preferredUserSelectionType;
@property (retain, nonatomic) HMFSoftwareVersion *softwareVersion;
@property (copy, nonatomic) NSNumber *supportedStereoPairVersions;
@property (retain, nonatomic) NSData *symptoms;
@property (retain, nonatomic) HMFWiFiNetworkInfo *wifiNetworkInfo;
@property (retain, nonatomic) id<MKFMediaDestinationController> destinationController;
@property (retain, nonatomic) id<MKFDevice> device;
@property (retain, nonatomic) id<MKFResidentAccessoryMediaApple> resident;
@property (retain, nonatomic) id<MKFAccessorySettingGroup> settings;
@property (readonly, retain, nonatomic) NSArray *actionMediaPlaybacks;
@property (copy, nonatomic) NSNumber *accessoryCategory;
@property (retain, nonatomic) NSArray *appliedFirewallWANRules;
@property (copy, nonatomic) NSString *configurationAppIdentifier;
@property (copy, nonatomic) NSString *configuredName;
@property (copy, nonatomic) NSNumber *currentNetworkProtectionMode;
@property (copy, nonatomic) NSString *firmwareVersion;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSNumber *initialCategoryIdentifier;
@property (copy, nonatomic) NSString *initialManufacturer;
@property (copy, nonatomic) NSString *initialModel;
@property (copy, nonatomic) NSNumber *lastNetworkAccessViolationOccurrenceSince1970;
@property (copy, nonatomic) NSNumber *lastNetworkAccessViolationResetSince1970;
@property (copy, nonatomic) NSString *manufacturer;
@property (copy, nonatomic) NSString *model;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSNumber *networkClientIdentifier;
@property (copy, nonatomic) NSNumber *networkClientLAN;
@property (copy, nonatomic) NSString *networkClientProfileFingerprint;
@property (copy, nonatomic) NSString *networkRouterUUID;
@property (retain, nonatomic) HMDUserManagementOperationTimestamp *pairingsAuditedTimestamp;
@property (copy, nonatomic) NSString *pendingConfigurationIdentifier;
@property (copy, nonatomic) NSString *primaryProfileVersion;
@property (copy, nonatomic) NSString *productData;
@property (copy, nonatomic) NSString *productDataV2;
@property (copy, nonatomic) NSString *providedName;
@property (copy, nonatomic) NSString *serialNumber;
@property (retain, nonatomic) HMDUserManagementOperationTimestamp *sharedAdminAddedTimestamp;
@property (copy, nonatomic) NSNumber *suspendCapable;
@property (copy, nonatomic) NSNumber *wiFiCredentialType;
@property (retain, nonatomic) NSData *wiFiUniquePreSharedKey;
@property (retain, nonatomic) id<MKFAssistantAccessControl> accessControl;
@property (retain, nonatomic) id<MKFApplicationData> applicationData;
@property (readonly, retain, nonatomic) NSArray *cameraAccessModeBulletinRegistrations;
@property (readonly, retain, nonatomic) NSArray *cameraReachabilityBulletinRegistrations;
@property (readonly, retain, nonatomic) NSArray *cameraSignificantEventBulletinRegistrations;
@property (readonly, retain, nonatomic) id<MKFHome> home;
@property (retain, nonatomic) id<MKFRoom> room;
@property (retain, nonatomic) id<MKFSoftwareUpdate> softwareUpdate;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetchRequest;
+ (id)modelIDForParentRelationshipTo:(id)a0;
+ (Class)backingModelClass;

- (id)castIfAccessoryMediaAppleHomePod;

@end
