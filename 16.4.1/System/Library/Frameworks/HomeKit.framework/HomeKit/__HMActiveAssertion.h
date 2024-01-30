@class HMHomeManager;

@interface __HMActiveAssertion : HMFAssertion

@property (readonly, weak) HMHomeManager *manager;

- (id)initWithHomeManager:(id)a0 reason:(id)a1;
- (id)initWithName:(id)a0;
- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;

@end
