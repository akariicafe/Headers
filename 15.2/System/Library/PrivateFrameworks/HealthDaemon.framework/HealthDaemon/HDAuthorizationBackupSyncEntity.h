@interface HDAuthorizationBackupSyncEntity : HDAuthorizationSyncEntity

+ (BOOL)supportsSyncStore:(id)a0;
+ (id)createCodableSourceAuthorizationWithSource:(id)a0 syncSession:(id)a1;
+ (id)syncEntityIdentifier;
+ (id)backupInfoUserDefaultsKey;
+ (void)didGenerateCodableSourceAuthorizationsForSyncSession:(id)a0;
+ (void)resetAuthorizationBackupIdentifiers;
+ (BOOL)generateSyncObjectsForSession:(id)a0 syncAnchorRange:(struct HDSyncAnchorRange { long long x0; long long x1; })a1 profile:(id)a2 messageHandler:(id)a3 error:(id *)a4;
+ (id)excludedSyncStoresForSession:(id)a0;
+ (id)authorizationBackupPushIdentifierWithSyncStore:(id)a0;
+ (id)authorizationBackupPullIdentifierWithSyncStore:(id)a0;
+ (long long)receiveSyncObjects:(id)a0 syncStore:(id)a1 profile:(id)a2 error:(id *)a3;
+ (void)setAuthorizationBackupPushIdentifier:(id)a0 syncStore:(id)a1;

@end
