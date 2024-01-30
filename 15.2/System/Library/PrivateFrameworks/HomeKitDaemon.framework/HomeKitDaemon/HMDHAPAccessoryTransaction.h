@class NSData, NSString, NSArray, NSDate, HMFConnectivityInfo, HAPAccessory, NSSet, NSNumber;

@interface HMDHAPAccessoryTransaction : HMDAccessoryTransaction <HMDBackingStoreModelObjectCDRepresentable>

@property (class, readonly) Class cd_entityClass;
@property (class, readonly) NSString *cd_parentReferenceName;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSString *uniqueIdentifier;
@property (retain, nonatomic) NSString *bridgeUUID;
@property (retain, nonatomic) NSNumber *supportsRelay;
@property (retain, nonatomic) NSNumber *accessoryFlags;
@property (retain, nonatomic) NSNumber *certificationStatus;
@property (retain, nonatomic) NSData *broadcastKey;
@property (retain, nonatomic) NSNumber *keyUpdatedStateNumber;
@property (retain, nonatomic) NSDate *keyUpdatedTime;
@property (retain, nonatomic) NSString *pairingUsername;
@property (retain, nonatomic) NSData *publicKey;
@property (retain, nonatomic) NSNumber *relayState;
@property (retain, nonatomic) NSString *relayIdentifier;
@property (retain, nonatomic) NSData *relayAccessToken;
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

+ (id)properties;
+ (id)cd_getMKFServiceFromAccessoryUUID:(id)a0 serviceInstanceId:(id)a1 managedObject:(id)a2 modelObjectField:(id)a3;
+ (id)cd_getMKFAccessoryHAPFromAccessory:(id)a0;
+ (id)cd_getMKFAccessoryHAPFromAccessoryUUID:(id)a0;

@end
