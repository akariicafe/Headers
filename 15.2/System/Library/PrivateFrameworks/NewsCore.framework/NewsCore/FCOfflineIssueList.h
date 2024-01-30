@class NSArray, NSHashTable, FCKeyValueStore;

@interface FCOfflineIssueList : NSObject {
    FCKeyValueStore *_localStore;
    NSHashTable *_observers;
}

@property (readonly, nonatomic) NSArray *issueIDs;

- (id)initWithStoreDirectoryFileURL:(id)a0;
- (void)removeIssueIDs:(id)a0;
- (id)initWithStoreDirectoryFileURL:(id)a0 appActivityMonitor:(id)a1 backgroundTaskable:(id)a2;
- (void)addIssueID:(id)a0 source:(long long)a1;
- (BOOL)containsIssueID:(id)a0;
- (BOOL)everContainedIssueID:(id)a0;
- (long long)sourceForIssueID:(id)a0;
- (id)dateAddedForIssueID:(id)a0;
- (id)dateRemovedForIssueID:(id)a0;
- (void)removeAllIssues;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
