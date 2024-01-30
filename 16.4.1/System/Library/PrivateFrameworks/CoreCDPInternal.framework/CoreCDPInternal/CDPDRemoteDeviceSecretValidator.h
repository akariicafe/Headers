@interface CDPDRemoteDeviceSecretValidator : CDPDDeviceSecretValidator {
    id /* block */ _requestToJoinCompletion;
    BOOL _isWaitingForRemoteApproval;
}

- (void).cxx_destruct;
- (void)approveFromAnotherDeviceWithCompletion:(id /* block */)a0;
- (void)cancelApproveFromAnotherDevice;
- (void)resetAccountCDPState;
- (void)resetAccountCDPStateAndSetSecret:(id)a0;
- (void)supportedEscapeOfferMaskCompletion:(id /* block */)a0;
- (void)validateCustodianRecoveryInfo:(id)a0 withCompletion:(id /* block */)a1;
- (id)_decoratedDelegate;
- (void)setValidSecretHandler:(id /* block */)a0;

@end
