@class NSString, HMFPairingIdentity;

@interface HMDUnassociatedAirPlayAccessory : HMDUnassociatedMediaAccessory <HMFLogging, HMDAccessoryAssociation>

@property (copy) HMFPairingIdentity *pairingIdentity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) BOOL supportsAssociation;

+ (BOOL)supportsSecureCoding;
+ (id)logCategory;

- (void)encodeWithCoder:(id)a0;
- (id)logIdentifier;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)addTransactionForHome:(id)a0 configurationAppIdentifier:(id)a1;
- (void)associateToHome:(id)a0 completionHandler:(id /* block */)a1;
- (id)modelForChangeType:(unsigned long long)a0 uuid:(id)a1 parentUUID:(id)a2;

@end
