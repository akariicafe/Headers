@class NSData, NSString, NSArray, NSDate, HMFConnectivityInfo, HAPAccessory, NSSet, NSNumber;

@interface HMDHAPAccessoryTransaction : HMDAccessoryTransaction

@property (retain, nonatomic) NSData *chipPairingsData;
@property (retain, nonatomic) NSString *uniqueIdentifier;
@property (retain, nonatomic) NSString *bridgeUUID;
@property (retain, nonatomic) NSNumber *accessoryFlags;
@property (retain, nonatomic) NSNumber *certificationStatus;
@property (retain, nonatomic) NSData *broadcastKey;
@property (retain, nonatomic) NSNumber *keyUpdatedStateNumber;
@property (retain, nonatomic) NSDate *keyUpdatedTime;
@property (retain, nonatomic) NSString *pairingUsername;
@property (retain, nonatomic) NSData *publicKey;
@property (retain, nonatomic) NSArray *transportInformation;
@property (retain, nonatomic) NSNumber *communicationProtocol;
@property (retain, nonatomic) NSData *accessorySetupHash;
@property (retain, nonatomic) NSNumber *wiFiTransportCapabilities;
@property (retain, nonatomic) NSArray *targetUUIDs;
@property (retain, nonatomic) NSNumber *hardwareSupport;
@property (retain, nonatomic) HMFConnectivityInfo *connectivityInfo;
@property (retain, nonatomic) HAPAccessory *hapAccessoryLocal;
@property (retain, nonatomic) NSNumber *sleepInterval;
@property (retain, nonatomic) NSNumber *hasOnboardedForNaturalLighting;
@property (copy, nonatomic) NSSet *initialServiceTypeUUIDs;
@property (retain, nonatomic) NSNumber *needsOnboarding;
@property (retain, nonatomic) NSNumber *suspendedState;
@property (retain, nonatomic) NSNumber *chipNodeID;
@property (retain, nonatomic) NSNumber *chipVendorID;
@property (retain, nonatomic) NSNumber *chipProductID;
@property (retain, nonatomic) NSData *chipAttributeDatabase;
@property (copy, nonatomic) NSSet *chipPairings;

+ (id)properties;

- (void).cxx_destruct;
- (id)dependentUUIDs;

@end
