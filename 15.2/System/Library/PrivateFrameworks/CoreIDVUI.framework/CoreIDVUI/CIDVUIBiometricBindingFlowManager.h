@class _TtC9CoreIDVUI34CIDVUIInternalBiometricFlowManager;

@interface CIDVUIBiometricBindingFlowManager : UIViewController

@property (retain, nonatomic) _TtC9CoreIDVUI34CIDVUIInternalBiometricFlowManager *bioBindingFlowManager;

- (void).cxx_destruct;
- (id)init;
- (void)deleteBoundACLWithCompletion:(id /* block */)a0;
- (void)startBiometricBinding:(id /* block */)a0;
- (void)evaluateBoundACL:(id /* block */)a0;

@end
