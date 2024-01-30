@class PKSubcredentialProvisioningDownloadPassOperation, PKSubcredentialProvisioningTrackCredentialOperation, NSError;

@interface PKSubcredentialProvisioningDownloadAndTrackCredentialOperation : PKSubcredentialProvisioningPairingSessionOperation {
    PKSubcredentialProvisioningDownloadPassOperation *_downloadOperation;
    PKSubcredentialProvisioningTrackCredentialOperation *_trackOperation;
    NSError *_downloadOperationError;
    NSError *_trackOperationError;
}

- (void).cxx_destruct;
- (void)appletSubcredentialPairingSessionDidFirstTransaction:(id)a0 withError:(id)a1;
- (void)performOperation;
- (void)session:(id)a0 didChangeState:(unsigned long long)a1;
- (id)initWithConfiguration:(id)a0 context:(id)a1 delegate:(id)a2;

@end
