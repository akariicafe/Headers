@class NSArray, HAPPairingIdentity;

@interface HMDAppleAccessoryPairingControllerDataSource : HMCContextProvider

@property (retain, nonatomic) NSArray *inProgressPairingAccessories;
@property (retain, nonatomic) HAPPairingIdentity *controllerIdentity;

- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (void)deletePairingAccessoryState:(id)a0;
- (void)updatePairingAccessoryState:(id)a0;
- (void)updateControllerIdentity:(id)a0;

@end
