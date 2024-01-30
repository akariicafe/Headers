@class NSUUID, NSString, NSArray, NSDate, NSData, MKFMediaAccessoryDatabaseID, Protocol, NSNumber;
@protocol MKFSoftwareUpdate, MKFRoom, MKFAccessory, MKFHome, MKFApplicationData;

@interface _MKFMediaAccessory : _MKFAccessory <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFMediaAccessory, MKFMediaAccessoryPrivateExtensions>

@property (class, readonly) Class cd_modelClass;
@property (class, readonly, copy, nonatomic) Protocol *backingModelProtocol;

@property (readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property (readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) MKFMediaAccessoryDatabaseID *databaseID;
@property (copy, nonatomic) NSNumber *accessoryCategory;
@property (retain, nonatomic) NSArray *appliedFirewallWANRules;
@property (copy, nonatomic) NSString *configurationAppIdentifier;
@property (copy, nonatomic) NSString *configuredName;
@property (copy, nonatomic) NSNumber *currentNetworkProtectionMode;
@property (copy, nonatomic) NSString *firmwareVersion;
@property (copy, nonatomic) NSUUID *groupIdentifier;
@property (copy, nonatomic) NSString *groupName;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSNumber *initialCategoryIdentifier;
@property (copy, nonatomic) NSString *initialManufacturer;
@property (copy, nonatomic) NSString *initialModel;
@property (copy, nonatomic) NSNumber *lastNetworkAccessViolationOccurrenceSince1970;
@property (copy, nonatomic) NSNumber *lastNetworkAccessViolationResetSince1970;
@property (copy, nonatomic) NSDate *lastSeenDate;
@property (copy, nonatomic) NSNumber *lowBattery;
@property (copy, nonatomic) NSString *manufacturer;
@property (copy, nonatomic) NSString *model;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSNumber *networkClientIdentifier;
@property (copy, nonatomic) NSNumber *networkClientLAN;
@property (copy, nonatomic) NSString *networkClientProfileFingerprint;
@property (copy, nonatomic) NSString *networkRouterUUID;
@property (copy, nonatomic) NSString *pendingConfigurationIdentifier;
@property (copy, nonatomic) NSString *primaryProfileVersion;
@property (copy, nonatomic) NSString *productData;
@property (copy, nonatomic) NSString *providedName;
@property (copy, nonatomic) NSString *serialNumber;
@property (copy, nonatomic) NSNumber *suspendCapable;
@property (copy, nonatomic) NSNumber *wiFiCredentialType;
@property (retain, nonatomic) NSData *wiFiUniquePreSharedKey;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (readonly, retain, nonatomic) NSArray *actionMediaPlaybacks;
@property (readonly, retain, nonatomic) NSArray *analysisEventBulletinRegistrations;
@property (retain, nonatomic) id<MKFApplicationData> applicationData;
@property (readonly, retain, nonatomic) NSArray *cameraAccessModeBulletinRegistrations;
@property (readonly, retain, nonatomic) NSArray *cameraReachabilityBulletinRegistrations;
@property (readonly, retain, nonatomic) NSArray *cameraSignificantEventBulletinRegistrations;
@property (readonly, retain, nonatomic) id<MKFHome> home;
@property (retain, nonatomic) id<MKFAccessory> hostAccessory;
@property (readonly, retain, nonatomic) NSArray *hostedAccessories;
@property (readonly, retain, nonatomic) NSArray *mediaPropertyNotificationRegistrations;
@property (retain, nonatomic) id<MKFRoom> room;
@property (retain, nonatomic) id<MKFSoftwareUpdate> softwareUpdate;
@property (readonly, retain, nonatomic) NSArray *usersWithListeningHistoryEnabled;
@property (readonly, retain, nonatomic) NSArray *usersWithMediaContentProfileEnabled;
@property (readonly, retain, nonatomic) NSArray *usersWithPersonalRequestsEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetchRequest;
+ (id)modelIDForParentRelationshipTo:(id)a0;

- (id)castIfMediaAccessory;

@end
