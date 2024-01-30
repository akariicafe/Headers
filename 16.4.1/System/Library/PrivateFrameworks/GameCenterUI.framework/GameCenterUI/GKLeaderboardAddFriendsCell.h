@class UIView, _TtC12GameCenterUI14EmptyStateView, _TtC12GameCenterUI22GKAddFriendsLockupView;

@interface GKLeaderboardAddFriendsCell : UICollectionViewCell

@property (weak, nonatomic) _TtC12GameCenterUI22GKAddFriendsLockupView *addFriendsLockupView;
@property (weak, nonatomic) _TtC12GameCenterUI14EmptyStateView *noFriendsView;
@property (retain, nonatomic) UIView *container;
@property (retain, nonatomic) UIView *topLine;
@property (nonatomic) long long friendCount;
@property (nonatomic) BOOL lineVisible;

- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })preferredLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0;
- (void)clearContainer;
- (void)configureAddFriendsLockupWithHandler:(id /* block */)a0;
- (void)configureNoFriendsViewWithHandler:(id /* block */)a0;

@end
