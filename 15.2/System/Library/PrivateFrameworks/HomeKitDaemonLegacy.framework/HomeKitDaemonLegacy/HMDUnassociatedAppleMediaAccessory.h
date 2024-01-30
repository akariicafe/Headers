@class HMDCapabilityFlags, NSString, HMFSoftwareVersion, HMDHomeKitVersion, HMDDevice;

@interface HMDUnassociatedAppleMediaAccessory : HMDUnassociatedMediaAccessory <HMFLogging>

@property (readonly) HMDCapabilityFlags *requiredPairingCapbilities;
@property (retain) HMDHomeKitVersion *minimumRequiredPairingSoftwareVersion;
@property (retain) HMDDevice *device;
@property (copy) NSString *model;
@property (copy) NSString *serialNumber;
@property (copy) HMFSoftwareVersion *softwareVersion;
@property (nonatomic, getter=isCurrentAccessory) BOOL currentAccessory;
@property unsigned long long supportedStereoPairVersions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;
+ (id)logCategory;
+ (id)namespace;
+ (id)modelForChangeType:(unsigned long long)a0 uuid:(id)a1 parentUUID:(id)a2;

- (void)encodeWithCoder:(id)a0;
- (id)logIdentifier;
- (id)dumpDescription;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)addTransactionForHome:(id)a0 configurationAppIdentifier:(id)a1;
- (BOOL)canPairGivenCapabilities:(unsigned long long)a0;
- (id)initWithIdentifier:(id)a0 name:(id)a1 category:(id)a2 messageDispatcher:(id)a3;
- (id)initWithIdentifier:(id)a0 name:(id)a1 category:(id)a2 requiredPairingCapabilities:(unsigned long long)a3 messageDispatcher:(id)a4;
- (id)descriptionWithPointer:(BOOL)a0 additionalDescription:(id)a1;

@end
