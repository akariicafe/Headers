@class NSString, CDPContext;

@interface CDPDSecureBackupProxyImpl : NSObject <CDPDSecureBackupProxy>

@property (retain, nonatomic) CDPContext *cdpContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)disableWithInfo:(id)a0 error:(id *)a1;
- (void)disableWithInfo:(id)a0 completionBlock:(id /* block */)a1;
- (void)enableWithInfo:(id)a0 completionBlock:(id /* block */)a1;
- (id)initWithContext:(id)a0;
- (id)recoverWithInfo:(id)a0 error:(id *)a1;
- (void)getAccountInfoWithInfo:(id)a0 completionBlockWithResults:(id /* block */)a1;
- (void)recoverWithInfo:(id)a0 completionBlockWithResults:(id /* block */)a1;
- (void)cacheRecoveryKey:(id)a0 completionBlock:(id /* block */)a1;
- (void).cxx_destruct;
- (void)uncacheAllSecrets;
- (id)_secureBackup;
- (id)accountInfoWithInfo:(id)a0 error:(id *)a1;
- (BOOL)enableWithInfo:(id)a0 error:(id *)a1;

@end
