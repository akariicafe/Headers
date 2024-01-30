@class NSString;

@interface CDPProtectedCloudStorageProxyImpl : NSObject <CDPProtectedCloudStorageProxy>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)pcsRestoreLocalBackup:(id)a0 error:(id *)a1;
- (BOOL)pcsSynchronizeKeysWithInfo:(id)a0 error:(id *)a1;
- (BOOL)pcsIdentitySetIsInICDPNetwork:(struct _PCSIdentitySetData { } *)a0 options:(id)a1 error:(id *)a2;
- (BOOL)pcsIdentitySetIsInICDPLocal:(struct _PCSIdentitySetData { } *)a0 error:(id *)a1;
- (struct _PCSIdentitySetData { } *)pcsIdentityCreateWithInfo:(id)a0 error:(id *)a1;
- (BOOL)pcsIdentitySetCompanionInCircle:(struct _PCSIdentitySetData { } *)a0 error:(id *)a1;
- (struct _PCSIdentitySetData { } *)pcsIdentitySetupWithInfo:(id)a0 error:(id *)a1;
- (BOOL)pcsIdentityMigrateToiCDPWithInfo:(id)a0 error:(id *)a1;
- (BOOL)pcsIdentityMigrateToStingrayWithInfo:(id)a0 error:(id *)a1;
- (BOOL)_performPCSBlock:(id /* block */)a0 error:(id *)a1;

@end
