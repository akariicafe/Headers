@interface CDPCustodianRecoveryKeyController : NSObject

- (void)createRecoveryKeyWithContext:(id)a0 forUUID:(id)a1 completion:(id /* block */)a2;
- (void)deleteRecoveryKeyWithContext:(id)a0 forUUID:(id)a1 completion:(id /* block */)a2;
- (void)validateRecoveryKey:(id)a0 withContext:(id)a1 completion:(id /* block */)a2;

@end
