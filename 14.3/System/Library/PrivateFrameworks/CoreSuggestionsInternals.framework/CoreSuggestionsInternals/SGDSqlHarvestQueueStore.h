@class SGSqliteDatabase, NSString;

@interface SGDSqlHarvestQueueStore : NSObject {
    SGSqliteDatabase *_db;
    NSString *_dirPath;
}

- (struct { BOOL x0; BOOL x1; BOOL x2; int x3; int x4; int x5; struct { int x0; int x1; unsigned int x2; } x6; struct { int x0; int x1; unsigned int x2; } x7; struct { int x0; int x1; unsigned int x2; } x8; long long x9; BOOL x10; double x11; int x12; })popByItemId:(long long)a0;
- (void)close;
- (void).cxx_destruct;
- (struct { BOOL x0; BOOL x1; BOOL x2; int x3; int x4; int x5; struct { int x0; int x1; unsigned int x2; } x6; struct { int x0; int x1; unsigned int x2; } x7; struct { int x0; int x1; unsigned int x2; } x8; long long x9; BOOL x10; double x11; int x12; })_popWithStringAfterWhereClause:(id)a0 binder:(id /* block */)a1;
- (void)markAsFailedWithItemId:(long long)a0;
- (struct { BOOL x0; BOOL x1; BOOL x2; int x3; int x4; int x5; struct { int x0; int x1; unsigned int x2; } x6; struct { int x0; int x1; unsigned int x2; } x7; struct { int x0; int x1; unsigned int x2; } x8; long long x9; BOOL x10; double x11; int x12; })popItem;
- (struct { unsigned long long x0; unsigned long long x1; long long x2; })fetchMetadata;
- (BOOL)_migrateDb:(id)a0;
- (id)filesIdsToOpen;
- (id)_getDb;
- (id)initWithDirectory:(id)a0;
- (void)resetProgressForItemId:(long long)a0;
- (struct { BOOL x0; BOOL x1; BOOL x2; int x3; int x4; int x5; struct { int x0; int x1; unsigned int x2; } x6; struct { int x0; int x1; unsigned int x2; } x7; struct { int x0; int x1; unsigned int x2; } x8; long long x9; BOOL x10; double x11; int x12; })popBySourceKey:(id)a0 messageId:(id)a1;
- (void)createFile:(id /* block */)a0;
- (id)_recreateDb;
- (void)garbageCollectFiles:(id /* block */)a0;
- (void)createItemWithId:(long long)a0 sourceKey:(id)a1 messageId:(id)a2 customPriorityCriteria:(unsigned char)a3 receivedOnPower:(BOOL)a4 receivedTime:(double)a5 storageReason:(int)a6 fileId:(int)a7 metadataChunk:(struct { int x0; int x1; unsigned int x2; } *)a8 htmlChunk:(struct { int x0; int x1; unsigned int x2; } *)a9 textChunk:(struct { int x0; int x1; unsigned int x2; } *)a10;
- (struct { BOOL x0; BOOL x1; BOOL x2; int x3; int x4; int x5; struct { int x0; int x1; unsigned int x2; } x6; struct { int x0; int x1; unsigned int x2; } x7; struct { int x0; int x1; unsigned int x2; } x8; long long x9; BOOL x10; double x11; int x12; })popHighPriorityItem;
- (BOOL)deleteWithItemId:(long long)a0 fileId:(int)a1;
- (struct { BOOL x0; BOOL x1; BOOL x2; int x3; int x4; int x5; struct { int x0; int x1; unsigned int x2; } x6; struct { int x0; int x1; unsigned int x2; } x7; struct { int x0; int x1; unsigned int x2; } x8; long long x9; BOOL x10; double x11; int x12; })popByCustomPriorityCriteria:(unsigned char)a0;

@end
