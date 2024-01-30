@class WBSURLCompletionDatabase, NSString, WBSHistoryService, WBSHistoryServiceDatabase, NSObject;
@protocol OS_dispatch_queue;

@interface WBSHistoryURLCompletionSession : NSObject <WBSURLCompletionDataSource, WBSURLCompletionSessionProtocol> {
    WBSHistoryService *_historyService;
    NSObject<OS_dispatch_queue> *_internalQueue;
    WBSHistoryServiceDatabase *_database;
    WBSURLCompletionDatabase *_urlCompletionDatabase;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithHistoryService:(id)a0;
- (void)getBestMatchesForTypedString:(id)a0 limit:(unsigned long long)a1 forQueryID:(long long)a2 withSearchParameters:(id)a3 completionHandler:(id /* block */)a4;
- (id)_databaseConnectionOptions;
- (void)_ensureDatabaseIsWarmed;
- (void)_getBestMatchesForTypedString:(id)a0 limit:(unsigned long long)a1 forQueryID:(long long)a2 withSearchParameters:(id)a3 completionHandler:(id /* block */)a4;
- (id)_matchSnapshotForCompletionMatch:(id)a0;
- (void)enumerateMatchDataForTypedStringHint:(id)a0 options:(unsigned long long)a1 withBlock:(id /* block */)a2;
- (id)fakeBookmarkMatchDataWithURLString:(id)a0 title:(id)a1 shouldPreload:(BOOL)a2;

@end
