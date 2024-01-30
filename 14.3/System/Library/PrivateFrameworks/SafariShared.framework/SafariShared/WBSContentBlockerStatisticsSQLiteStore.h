@class WBSSQLiteDatabase, NSURL, NSObject;
@protocol OS_dispatch_queue;

@interface WBSContentBlockerStatisticsSQLiteStore : NSObject {
    NSURL *_databaseURL;
    NSObject<OS_dispatch_queue> *_databaseQueue;
    WBSSQLiteDatabase *_database;
}

@property (class, readonly, nonatomic) WBSContentBlockerStatisticsSQLiteStore *standardStore;

+ (id)_defaultDatabaseURL;

- (void).cxx_destruct;
- (id)initWithDatabaseURL:(id)a0;
- (void)_configureDatabase;
- (long long)_schemaVersion;
- (void)closeDatabase;
- (void)_openDatabase;
- (void)_openDatabaseIfNeeded;
- (long long)_idForThirdPartyWithHighLevelDomain:(id)a0;
- (void)_deleteUnusedDomains;
- (long long)_idForFirstPartyWithHighLevelDomain:(id)a0;
- (void)blockedThirdPartiesAfter:(id)a0 before:(id)a1 onFirstParty:(id)a2 completionHandler:(id /* block */)a3;
- (void)_clearStatisticsAfter:(id)a0 before:(id)a1;
- (void)_clearStatisticsForDomain:(id)a0;
- (void)_closeDatabaseOnDatabaseQueue;
- (void)_createDatabaseSchemaIfNeeded;
- (void)clearStatisticsAfter:(id)a0 before:(id)a1;
- (void)recordThirdPartyResourceBlocked:(id)a0 onFirstParty:(id)a1 completionHandler:(id /* block */)a2;
- (void)blockedThirdPartiesAfter:(id)a0 before:(id)a1 completionHandler:(id /* block */)a2;
- (void)clearAllStatisticsWithCompletionHandler:(id /* block */)a0;
- (void)clearStatisticsForDomains:(id)a0;

@end
