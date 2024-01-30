@class NSString, CSDBThreadedRecordStore, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface IDSKVStore : NSObject {
    NSObject<OS_dispatch_queue> *_ivarQueue;
    NSObject<OS_dispatch_source> *_databaseCloseTimer;
    double _databaseLastUpdateTime;
}

@property (copy, nonatomic) NSString *storeName;
@property (copy, nonatomic) NSString *path;
@property (retain, nonatomic) CSDBThreadedRecordStore *messageStore;
@property (nonatomic) unsigned int dataProtectionClass;

+ (void)_initializeMessageStoreIfNeeded:(id)a0 path:(id)a1 dataProtectionClass:(unsigned int)a2;
+ (void)_invalidateCachesForMessageStore:(id)a0;

- (void)__closeDatabaseOnIvarQueue;
- (void)_onIvarQueue_deleteDatesBefore:(id)a0 after:(id)a1;
- (id)initWithPath:(id)a0 storeName:(id)a1 dataProtectionClass:(unsigned int)a2;
- (id)dataForKey:(id)a0 error:(id *)a1;
- (void)_onIvarQueue_persistSerializedValue:(id)a0 forKey:(id)a1 valueType:(char)a2;
- (void)_onIvarQueue_performBlock:(id /* block */)a0 initializeStore:(BOOL)a1 waitUntilDone:(BOOL)a2;
- (id)_onIvarQueue_serializedValuesUpToLimit:(unsigned long long)a0 valueType:(char)a1 deleteContext:(id *)a2;
- (BOOL)deleteBatchWithContext:(id)a0 error:(id *)a1;
- (void)_setDatabaseCloseTimerOnIvarQueue;
- (void)_onIvarQueue_deleteSerializedValueForKey:(id)a0 valueType:(char)a1;
- (void).cxx_destruct;
- (id)datasUpToLimit:(unsigned long long)a0 deleteContext:(id *)a1 error:(id *)a2;
- (void)_clearDatabaseCloseTimerOnIvarQueue;
- (void)_performInitialHousekeepingOnIvarQueue;
- (void)closeDatabaseSynchronously:(BOOL)a0;
- (void)_onIvarQueue_deleteUpToRowID:(unsigned long long)a0 valueType:(char)a1;
- (void)_onIvarQueue_performBlock:(id /* block */)a0 initializeStore:(BOOL)a1;
- (BOOL)persistData:(id)a0 forKey:(id)a1 error:(id *)a2;
- (void)deleteDatabase;
- (id)_onIvarQueue_serializedValueForKey:(id)a0 valueType:(char)a1;
- (BOOL)deleteEntriesBeforeDate:(id)a0 afterDate:(id)a1 error:(id *)a2;

@end
