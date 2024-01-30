@class WBSURLCompletionHistorySnapshot, WBSHistoryService, NSDate, NSObject;
@protocol OS_dispatch_queue;

@interface WBSHistoryURLCompletionDataStore : NSObject {
    WBSHistoryService *_historyService;
    NSObject<OS_dispatch_queue> *_dataStoreQueue;
    NSDate *_snapshotLastModifiedDate;
    WBSURLCompletionHistorySnapshot *_snapshot;
}

- (void).cxx_destruct;
- (id)initWithHistoryService:(id)a0;
- (void)_loadFromDatabaseIfNecessary;
- (struct Ref<SafariShared::HistoryURLCompletionItem, WTF::RawPtrTraits<SafariShared::HistoryURLCompletionItem>> { struct HistoryURLCompletionItem *x0; })_completionItemFromRow:(id)a0;
- (void)_enumerateCompletionItemsForMostRecentVisitsFromDatabase:(id)a0 usingBlock:(id /* block */)a1;
- (struct RefPtr<SafariShared::HistoryURLCompletionItem, WTF::RawPtrTraits<SafariShared::HistoryURLCompletionItem>, WTF::DefaultRefDerefTraits<SafariShared::HistoryURLCompletionItem>> { struct HistoryURLCompletionItem *x0; })_completionItemFromDatabase:(id)a0 withVisitDatabaseID:(long long)a1;
- (void)getSnapshotWithCompletionHandler:(id /* block */)a0;

@end
