@class NSString, NSMutableDictionary, BRCServerChangeState, NSDate;

@interface BRCServerPersistedState : NSObject <NSSecureCoding, NSCopying, PQLBindable> {
    NSMutableDictionary *_pendingMigrations;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDate *lastSyncDownDate;
@property (nonatomic) long long nextRank;
@property (retain) BRCServerChangeState *sharedDatabaseChangeState;
@property (nonatomic) unsigned long long minLastUsedTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithState:(id)a0;
- (id)init;
- (void)sqliteBind:(struct sqlite3_stmt { } *)a0 index:(int)a1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)saveToDB:(id)a0;
- (void)initiateMigrationQueryForMangledIDs:(id)a0 key:(id)a1;
- (id)migrationQueryKeyForMangledID:(id)a0 continuationCursor:(id *)a1;
- (id)dumpMigrationQueriesForMangledID:(id)a0;
- (void)migrationQueryForMangledID:(id)a0 key:(id)a1 didUpdateWithCursor:(id)a2;
- (BOOL)mangledIDIsPendingMigration:(id)a0;

@end
