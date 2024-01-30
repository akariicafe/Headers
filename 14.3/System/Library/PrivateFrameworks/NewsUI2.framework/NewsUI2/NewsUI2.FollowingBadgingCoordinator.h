@interface NewsUI2.FollowingBadgingCoordinator : NSObject <FCReadingListObserving, FCUserInfoObserving> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ readingList;
    void /* unknown type, empty encoding */ userInfo;
}

- (void)userInfoDidChangeDateLastViewedSaved:(id)a0 fromCloud:(BOOL)a1;
- (void)readingList:(id)a0 didAddArticles:(id)a1 removeArticles:(id)a2 eventInitiationLevel:(long long)a3;
- (id)init;
- (void).cxx_destruct;

@end
