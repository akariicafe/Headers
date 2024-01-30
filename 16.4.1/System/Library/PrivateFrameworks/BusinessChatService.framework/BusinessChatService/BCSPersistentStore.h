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

- (long long)schemaVersion;
- (const char *)schema;
- (id)databasePath;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)endBatch;
- (void)beginBatch;
- (BOOL)deleteDatabaseFile;
- (void)schemaVersionDidChangeForDatabase:(struct sqlite3 { } *)a0 fromSchemaVersion:(long long)a1 toSchemaVersion:(long long)a2;
- (void)schemaVersionWillChangeForDatabase:(struct sqlite3 { } *)a0 fromSchemaVersion:(long long)a1 toSchemaVersion:(long long)a2;

@end
