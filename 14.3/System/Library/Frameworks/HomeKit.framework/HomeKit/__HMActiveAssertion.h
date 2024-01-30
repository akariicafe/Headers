@class HMHomeManager;

@interface __HMActiveAssertion : HMFAssertion

@property (readonly, weak) HMHomeManager *manager;

- (id)initWithHomeManager:(id)a0 reason:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithName:(id)a0;
- (void)invalidate;

@end
