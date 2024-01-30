@class PKPaymentProvisioningController;

@interface PKSubcredentialProvisioningDeviceRegistrationOperation : PKSubcredentialProvisioningOperation {
    PKPaymentProvisioningController *_provisioningController;
    BOOL _operationCancelled;
}

- (void)performOperation;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0 context:(id)a1 delegate:(id)a2;
- (BOOL)canCancelOperation;
- (void)cancelOperation;

@end
