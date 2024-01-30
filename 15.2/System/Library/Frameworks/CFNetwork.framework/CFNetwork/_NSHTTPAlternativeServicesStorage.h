@class NSMutableDictionary, NSURL, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface _NSHTTPAlternativeServicesStorage : NSObject {
    NSURL *_path;
    NSObject<OS_dispatch_queue> *_workQueue;
    BOOL _garbageCollectionDispatched;
    BOOL _dbInitialized;
    BOOL _isMemoryStore;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
    NSMutableSet *memoryEntries;
    NSMutableSet *clearEntries;
    NSMutableDictionary *speculativeEntries;
    struct sqlite3 { } *dbConnection;
    struct sqlite3_stmt { } *selectAllEntriesStmt;
    struct sqlite3_stmt { } *selectAllValidEntriesStmt;
    struct sqlite3_stmt { } *selectEntriesStmt;
    struct sqlite3_stmt { } *selectEntriesWithRegistrableDomainStmt;
    struct sqlite3_stmt { } *insertEntriesStmt;
    struct sqlite3_stmt { } *deleteWithTimeStmt;
    struct sqlite3_stmt { } *deleteWithHostAndPortStmt;
    struct sqlite3_stmt { } *deleteWithRegistrableDomainStmt;
    struct sqlite3_stmt { } *deleteExpiredEntriesStmt;
    struct sqlite3_stmt { } *trimDbStmt;
}

@property (readonly, nonatomic) NSURL *path;

+ (id)sharedPersistentStore;

- (id)HTTPServiceEntriesWithFilter:(id)a0;
- (void)removeHTTPAlternativeServiceEntriesWithRegistrableDomain:(id)a0;
- (id)initInMemoryStore;
- (id)entries;
- (void)storeHTTPServiceEntry:(id)a0;
- (void)removeHTTPAlternativeServiceEntriesWithHost:(id)a0 port:(long long)a1;
- (void).cxx_destruct;
- (id)init;
- (id)HTTPServiceEntriesWithRegistrableDomain:(id)a0;
- (void)dealloc;
- (void)removeHTTPAlternativeServiceEntriesCreatedAfterDate:(id)a0;
- (id)initPersistentStoreWithURL:(id)a0;

@end
