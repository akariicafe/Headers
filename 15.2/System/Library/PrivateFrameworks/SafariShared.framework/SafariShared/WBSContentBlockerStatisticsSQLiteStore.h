@class WBSSQLiteDatabase, NSURL, NSObject;
@protocol OS_dispatch_queue;

@interface WBSContentBlockerStatisticsSQLiteStore : NSObject {
    NSURL *_databaseURL;
    NSObject<OS_dispatch_queue> *_databaseQueue;
    WBSSQLiteDatabase *_database;
}

@property (class, readonly, nonatomic) WBSContentBlockerStatisticsSQLiteStore *standardStore;

+ (id)_defaultDatabaseURL;

- (id)initWithDatabaseURL:(id)a0;
- (void)_clearStatisticsAfter:(id)a0 before:(id)a1;
- (BOOL)_createDatabaseSchemaIfNeeded;
- (long long)_schemaVersion;
- (void)blockedThirdPartiesAfter:(id)a0 before:(id)a1 onFirstParty:(id)a2 completionHandler:(id /* block */)a3;
- (void)blockedThirdPartiesAfter:(id)a0 before:(id)a1 completionHandler:(id /* block */)a2;
- (void)clearStatisticsAfter:(id)a0 before:(id)a1;
- (BOOL)_tryOpenDatabase:(id *)a0;
- (void)_deleteUnusedDomains;
- (BOOL)_openDatabaseIfNeeded;
- (void)_closeDatabaseOnDatabaseQueue;
- (void).cxx_destruct;
- (void)clearAllStatisticsWithCompletionHandler:(id /* block */)a0;
- (long long)_idForThirdPartyWithHighLevelDomain:(id)a0;
- (long long)_idForFirstPartyWithHighLevelDomain:(id)a0;
- (void)closeDatabase;
- (void)clearStatisticsForDomains:(id)a0;
- (void)_clearStatisticsForDomain:(id)a0;
- (void)_deleteDatabase;
- (void)recordThirdPartyResourceBlocked:(id)a0 onFirstParty:(id)a1 completionHandler:(id /* block */)a2;

@end
