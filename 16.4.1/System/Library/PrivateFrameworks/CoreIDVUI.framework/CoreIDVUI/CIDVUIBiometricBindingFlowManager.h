@class _TtC9CoreIDVUI34CIDVUIInternalBiometricFlowManager;

@interface CIDVUIBiometricBindingFlowManager : UIViewController

@property (retain, nonatomic) _TtC9CoreIDVUI34CIDVUIInternalBiometricFlowManager *bioBindingFlowManager;

- (id)init;
- (void).cxx_destruct;
- (void)deleteBoundACLWithCompletion:(id /* block */)a0;
- (void)evaluateBoundACL:(id /* block */)a0;
- (void)fetchBiometricBindingDetails:(id /* block */)a0;

@end
