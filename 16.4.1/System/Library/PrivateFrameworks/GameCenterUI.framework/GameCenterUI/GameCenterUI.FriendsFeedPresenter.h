@interface GameCenterUI.FriendsFeedPresenter : GameCenterUI.BasePresenter {
    void /* unknown type, empty encoding */ sections;
    void /* unknown type, empty encoding */ requiredData;
    void /* unknown type, empty encoding */ game;
    void /* unknown type, empty encoding */ requiredDataPresenter;
}

- (void).cxx_destruct;
- (void)updateSnapshot;
- (id)initWithGame:(id)a0;
- (id)initWithPlayerId:(id)a0;
- (void)loadMoreActivityFeedWithContinuationToken:(id)a0;

@end
