@class NSString;

@interface CDPProtectedCloudStorageProxyImpl : NSObject <CDPProtectedCloudStorageProxy>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isWalrusEnabledWithOptions:(id)a0 error:(id *)a1;
- (BOOL)pcsIdentityMigrateToiCDPWithInfo:(id)a0 error:(id *)a1;
- (BOOL)setWalrusEnabled:(BOOL)a0 accountIdentifier:(id)a1 options:(id)a2 error:(id *)a3;
- (BOOL)pcsRestoreLocalBackup:(id)a0 error:(id *)a1;
- (struct _PCSIdentitySetData { } *)pcsIdentitySetupWithInfo:(id)a0 error:(id *)a1;
- (BOOL)repairWalrusWithAccountIdentifier:(id)a0 options:(id)a1 error:(id *)a2;
- (BOOL)pcsSynchronizeKeysWithInfo:(id)a0 error:(id *)a1;
- (BOOL)pcsIdentitySetIsInICDPLocal:(struct _PCSIdentitySetData { } *)a0 error:(id *)a1;
- (struct _PCSIdentitySetData { } *)pcsIdentityCreateWithInfo:(id)a0 error:(id *)a1;
- (BOOL)pcsIdentitySetIsInICDPNetwork:(struct _PCSIdentitySetData { } *)a0 options:(id)a1 error:(id *)a2;
- (BOOL)pcsIdentitySetCompanionInCircle:(struct _PCSIdentitySetData { } *)a0 error:(id *)a1;
- (BOOL)_performPCSBlock:(id /* block */)a0 error:(id *)a1;

@end
