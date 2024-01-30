@class NSString, _SYSharedServiceDB, NSObject;
@protocol OS_dispatch_semaphore;

@interface NMSPersistentDictionary : NSObject <NSLocking> {
    Class _objectClass;
    NSString *_path;
    struct __CFString { } *_loggingFacility;
    NSObject<OS_dispatch_semaphore> *_lock;
    _SYSharedServiceDB *_sharedDB;
    struct sqlite3 { } *_db;
    struct sqlite3_stmt { } *_fetch;
    struct sqlite3_stmt { } *_insert;
    struct sqlite3_stmt { } *_reset;
    struct sqlite3_stmt { } *_remove;
    struct sqlite3_stmt { } *_removeAll;
    struct sqlite3_stmt { } *_byDate;
    struct sqlite3_stmt { } *_byEnqueueDate;
}

- (void)_prepareStatements;
- (void)removeObjectForKey:(id)a0;
- (void)lock;
- (id)objectForKey:(id)a0;
- (void)unlock;
- (void)_withDB:(id /* block */)a0;
- (void)removeAllObjects;
- (void)dealloc;
- (void)setObject:(id)a0 forKey:(id)a1 expires:(id)a2;
- (id)init;
- (void)enumerateObjectsSortedByExpirationDate:(id /* block */)a0;
- (void).cxx_destruct;
- (void)_openDBForceRecreate:(BOOL)a0;
- (void)_ensureDBSchema;
- (unsigned long long)_checkSchemaVersion;
- (id)_dataFromObject:(id)a0;
- (id)_objectFromData:(id)a0;
- (void)enumerateObjectsSortedByEnqueueDate:(id /* block */)a0;
- (id)initWithPath:(id)a0 objectClass:(Class)a1 loggingFacility:(struct __CFString { } *)a2;
- (id)initWithSharedDBForService:(id)a0 objectClass:(Class)a1;
- (void)resetObject:(id)a0 forKey:(id)a1;

@end
