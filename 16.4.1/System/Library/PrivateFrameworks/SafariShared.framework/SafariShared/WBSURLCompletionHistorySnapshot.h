@class NSString, WBSURLCompletionDatabase, NSObject;
@protocol OS_dispatch_queue;

@interface WBSURLCompletionHistorySnapshot : NSObject <WBSURLCompletionDataSource> {
    NSObject<OS_dispatch_queue> *_completionDatabaseQueue;
    WBSURLCompletionDatabase *_completionDatabase;
    struct unique_ptr<std::vector<WTF::RefPtr<SafariShared::HistoryURLCompletionItem>>, std::default_delete<std::vector<WTF::RefPtr<SafariShared::HistoryURLCompletionItem>>>> { struct __compressed_pair<std::vector<WTF::RefPtr<SafariShared::HistoryURLCompletionItem>> *, std::default_delete<std::vector<WTF::RefPtr<SafariShared::HistoryURLCompletionItem>>>> { void *__value_; } __ptr_; } _items;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id).cxx_construct;
- (id)initWithItems:(struct unique_ptr<std::vector<WTF::RefPtr<SafariShared::HistoryURLCompletionItem>>, std::default_delete<std::vector<WTF::RefPtr<SafariShared::HistoryURLCompletionItem>>>> { struct __compressed_pair<std::vector<WTF::RefPtr<SafariShared::HistoryURLCompletionItem>> *, std::default_delete<std::vector<WTF::RefPtr<SafariShared::HistoryURLCompletionItem>>>> { void *x0; } x0; })a0;
- (id)init;
- (void).cxx_destruct;
- (void)getBestMatchesForTypedString:(id)a0 limit:(unsigned long long)a1 forQueryID:(long long)a2 withSearchParameters:(id)a3 completionHandler:(id /* block */)a4;
- (id)_matchSnapshotForCompletionMatch:(id)a0;
- (void)enumerateMatchDataForTypedStringHint:(id)a0 options:(unsigned long long)a1 withBlock:(id /* block */)a2;
- (id)fakeBookmarkMatchDataWithURLString:(id)a0 title:(id)a1 shouldPreload:(BOOL)a2;

@end
