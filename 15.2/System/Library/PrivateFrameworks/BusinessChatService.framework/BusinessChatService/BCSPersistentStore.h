@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface BCSPersistentStore : NSObject <BCSBatchable> {
    long long _batchCount;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, nonatomic) struct sqlite3 { } *openedDatabase;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (const char *)debugQueueName;

- (id)databasePath;
- (long long)schemaVersion;
- (void)beginBatch;
- (const char *)schema;
- (void)schemaVersionWillChangeForDatabase:(struct sqlite3 { } *)a0 fromSchemaVersion:(long long)a1 toSchemaVersion:(long long)a2;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)endBatch;
- (void)schemaVersionDidChangeForDatabase:(struct sqlite3 { } *)a0 fromSchemaVersion:(long long)a1 toSchemaVersion:(long long)a2;
- (BOOL)deleteDatabaseFile;

@end
