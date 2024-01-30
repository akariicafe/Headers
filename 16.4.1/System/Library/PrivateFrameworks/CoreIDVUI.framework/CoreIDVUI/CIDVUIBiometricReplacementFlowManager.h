@class _TtC9CoreIDVUI45CIDVUIInternalBiometricReplacementFlowManager;

@interface CIDVUIBiometricReplacementFlowManager : NSObject

@property (retain, nonatomic) _TtC9CoreIDVUI45CIDVUIInternalBiometricReplacementFlowManager *biometricReplacementFlowManager;

- (id)init;
- (void).cxx_destruct;
- (void)beginBiometricReplacement:(id /* block */)a0;
- (void)beginBiometricReplacementForWatch:(id /* block */)a0;
- (void)beginBiometricReplacementWithAuthenticationHandler:(id /* block */)a0 andCompletion:(id /* block */)a1;

@end
