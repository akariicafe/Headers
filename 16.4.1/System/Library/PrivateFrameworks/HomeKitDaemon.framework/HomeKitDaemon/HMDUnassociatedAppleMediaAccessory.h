@class HMDCapabilityFlags, NSString, HMDHomeKitVersion, NSData, HMFSoftwareVersion, HMDDevice;

@interface HMDUnassociatedAppleMediaAccessory : HMDUnassociatedMediaAccessory <HMFLogging>

@property (readonly) HMDCapabilityFlags *requiredPairingCapabilities;
@property (retain) HMDDevice *device;
@property unsigned long long variant;
@property (copy) NSString *model;
@property (copy) NSString *serialNumber;
@property (copy) HMFSoftwareVersion *softwareVersion;
@property (nonatomic, getter=isCurrentAccessory) BOOL currentAccessory;
@property unsigned long long supportedStereoPairVersions;
@property (readonly) HMDHomeKitVersion *minimumRequiredPairingSoftwareVersion;
@property (readonly) long long productColor;
@property (readonly) NSString *idsIdentifierString;
@property (readonly) NSData *rawAccessoryCapabilities;
@property (readonly) NSData *rawResidentCapabilities;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;
+ (id)logCategory;

- (void)encodeWithCoder:(id)a0;
- (id)logIdentifier;
- (id)initWithCoder:(id)a0;
- (id)dumpDescription;
- (void).cxx_destruct;
- (id)addTransactionForHome:(id)a0 configurationAppIdentifier:(id)a1;
- (BOOL)canPairGivenCapabilities:(unsigned long long)a0;
- (id)descriptionWithPointer:(BOOL)a0 additionalDescription:(id)a1;
- (id)initWithIdentifier:(id)a0 name:(id)a1 category:(id)a2 productColor:(long long)a3 idsIdentifierString:(id)a4 rawAccessoryCapabilities:(id)a5 rawResidentCapabilities:(id)a6 messageDispatcher:(id)a7;
- (id)initWithIdentifier:(id)a0 name:(id)a1 category:(id)a2 requiredPairingCapabilities:(unsigned long long)a3 minimumPairingSoftware:(id)a4 productColor:(long long)a5 idsIdentifierString:(id)a6 rawAccessoryCapabilities:(id)a7 rawResidentCapabilities:(id)a8 messageDispatcher:(id)a9;
- (id)modelForChangeType:(unsigned long long)a0 uuid:(id)a1 parentUUID:(id)a2;

@end
