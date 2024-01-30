@class NSString, NSIndexPath;

@interface GameCenterUI.DashboardPresenter : GameCenterUI.BaseSplitPresenter {
    void /* unknown type, empty encoding */ pageMetricsPresenter;
    void /* unknown type, empty encoding */ launchContext;
    void /* unknown type, empty encoding */ request;
    void /* unknown type, empty encoding */ primarySections;
    void /* unknown type, empty encoding */ secondarySections;
    void /* unknown type, empty encoding */ game;
    void /* unknown type, empty encoding */ scrollToIndexPath;
    void /* unknown type, empty encoding */ scrollToActivityInfo;
    void /* unknown type, empty encoding */ sections;
    void /* unknown type, empty encoding */ requiredData;
    void /* unknown type, empty encoding */ requiredDataPresenter;
}

@property (nonatomic) void /* unknown type, empty encoding */ shouldUseLargeTitle;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic) BOOL displayInSplitView;
@property (nonatomic, copy) NSIndexPath *scrollToIndexPath;
@property (nonatomic) void /* unknown type, empty encoding */ didScrollToIndexPath;

+ (void)presentLeaderboardsFrom:(id)a0 request:(id)a1 gameRecord:(id)a2 leaderboard:(id)a3 animated:(BOOL)a4;
+ (void)processLeaderboardRequestFrom:(id)a0 request:(id)a1 gameRecord:(id)a2;

- (void).cxx_destruct;
- (void)updateSnapshot;
- (void)handleViewDidLoad;
- (id)initWithPlayerId:(id)a0;
- (void)loadMoreActivityFeedWithContinuationToken:(id)a0;
- (void)presentAchievementsFrom:(id)a0 request:(id)a1 gameRecord:(id)a2;
- (void)presentChallengesFrom:(id)a0 gameRecord:(id)a1 shouldShowPlayForChallenge:(BOOL)a2;
- (void)presentLeaderboardsFrom:(id)a0 request:(id)a1 gameBundleID:(id)a2;
- (void)presentPlayerProfileFrom:(id)a0 request:(id)a1 animated:(BOOL)a2;

@end
