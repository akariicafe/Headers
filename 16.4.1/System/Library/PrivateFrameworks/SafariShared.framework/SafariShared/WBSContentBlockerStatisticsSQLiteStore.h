@class NSString, NSURL, WBSSQLiteDatabase, NSObject;
@protocol OS_dispatch_queue;

@interface WBSContentBlockerStatisticsSQLiteStore : NSObject <WBSContentBlockerStatisticsStore> {
    NSURL *_databaseURL;
    NSObject<OS_dispatch_queue> *_databaseQueue;
    WBSSQLiteDatabase *_database;
}

@property (class, readonly, nonatomic) WBSContentBlockerStatisticsSQLiteStore *standardStore;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_defaultDatabaseURL;

- (void)_deleteDatabase;
- (long long)_idForThirdPartyWithHighLevelDomain:(id)a0;
- (void)_deleteUnusedDomains;
- (BOOL)_tryOpenDatabase:(id *)a0;
- (void)clearAllStatisticsWithCompletionHandler:(id /* block */)a0;
- (id)initWithDatabaseURL:(id)a0;
- (void)blockedThirdPartiesAfter:(id)a0 before:(id)a1 onFirstParty:(id)a2 completionHandler:(id /* block */)a3;
- (BOOL)_openDatabaseIfNeeded;
- (long long)_schemaVersion;
- (void)_clearStatisticsAfter:(id)a0 before:(id)a1;
- (BOOL)_createDatabaseSchemaIfNeeded;
- (void)closeDatabase;
- (void)recordThirdPartyResourceBlocked:(id)a0 onFirstParty:(id)a1 completionHandler:(id /* block */)a2;
- (void)_clearStatisticsForDomain:(id)a0;
- (void)clearStatisticsAfter:(id)a0 before:(id)a1;
- (void)clearStatisticsForDomains:(id)a0;
- (void)_closeDatabaseOnDatabaseQueue;
- (long long)_idForFirstPartyWithHighLevelDomain:(id)a0;
- (void)blockedThirdPartiesAfter:(id)a0 before:(id)a1 completionHandler:(id /* block */)a2;
- (void).cxx_destruct;

@end
