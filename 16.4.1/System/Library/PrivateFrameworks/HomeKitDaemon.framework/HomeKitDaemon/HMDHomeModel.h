@class NSData, NSString, HMDNaturalLightingContext, NSDate, HMDHomeKitVersion, NSDictionary, HMDHomeNFCReaderKey, NSNumber;

@interface HMDHomeModel : HMDBackingStoreModelObject <HMDBackingStoreModelObjectCDRepresentable>

@property (class, readonly) Class cd_entityClass;
@property (class, readonly) NSString *cd_parentReferenceName;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSData *encodedNaturalLightingContext;
@property (retain, nonatomic) NSData *hh2EncodedNfcReaderKey;
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
@property (copy, nonatomic) NSNumber *analysisOptions;
@property (copy, nonatomic) NSNumber *didOnboardAnalysis;
@property (copy, nonatomic) NSNumber *hasAnyUserAcknowledgedCameraRecordingOnboarding;
@property (copy, nonatomic) NSNumber *hasOnboardedForAccessCode;
@property (copy, nonatomic) NSNumber *hasOnboardedForWalletKey;
@property (copy, nonatomic) HMDNaturalLightingContext *naturalLightingContext;
@property (copy, nonatomic) NSNumber *chipFabricID;
@property (copy, nonatomic) NSNumber *chipFabricIndex;
@property (copy, nonatomic) NSNumber *chipLastNodeID;
@property (copy, nonatomic) NSData *chipRootCertificate;
@property (copy, nonatomic) NSData *chipOperationalCertificate;
@property (copy, nonatomic) NSData *chipIntermediateCertificate;
@property (copy, nonatomic) NSDictionary *chipKeyValueStore;
@property (copy, nonatomic) NSNumber *locationServicesEnabled;
@property (copy, nonatomic) NSNumber *didOnboardLocationServices;
@property (copy, nonatomic) NSNumber *residentSyncClientDidSync;
@property (copy, nonatomic) NSNumber *owned;
@property (copy, nonatomic) HMDHomeNFCReaderKey *nfcReaderKey;

+ (id)properties;
+ (id)cd_getHomeFromUUID:(id)a0;

@end
