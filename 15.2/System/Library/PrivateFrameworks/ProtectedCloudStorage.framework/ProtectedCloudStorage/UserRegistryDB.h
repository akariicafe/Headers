@class NSString, NSObject;
@protocol OS_os_log;

@interface UserRegistryDB : NSObject

@property struct sqlite3 { } *sqliteHandle;
@property struct sqlite3_stmt { } *recordIDStatment;
@property struct sqlite3_stmt { } *replaceStatment;
@property struct sqlite3_stmt { } *deleteStatment;
@property struct sqlite3_stmt { } *insertWatch;
@property struct sqlite3_stmt { } *updateWatch;
@property struct sqlite3_stmt { } *insertMirrorKey;
@property struct sqlite3_stmt { } *updateMirrorKey;
@property struct sqlite3_stmt { } *markMirrorKey;
@property struct sqlite3_stmt { } *deleteMirrorKeys;
@property struct sqlite3_stmt { } *resetCurrentMirrorKey;
@property struct sqlite3_stmt { } *insertEscrowKey;
@property struct sqlite3_stmt { } *updateEscrowKey;
@property struct sqlite3_stmt { } *deleteEscrowKey;
@property struct sqlite3_stmt { } *queryEscrowKey;
@property struct sqlite3_stmt { } *queryEscrowKeysAll;
@property struct sqlite3_stmt { } *insertWatchKey;
@property struct sqlite3_stmt { } *queryMissingKeys;
@property struct sqlite3_stmt { } *queryWatches;
@property (retain) NSObject<OS_os_log> *oslog;
@property (retain) NSString *dsid;

- (BOOL)syncedKeyToDevice:(id)a0 type:(int)a1 device:(id)a2;
- (BOOL)endTransaction:(BOOL)a0;
- (BOOL)replaceConfigRecord:(id)a0 data:(id)a1;
- (BOOL)setEscrowKey:(id)a0 escrowBlob:(id)a1;
- (BOOL)deleteRecordAll;
- (BOOL)beginExclusiveTransaction;
- (id)initWithDSID:(id)a0;
- (BOOL)updateEscrowKey:(id)a0 escrowBlob:(id)a1;
- (BOOL)updateSyncDevice:(id)a0 seen:(id)a1 version:(id)a2;
- (BOOL)deleteMirrorKeys:(int)a0;
- (id)getConfigData:(id)a0;
- (void).cxx_destruct;
- (id)missingKeysFromDevice:(id)a0 type:(int)a1;
- (BOOL)deleteRecordID:(id)a0;
- (id)syncDevices;
- (BOOL)deleteEscrowKey:(id)a0;
- (BOOL)setupDatabase;
- (BOOL)replaceRecordID:(id)a0 data:(id)a1 publicKey:(id)a2;
- (id)queryEscrowKeys;
- (BOOL)setMirrorKey:(id)a0 service:(int)a1 type:(int)a2 publicIdentity:(id)a3;
- (BOOL)replaceRecord:(id)a0 type:(int)a1 data:(id)a2 publicKey:(id)a3;
- (void)dealloc;
- (id)getRecordIDData:(id)a0;
- (BOOL)markMirrorKey:(int)a0 type:(int)a1;
- (BOOL)prepare:(const char *)a0 statement:(struct sqlite3_stmt **)a1;
- (id)queryEscrowKey:(id)a0;
- (id)getData:(id)a0 type:(int)a1;
- (BOOL)updateMirrorKey:(id)a0 service:(int)a1 type:(int)a2 newType:(int)a3 current:(BOOL)a4;

@end
