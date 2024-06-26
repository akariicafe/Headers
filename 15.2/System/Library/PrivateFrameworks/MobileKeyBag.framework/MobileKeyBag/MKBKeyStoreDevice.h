@interface MKBKeyStoreDevice : NSObject

+ (id)sharedService;

- (int)registerOTABackup:(id)a0 withSecret:(id)a1;
- (id)copySytemSecretBlob;
- (BOOL)mountUserSessionVolumeforID:(int)a0 WithReturnedError:(id *)a1;
- (BOOL)addSyncServiceSource:(id)a0 ToUserSessionWithID:(int)a1 WithReturnedError:(id *)a2;
- (id)loadUserSession:(id)a0 withSecret:(id)a1 withreturnedError:(id *)a2;
- (int)changeSystemSecretFromOldPasscode:(id)a0 ToNew:(id)a1 withOpaqueData:(id)a2;
- (id)userSessionAttributesForSession:(id)a0 WithReturnedError:(id *)a1;
- (int)startBackupSessionForVolume:(id)a0;
- (int)isKeyRollingWithKeyStatus:(int *)a0;
- (id)setuserSessionAttributes:(id)a0 WithReturnedError:(id *)a1;
- (int)SeshatUnlock:(id)a0;
- (BOOL)isDeviceInLoginSessionWithReturnedError:(id *)a0;
- (int)stashDestroy;
- (int)currentSyncBubbledIDWithReturnedError:(id *)a0;
- (BOOL)deleteUserSessionSecureBlobWithReturnedError:(id *)a0;
- (BOOL)unmountUserSessionVolumeforID:(int)a0 WithReturnedError:(id *)a1;
- (int)SeshatEnroll:(id)a0;
- (int)disableBackupForVolume:(id)a0;
- (id)migrateUserSession:(id)a0 fromPath:(id)a1 withSecret:(id)a2 withOpaqueData:(id)a3 withreturnedError:(id *)a4;
- (id)_CreateMKBServerConnection;
- (id)listAllUserSyncBubbleIDsWithReturnedError:(id *)a0;
- (int)passcodeUnlockSuccess;
- (int)stashCommit:(unsigned int)a0 WithFlags:(unsigned int)a1;
- (int)backupUUIDForVolume:(id)a0 bagUUID:(id *)a1;
- (int)Event:(int)a0;
- (id)switchBlockTasksInfoWithReturnedError:(id *)a0;
- (int)migrateFS;
- (id)getBackupkeyForVolume:(id)a0 andCryptoID:(unsigned long long)a1 withreturnValue:(int *)a2;
- (id)createUserSession:(id)a0 withSecret:(id)a1 withOpaqueData:(id)a2 withreturnedError:(id *)a3;
- (BOOL)unloadUserSession:(id)a0 withreturnedError:(id *)a1;
- (id)userSessionLRUInfoWithReturnedError:(id *)a0;
- (int)passcodeUnlockFailed;
- (BOOL)deleteUserSessionBlobWithReturnedError:(id *)a0;
- (id)retriveUserSessionBlobWithreturnedError:(id *)a0;
- (BOOL)startUserSyncBubbleToSession:(int)a0 WithReturnedError:(id *)a1;
- (id)getLockStateForUser:(int)a0;
- (id)getFileHandleForData:(id)a0;
- (BOOL)removeSyncServiceSource:(id)a0 ToUserSessionWithID:(int)a1 WithReturnedError:(id *)a2;
- (int)changeClassKeysGenerationWithSecret:(id)a0 withGenerationOption:(int)a1;
- (int)SeshatRecover:(id)a0;
- (id)retriveUserSessionSecureBlobWithreturnedError:(id *)a0;
- (BOOL)removeUserSession:(id)a0 withreturnedError:(id *)a1;
- (BOOL)getDeviceLockStateForUser:(int)a0 extendedState:(BOOL)a1 withLockStateInfo:(int *)a2;
- (id)listAllUserSessionIDSWithReturnedError:(id *)a0;
- (int)enableBackupForVolume:(id)a0 withSecret:(id)a1 bagData:(id *)a2;
- (int)limitNumberOfUserSessionsTo:(int)a0 WithReturnedError:(id *)a1;
- (int)stashVerifywithValidity:(int *)a0 WithUID:(unsigned int)a1 WithFlags:(unsigned int)a2;
- (id)listSyncServiceSourcesForUserSession:(id)a0 WithReturnedError:(id *)a1;
- (id)configureLoginUI:(int)a0 WithReturnedError:(id *)a1;
- (int)passcodeUnlockStart;
- (BOOL)removeAllUserSyncBubbleIDsWithReturnedError:(id *)a0;
- (int)stashCreateWithSecret:(id)a0 withMode:(int)a1 withUID:(unsigned int)a2 WithFlags:(unsigned int)a3;
- (BOOL)switchToLoginUIWithReturnedError:(id *)a0;
- (BOOL)switchUserSession:(id)a0 withOpaqueData:(id)a1 withreturnedError:(id *)a2;
- (BOOL)setUserSessionDeviceConfigurations:(int)a0 WithReturnedError:(id *)a1;
- (BOOL)MKBUserSessionSetInternalTest:(BOOL)a0 WithReturnedError:(id *)a1;
- (int)SeshatDebug:(int)a0;
- (id)foregroundUserSessionAtrributesWithReturnedError:(id *)a0;
- (BOOL)setUserSessionSecureBackupBlob:(id)a0 WithReturnedError:(id *)a1;
- (int)stopBackupSessionForVolume:(id)a0;
- (int)ChangeSystemSecretWithEscrow:(id)a0 FromOldPasscode:(id)a1 ToNew:(id)a2 withOpaqueDats:(id)a3 withKeepState:(int)a4;
- (BOOL)fetchReplacementVoucherPort:(unsigned int)a0 foraccountID:(id)a1 withTargetPort:(unsigned int *)a2 generationSet:(BOOL)a3 withreturnedError:(id *)a4;
- (BOOL)stopUserSyncBubbleToSession:(int)a0 WithReturnedError:(id *)a1;

@end
