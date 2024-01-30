@interface CDPDRemoteDeviceSecretValidator : CDPDDeviceSecretValidator {
    id /* block */ _requestToJoinCompletion;
    BOOL _isWaitingForRemoteApproval;
}

- (void).cxx_destruct;
- (void)setValidSecretHandler:(id /* block */)a0;
- (void)resetAccountCDPState;
- (void)cancelApproveFromAnotherDevice;
- (id)_decoratedDelegate;
- (void)approveFromAnotherDeviceWithCompletion:(id /* block */)a0;
- (void)supportedEscapeOfferMaskCompletion:(id /* block */)a0;

@end
