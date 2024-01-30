@class NSString, CDPContext;

@interface CDPDSecureBackupProxyImpl : NSObject <CDPDSecureBackupProxy>

@property (retain, nonatomic) CDPContext *cdpContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)disableWithInfo:(id)a0 completionBlock:(id /* block */)a1;
- (id)secureBackupContextWithInfo:(id)a0;
- (id)recoverWithInfo:(id)a0 error:(id *)a1;
- (BOOL)disableWithInfo:(id)a0 error:(id *)a1;
- (id)initWithContext:(id)a0;
- (BOOL)enableWithInfo:(id)a0 error:(id *)a1;
- (void)cacheRecoveryKey:(id)a0 completionBlock:(id /* block */)a1;
- (id)secureBackupContext;
- (void)enableWithInfo:(id)a0 completionBlock:(id /* block */)a1;
- (id)accountInfoWithInfo:(id)a0 error:(id *)a1;
- (void)uncacheAllSecrets;
- (void).cxx_destruct;
- (id)activityTypeString;

@end
