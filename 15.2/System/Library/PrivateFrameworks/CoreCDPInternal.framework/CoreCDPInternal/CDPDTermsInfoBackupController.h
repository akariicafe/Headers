@interface CDPDTermsInfoBackupController : NSObject

- (void)fetchTermsAcceptanceForAccount:(id)a0 completion:(id /* block */)a1;
- (void)saveTermsAcceptance:(id)a0 completion:(id /* block */)a1;
- (id)_buildSecureBackupTermsInfo:(id)a0;

@end
