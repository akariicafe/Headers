@interface AAAcceptedTermsController : NSObject

- (void)fetchTermsAcceptanceForAccount:(id)a0 completion:(id /* block */)a1;
- (void)saveTermsAcceptance:(id)a0 forAccount:(id)a1;
- (void)_repairTermsBackup:(id)a0 forAccount:(id)a1;

@end
