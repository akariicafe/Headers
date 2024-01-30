@protocol CDPRemoteDeviceSecretValidatorProtocol;

@interface CDPRecoveryKeySecretValidatorProxyImpl : NSObject <CDPRemoteDeviceSecretValidatorProtocol> {
    id<CDPRemoteDeviceSecretValidatorProtocol> _validator;
}

@property (nonatomic) unsigned long long supportedEscapeOfferMask;

- (void).cxx_destruct;
- (void)cancelValidationWithError:(id)a0;
- (void)approveFromAnotherDeviceWithCompletion:(id /* block */)a0;
- (void)cancelApproveFromAnotherDevice;
- (id)initWithRemoteObject:(id)a0;
- (void)resetAccountCDPState;
- (void)resetAccountCDPStateAndSetSecret:(id)a0;
- (void)supportedEscapeOfferMaskCompletion:(id /* block */)a0;
- (void)validateCustodianRecoveryInfo:(id)a0 withCompletion:(id /* block */)a1;
- (void)validateRecoveryKey:(id)a0 withCompletion:(id /* block */)a1;
- (void)validateSecret:(id)a0 devices:(id)a1 type:(unsigned long long)a2 withCompletion:(id /* block */)a3;

@end
