@class NSUUID, NSString, NSArray, NSData, NSDate, NSNumber, NSObject;
@protocol OS_dispatch_group;

@interface HMDAccessoryTransaction : HMDBackingStoreModelObject <HMDBackingStoreModelObjectCDRepresentable>

@property (class, readonly) Class cd_entityClass;
@property (class, readonly) NSString *cd_parentReferenceName;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *configuredName;
@property (retain, nonatomic) NSString *providedName;
@property (retain, nonatomic) NSNumber *accessoryCategory;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *roomUUID;
@property (retain, nonatomic) NSString *hostAccessoryUUID;
@property (retain, nonatomic) NSString *model;
@property (retain, nonatomic) NSString *manufacturer;
@property (retain, nonatomic) NSString *firmwareVersion;
@property (retain, nonatomic) NSString *serialNumber;
@property (retain, nonatomic) NSString *configurationAppIdentifier;
@property (retain, nonatomic) NSNumber *networkClientIdentifier;
@property (retain, nonatomic) NSString *networkRouterUUID;
@property (retain, nonatomic) NSNumber *currentNetworkProtectionMode;
@property (retain, nonatomic) NSNumber *networkClientLAN;
@property (retain, nonatomic) NSString *networkClientProfileFingerprint;
@property (retain, nonatomic) NSData *wiFiUniquePreSharedKey;
@property (retain, nonatomic) NSNumber *wiFiCredentialType;
@property (retain, nonatomic) NSArray *appliedFirewallWANRules;
@property (retain, nonatomic) NSNumber *lastNetworkAccessViolationOccurrenceSince1970;
@property (retain, nonatomic) NSNumber *lastNetworkAccessViolationResetSince1970;
@property (retain, nonatomic) NSString *configuredNetworkProtectionGroupUUIDString;
@property (retain, nonatomic) NSString *pendingConfigurationIdentifier;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *configurationTracker;
@property (retain, nonatomic) NSNumber *suspendCapable;
@property (retain, nonatomic) NSDate *lastSeenDate;
@property (retain, nonatomic) NSNumber *lowBattery;
@property (retain, nonatomic) NSString *primaryProfileVersion;
@property (retain, nonatomic) NSString *productData;
@property (retain, nonatomic) NSString *productDataV2;
@property (retain, nonatomic) NSString *initialManufacturer;
@property (retain, nonatomic) NSString *initialModel;
@property (retain, nonatomic) NSNumber *initialCategoryIdentifier;
@property (copy) NSUUID *preferredMediaUserUUID;
@property (copy, nonatomic) NSNumber *preferredUserSelectionType;

+ (id)properties;
+ (id)cd_getMKFAccessoryFromAccessory:(id)a0;
+ (id)cd_getMKFAccessoryFromAccessoryUUID:(id)a0;
+ (id)cd_getMKFRoom:(id)a0;

@end
