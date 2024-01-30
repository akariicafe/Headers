@class NSMutableArray, HMFPairingIdentity;

@interface __HMDRegisteredIdentity : HMFObject

@property (readonly, copy) HMFPairingIdentity *identity;
@property (readonly) NSMutableArray *registeredObjects;

- (id)initWithIdentity:(id)a0;
- (id)debugDescription;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
