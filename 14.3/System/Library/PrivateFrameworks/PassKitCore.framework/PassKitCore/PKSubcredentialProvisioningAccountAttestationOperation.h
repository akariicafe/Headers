@class PKAppletSubcredentialSharingInvitationMetadata, PKPaymentWebService, PKAppletSubcredential;

@interface PKSubcredentialProvisioningAccountAttestationOperation : PKSubcredentialProvisioningSharingSessionOperation {
    PKAppletSubcredential *_credential;
    PKPaymentWebService *_webService;
    PKAppletSubcredentialSharingInvitationMetadata *_metadata;
    BOOL _operationCompleted;
}

- (void).cxx_destruct;
- (void)performOperation;
- (void)session:(id)a0 didChangeState:(unsigned long long)a1;
- (void)performOperationWithSession:(id)a0;
- (void)accountAttesatationAnonymizationSaltWithCompletion:(id /* block */)a0;
- (id)initWithConfiguration:(id)a0 context:(id)a1 delegate:(id)a2;

@end
