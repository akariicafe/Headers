@class _TtC9CoreIDVUI45CIDVUIInternalBiometricReplacementFlowManager;

@interface CIDVUIBiometricReplacementFlowManager : NSObject

@property (retain, nonatomic) _TtC9CoreIDVUI45CIDVUIInternalBiometricReplacementFlowManager *biometricReplacementFlowManager;

- (void).cxx_destruct;
- (id)init;
- (void)beginBiometricReplacement:(id /* block */)a0;
- (void)beginBiometricReplacementWithAuthenticationHandler:(id /* block */)a0 andCompletion:(id /* block */)a1;
- (void)beginBiometricReplacementForWatch:(id /* block */)a0;

@end
