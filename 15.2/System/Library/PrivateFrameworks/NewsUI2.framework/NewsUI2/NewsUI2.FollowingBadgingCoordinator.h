@interface NewsUI2.FollowingBadgingCoordinator : NSObject <FCReadingListObserving, FCUserInfoObserving, FCReadingHistoryObserving> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ readingList;
    void /* unknown type, empty encoding */ userInfo;
    void /* unknown type, empty encoding */ sharedItemManager;
    void /* unknown type, empty encoding */ readingHistory;
}

- (void)userInfoDidChangeDateLastViewedSaved:(id)a0 fromCloud:(BOOL)a1;
- (void)userInfoDidChangeDateLastViewedSharedWithYou:(id)a0 fromCloud:(BOOL)a1;
- (void)readingList:(id)a0 didAddArticles:(id)a1 removeArticles:(id)a2 eventInitiationLevel:(long long)a3;
- (void)readingHistory:(id)a0 didChangeFeaturesForArticles:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
