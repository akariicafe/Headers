@class NSString, ICSQLiteConnection;

@interface ICPlayActivityTable : NSObject {
    ICSQLiteConnection *_databaseConnection;
    NSString *_databasePath;
}

@property (nonatomic) unsigned long long currentEventsRevision;
@property (readonly, copy, nonatomic) NSString *eventsRevisionVersionToken;

+ (BOOL)_setupDatabase:(id)a0;
+ (id)_eventsDatabaseTableName;
+ (id)_propertiesDatabaseTableName;
+ (id)_defaultDatabasePath;

- (id)init;
- (BOOL)_removeDatabaseReturningError:(id *)a0;
- (id)_valueForDatabasePropertyKey:(id)a0;
- (BOOL)_setValue:(id)a0 forDatabasePropertyKey:(id)a1;
- (id)_revisionsIndexSetUsingPersisentIDGenerationBlock:(id /* block */)a0 count:(unsigned long long)a1;
- (BOOL)_getPlayActivityEvents:(id *)a0 relevantRevisionsIndexSet:(id *)a1 withStartRevision:(unsigned long long)a2 endRevision:(unsigned long long)a3 storeAccountID:(unsigned long long)a4 shouldFilterStoreAccountID:(BOOL)a5 additionalRevisionsIndexSet:(id)a6 ignoredRevisionsIndexSet:(id)a7 error:(id *)a8;
- (void).cxx_destruct;
- (void)_migrateDatabaseFiles;
- (BOOL)insertPlayActivityEvent:(id)a0 withRevision:(unsigned long long)a1 returningError:(id *)a2;
- (BOOL)getPlayActivityEvents:(id *)a0 relevantRevisionsIndexSet:(id *)a1 withStartRevision:(unsigned long long)a2 endRevision:(unsigned long long)a3 additionalRevisionsIndexSet:(id)a4 ignoredRevisionsIndexSet:(id)a5 error:(id *)a6;
- (BOOL)removePlayActivityEventsUpToRevision:(unsigned long long)a0 returningError:(id *)a1;
- (id)revisionsIndexSetForPlayActivityEvents:(id)a0;
- (BOOL)getPlayActivityEvents:(id *)a0 relevantRevisionsIndexSet:(id *)a1 withStartRevision:(unsigned long long)a2 endRevision:(unsigned long long)a3 storeAccountID:(unsigned long long)a4 additionalRevisionsIndexSet:(id)a5 ignoredRevisionsIndexSet:(id)a6 error:(id *)a7;
- (id)revisionsIndexSetForPlayActivityEventPersistentIDs:(id)a0;
- (void)performTransactionWithBlock:(id /* block */)a0;
- (id)initWithDatabasePath:(id)a0;

@end
