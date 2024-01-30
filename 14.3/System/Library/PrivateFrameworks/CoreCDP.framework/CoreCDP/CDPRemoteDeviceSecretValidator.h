@protocol CDPRemoteDeviceSecretValidatorProtocol;

@interface CDPRemoteDeviceSecretValidator : NSObject {
    id<CDPRemoteDeviceSecretValidatorProtocol> _validator;
}

- (void).cxx_destruct;
- (void)cancelValidationWithError:(id)a0;
- (unsigned long long)supportedEscapeOfferMask;
- (void)resetAccountCDPState;
- (void)cancelApproveFromAnotherDevice;
- (void)approveFromAnotherDeviceWithCompletion:(id /* block */)a0;
- (void)supportedEscapeOfferMaskCompletion:(id /* block */)a0;
- (void)validateSecret:(id)a0 devices:(id)a1 type:(unsigned long long)a2 withCompletion:(id /* block */)a3;
- (void)validateRecoveryKey:(id)a0 withCompletion:(id /* block */)a1;
- (id)initWithContext:(id)a0 validator:(id)a1;
- (void)_executeSyncOnMainThreadIfNeeded:(id /* block */)a0;

@end
