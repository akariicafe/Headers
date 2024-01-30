@class NSString, NSArray, NSHashTable, PQLConnection, NSObject;
@protocol OS_dispatch_queue;

@interface CKDPQLCache : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dbQueue;
@property (nonatomic) unsigned long long openHandles;
@property (readonly, nonatomic) NSHashTable *containers;
@property (readonly, nonatomic) PQLConnection *database;
@property (readonly, nonatomic) BOOL isOpen;
@property (readonly, nonatomic) NSString *path;
@property (readonly, nonatomic) NSArray *createInitialTablesSQL;

- (id)initWithContainer:(id)a0;
- (BOOL)closeWithError:(id *)a0;
- (BOOL)openWithError:(id *)a0;
- (BOOL)forceCloseWithError:(id *)a0;
- (BOOL)_setupCacheWithError:(id *)a0;
- (BOOL)_closeWithError:(id *)a0 force:(BOOL)a1;
- (id)_newConnection:(id)a0;
- (BOOL)removeCorruptDatabaseWithError:(id *)a0;
- (id)infoToUpgradeFromVersion:(unsigned long long)a0;
- (BOOL)resetWithError:(id *)a0;
- (void)performOnDBQueue:(id /* block */)a0;
- (BOOL)_setupConnectionWithError:(id *)a0;
- (BOOL)removeDatabaseFilesWithError:(id *)a0;
- (void).cxx_destruct;
- (BOOL)_truncateAndReconnectToDatabaseWithError:(id *)a0;
- (BOOL)_lockedOpenDatabase:(id *)a0;

@end
