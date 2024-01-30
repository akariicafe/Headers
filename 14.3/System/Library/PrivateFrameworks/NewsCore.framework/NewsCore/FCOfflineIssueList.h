@class NSHashTable, NSArray, FCKeyValueStore;

@interface FCOfflineIssueList : NSObject

@property (readonly, nonatomic) FCKeyValueStore *localStore;
@property (readonly, nonatomic) NSHashTable *observers;
@property (readonly, nonatomic) NSArray *issueIDs;

- (long long)sourceForIssueID:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (BOOL)containsIssueID:(id)a0;
- (void)addObserver:(id)a0;
- (id)initWithStoreDirectoryFileURL:(id)a0 appActivityMonitor:(id)a1 backgroundTaskable:(id)a2;
- (void)addIssueID:(id)a0 source:(long long)a1;
- (void)removeIssueIDs:(id)a0;
- (id)initWithStoreDirectoryFileURL:(id)a0;
- (BOOL)everContainedIssueID:(id)a0;
- (void)removeAllIssues;
- (id)dateRemovedForIssueID:(id)a0;
- (id)dateAddedForIssueID:(id)a0;

@end
