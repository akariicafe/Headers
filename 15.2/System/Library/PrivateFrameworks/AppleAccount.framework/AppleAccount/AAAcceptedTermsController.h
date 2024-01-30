@interface AAAcceptedTermsController : NSObject

- (void)saveTermsAcceptance:(id)a0 forAccount:(id)a1;
- (void)_repairTermsBackup:(id)a0 forAccount:(id)a1;
- (void)fetchTermsAcceptanceForAccount:(id)a0 completion:(id /* block */)a1;

@end
