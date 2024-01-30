@interface NewsUI2.MyMagazinesStore : NSObject <FCIssueReadingHistoryObserving, FCSubscriptionObserving, FCOfflineIssueListObserving> {
    void /* unknown type, empty encoding */ state;
    void /* unknown type, empty encoding */ badgeIssueIDs;
    void /* unknown type, empty encoding */ currentIssues;
    void /* unknown type, empty encoding */ recentlyReadIssues;
    void /* unknown type, empty encoding */ downloadedIssues;
    void /* unknown type, empty encoding */ currentIssuesChecker;
    void /* unknown type, empty encoding */ issueService;
    void /* unknown type, empty encoding */ issueReadingHistory;
    void /* unknown type, empty encoding */ subscriptionController;
    void /* unknown type, empty encoding */ offlineIssueList;
    void /* unknown type, empty encoding */ offlineIssueManager;
    void /* unknown type, empty encoding */ paidBundleConfigManager;
    void /* unknown type, empty encoding */ configManager;
    void /* unknown type, empty encoding */ personalizationService;
    void /* unknown type, empty encoding */ personalizationData;
    void /* unknown type, empty encoding */ lazyPersistentStore;
    void /* unknown type, empty encoding */ accessQueue;
    void /* unknown type, empty encoding */ $__lazy_storage_$_lazyInitializingPromise;
    void /* unknown type, empty encoding */ firstFullRefresh;
}

- (void)offlineIssueList:(id)a0 didAddIssues:(id)a1 removeIssues:(id)a2;
- (void)issueReadingHistoryDidChange:(id)a0 forIssueIDs:(id)a1;
- (void)subscriptionController:(id)a0 didAddTags:(id)a1 changeTags:(id)a2 moveTags:(id)a3 removeTags:(id)a4 subscriptionType:(unsigned long long)a5;
- (id)init;
- (void).cxx_destruct;

@end
