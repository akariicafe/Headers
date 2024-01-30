@interface MKBKeyStoreDevice : NSObject

+ (id)sharedService;

- (id)getFileHandleForData:(id)a0;
- (int)Event:(int)a0;
- (int)ChangeSystemSecretWithEscrow:(id)a0 FromOldPasscode:(id)a1 ToNew:(id)a2 withOpaqueDats:(id)a3 withKeepState:(int)a4;
- (int)SeshatDebug:(int)a0;
- (int)SeshatEnroll:(id)a0;
- (int)SeshatRecover:(id)a0;
- (int)SeshatUnlock:(id)a0;
- (id)_CreateMKBServerConnection;
- (int)addPersonaKeyForUserSession:(unsigned int)a0 withSecret:(id)a1 withPersonaUUIDString:(id)a2 forPath:(id)a3;
- (int)backupUUIDForVolume:(id)a0 bagUUID:(id *)a1;
- (int)changeClassKeysGenerationWithSecret:(id)a0 withGenerationOption:(int)a1;
- (int)changeSystemSecretFromOldPasscode:(id)a0 ToNew:(id)a1 withOpaqueData:(id)a2;
- (id)copySytemSecretBlob;
- (int)createKeybagForUserSession:(id)a0 withSessionUID:(int)a1 WithSecret:(id)a2 withGracePeriod:(int)a3 withOpaqeStuff:(id)a4;
- (int)createSyncBagForUserSession:(id)a0 withSessionUID:(int)a1;
- (int)deleteKeybagForUserSession:(int)a0;
- (int)disableBackupForVolume:(id)a0;
- (int)enableBackupForVolume:(id)a0 withSecret:(id)a1 bagData:(id *)a2;
- (id)getBackupkeyForVolume:(id)a0 andCryptoID:(unsigned long long)a1 withreturnValue:(int *)a2;
- (BOOL)getDeviceLockStateForUser:(int)a0 extendedState:(BOOL)a1 withLockStateInfo:(int *)a2;
- (id)getLockStateForUser:(int)a0;
- (int)isKeyRollingWithKeyStatus:(int *)a0;
- (int)loadKeybagForUserSession:(id)a0 withSessionID:(int)a1 withSecret:(id)a2 shouldSetGracePeriod:(BOOL)a3 withGracePeriod:(int)a4 isInEarlyStar:(BOOL)a5;
- (int)loadSyncBagForUserSession:(id)a0 withSessionUID:(int)a1;
- (int)migrateFS;
- (int)passcodeUnlockFailed;
- (int)passcodeUnlockStart;
- (int)passcodeUnlockSuccess;
- (int)registerOTABackup:(id)a0 withSecret:(id)a1;
- (int)removePersonaKeyForUserSession:(unsigned int)a0 withPersonaUUIDString:(id)a1 withVolumeUUIDString:(id)a2;
- (int)removeSyncBagForUserSession:(id)a0 withSessionUID:(int)a1;
- (int)setVolumeToPersona:(id)a0 withPersonaString:(id)a1;
- (int)startBackupSessionForVolume:(id)a0;
- (int)stashCommit:(unsigned int)a0 WithFlags:(unsigned int)a1;
- (int)stashCreateWithSecret:(id)a0 withMode:(int)a1 withUID:(unsigned int)a2 WithFlags:(unsigned int)a3;
- (int)stashDestroy;
- (int)stashVerifywithValidity:(int *)a0 WithUID:(unsigned int)a1 WithFlags:(unsigned int)a2;
- (int)stopBackupSessionForVolume:(id)a0;
- (int)unloadKeybagForUserSession:(int)a0;
- (int)unloadSyncBagForUserSession:(id)a0 withSessionUID:(int)a1;
- (int)verifySyncBagForUserSession:(id)a0 withSessionUID:(int)a1;

@end
