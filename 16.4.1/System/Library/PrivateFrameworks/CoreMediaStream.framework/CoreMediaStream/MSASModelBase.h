@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface MSASModelBase : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *statementQueue;
@property (nonatomic) struct __CFDictionary { } *statements;
@property (readonly, nonatomic) struct sqlite3 { } *dbQueueDB;
@property (readonly, nonatomic) NSString *personID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *dbQueue;
@property (nonatomic) BOOL dbWasRecreated;

- (void)endTransaction;
- (id)persistentObjectForKey:(id)a0;
- (void)beginTransaction;
- (struct sqlite3 { } *)db;
- (void)shutDownForDestruction:(BOOL)a0 completionBlock:(id /* block */)a1;
- (BOOL)dbQueueUpgradeFromDatabaseVersion:(int)a0 currentVersion:(int)a1;
- (void)setPersistentObject:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (void)dbQueueBeginTransaction;
- (void)dbQueueDeletePersistentValueWithKey:(id)a0;
- (void)dbQueueEndTransaction;
- (void)dbQueueInitializeDatabasePath:(id)a0 currentVersion:(int)a1;
- (id)dbQueuePersistentDataForKey:(id)a0;
- (id)dbQueuePersistentObjectForKey:(id)a0;
- (id)dbQueuePersistentStringForKey:(id)a0;
- (void)dbQueueRollbackTransaction;
- (void)dbQueueSetPersistentData:(id)a0 forKey:(id)a1;
- (void)dbQueueSetPersistentObject:(id)a0 forKey:(id)a1;
- (void)dbQueueSetPersistentString:(id)a0 forKey:(id)a1;
- (void)deletePersistentValueWithKey:(id)a0;
- (id)initWithPersonID:(id)a0 databasePath:(id)a1 currentVersion:(int)a2;
- (id)persistentStringForKey:(id)a0;
- (void)setPersistentString:(id)a0 forKey:(id)a1;
- (struct sqlite3_stmt { } *)statementForString:(id)a0;

@end
