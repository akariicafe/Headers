@class HMDNaturalLightingContext, NSString, NSData, NSDate, NSNumber, HMDHomeKitVersion;

@interface HMDHomeModel : HMDBackingStoreModelObject

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
@property (retain, nonatomic) NSNumber *multiUserEnabled;
@property (retain, nonatomic) NSNumber *hasAnyUserAcknowledgedCameraRecordingOnboarding;
@property (retain, nonatomic) NSNumber *doorbellChimeEnabled;
@property (copy, nonatomic) HMDNaturalLightingContext *naturalLightingContext;

+ (id)properties;

@end
