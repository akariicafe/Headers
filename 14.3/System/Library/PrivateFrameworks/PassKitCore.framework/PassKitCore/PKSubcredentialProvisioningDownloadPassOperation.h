@class NSURL, PKAppletSubcredential;

@interface PKSubcredentialProvisioningDownloadPassOperation : PKSubcredentialProvisioningOperation {
    NSURL *_passURL;
    PKAppletSubcredential *_addedCredential;
}

- (void).cxx_destruct;
- (void)configureExpressModeForPass:(id)a0 withCompletion:(id /* block */)a1;
- (void)updatePassMetadata:(id)a0 withCompletion:(id /* block */)a1;
- (void)downloadPassAtURL:(id)a0 withCompletion:(id /* block */)a1;
- (void)performOperation;
- (id)initWithConfiguration:(id)a0 context:(id)a1 delegate:(id)a2;
- (void)performOperationWithCompletion:(id /* block */)a0;

@end
