@class NSString, HMFPairingIdentity;

@interface HMDUnassociatedAirPlayAccessory : HMDUnassociatedMediaAccessory <HMFLogging, HMDAccessoryAssociation>

@property (copy) HMFPairingIdentity *pairingIdentity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) BOOL supportsAssociation;

+ (id)logCategory;
+ (id)modelForChangeType:(unsigned long long)a0 uuid:(id)a1 parentUUID:(id)a2;

@end
