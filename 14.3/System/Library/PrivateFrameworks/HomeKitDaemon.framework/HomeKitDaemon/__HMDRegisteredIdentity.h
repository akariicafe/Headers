@class NSMutableArray, HMFPairingIdentity;

@interface __HMDRegisteredIdentity : HMFObject

@property (readonly, copy) HMFPairingIdentity *identity;
@property (readonly) NSMutableArray *registeredObjects;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)initWithIdentity:(id)a0;
- (id)debugDescription;

@end
