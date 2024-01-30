@class NSUUID, NSString, NSArray, NSPredicate, HMDUserManagementOperationTimestamp, NSData, HMFPairingIdentity, MKFAccessoryMediaAirPlayDatabaseID, Protocol, NSDate, NSNumber;
@protocol MKFSoftwareUpdate, MKFRoom, MKFAssistantAccessControl, MKFHome, MKFApplicationData;

@interface _MKFAccessoryMediaAirPlay : _MKFAccessoryMedia <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFAccessoryMediaAirPlay, MKFAccessoryMediaAirPlayPrivateExtensions>

@property (class, readonly) Class cd_modelClass;
@property (class, readonly) NSPredicate *homeRelation;
@property (class, readonly, copy, nonatomic) Protocol *backingModelProtocol;

@property (readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property (readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSNumber *minimumUserPriviledge;
@property (retain, nonatomic) HMFPairingIdentity *pairingIdentity;
@property (copy, nonatomic) NSString *password;
@property (copy, nonatomic) NSNumber *minimumUserPriviledge;
@property (retain, nonatomic) HMFPairingIdentity *pairingIdentity;
@property (copy, nonatomic) NSString *password;
@property (readonly, copy, nonatomic) MKFAccessoryMediaAirPlayDatabaseID *databaseID;
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

- (id)castIfAccessoryMediaAirPlay;

@end
