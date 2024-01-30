@interface CoreIDVUI.CIDVUIInternalBiometricFlowManager : NSObject {
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ viewController;
    void /* unknown type, empty encoding */ bioBindingController;
}

- (void).cxx_destruct;
- (id)init;
- (void)deleteBoundACLWithCompletion:(id /* block */)a0;
- (void)startBiometricBindingWithCompletion:(id /* block */)a0;
- (void)evaluateBoundACLWithCompletion:(id /* block */)a0;

@end
