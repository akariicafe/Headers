@class NSString, NSArray;

@interface GameCenterUI.PlayerProfilePresenter : GameCenterUI.BaseSplitPresenter {
    void /* unknown type, empty encoding */ profileType;
    void /* unknown type, empty encoding */ pageContext;
    void /* unknown type, empty encoding */ pageMericsPresenter;
    void /* unknown type, empty encoding */ requiredDataPresenter;
    void /* unknown type, empty encoding */ nicknameUpdatedSubscription;
    void /* unknown type, empty encoding */ primarySections;
    void /* unknown type, empty encoding */ secondarySections;
    void /* unknown type, empty encoding */ sections;
    void /* unknown type, empty encoding */ requiredData;
    void /* unknown type, empty encoding */ onNicknameChanged;
    void /* unknown type, empty encoding */ onShowAvatarEditor;
}

@property (class, nonatomic, readonly) BOOL isSettings;

@property (nonatomic, readonly) BOOL wantsHiddenNavigationBar;
@property (nonatomic, readonly) BOOL wantsHiddenTitle;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) BOOL isSignedIn;
@property (nonatomic, retain) void /* unknown type, empty encoding */ nicknamePresenter;
@property (nonatomic) BOOL displayInSplitView;
@property (nonatomic, readonly) NSArray *rightBarButtonItems;

- (void).cxx_destruct;
- (void)updateSnapshot;
- (id)contextMenuAction;
- (void)profileSettings;
- (void)didSignOut;
- (id)initWithPlayerId:(id)a0;
- (void)loadMoreActivityFeedWithContinuationToken:(id)a0;
- (void)removeFriend;
- (void)reportPlayer;
- (void)setAllowsNearByMultiplayerInvites:(BOOL)a0;
- (void)showAvatarEditor;
- (void)showRecentlyPlayedWithFriends;
- (void)signIntoGameCenter;
- (void)viewFriendRequests;

@end
