@class HMDNaturalLightingContext, NSString, NSDictionary, NSData, NSDate, NSNumber, HMDHomeKitVersion;

@interface HMDHomeModel : HMDBackingStoreModelObject <HMDBackingStoreModelObjectCDRepresentable>

@property (class, readonly) Class cd_entityClass;
@property (class, readonly) NSString *cd_parentReferenceName;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSData *encodedNaturalLightingContext;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *ownerName;
@property (retain, nonatomic) NSString *ownerUserID;
@property (retain, nonatomic) NSString *ownerUUID;
@property (retain, nonatomic) NSDate *creationDate;
@property (retain, nonatomic) NSDate *firstHAPAccessoryAddedDate;
@property (retain, nonatomic) NSString *defaultRoomUUID;
@property (retain, nonatomic) NSNumber *presenceAuthorizationStatus;
@property (retain, nonatomic) NSNumber *presenceComputeStatus;
@property (retain, nonatomic) NSData *ownerPublicKey;
@property (retain, nonatomic) NSData *homeLocationData;
@property (retain, nonatomic) NSString *primaryResidentUUID;
@property (copy, nonatomic) HMDHomeKitVersion *sharedHomeSourceVersion;
@property (retain, nonatomic) NSNumber *networkProtectionMode;
@property (copy, nonatomic) NSNumber *multiUserEnabled;
@property (copy, nonatomic) NSNumber *soundCheckEnabled;
@property (copy, nonatomic) NSNumber *hasAnyUserAcknowledgedCameraRecordingOnboarding;
@property (copy, nonatomic) NSNumber *hasOnboardedForAccessCode;
@property (copy, nonatomic) NSNumber *hasOnboardedForWalletKey;
@property (copy, nonatomic) HMDNaturalLightingContext *naturalLightingContext;
@property (copy, nonatomic) NSDictionary *chipKeyValueStore;
@property (copy, nonatomic) NSNumber *locationServicesEnabled;
@property (copy, nonatomic) NSNumber *didOnboardLocationServices;
@property (copy, nonatomic) NSNumber *owned;

+ (id)properties;
+ (id)cd_getHomeFromUUID:(id)a0;

- (id)cd_generateValueForModelObjectFromManagedObject:(id)a0 modelObjectField:(id)a1 modelFieldInfo:(id)a2;
- (id)cd_generateValueForProperty:(id)a0 managedObjectField:(id)a1 context:(id)a2;

@end
