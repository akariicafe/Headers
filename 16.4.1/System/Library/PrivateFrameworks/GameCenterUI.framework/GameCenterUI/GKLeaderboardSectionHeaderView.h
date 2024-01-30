@class GKLeaderboardMetadataView, GKGameRecord, UIStackView, GKLeaderboard, NSLayoutConstraint;

@interface GKLeaderboardSectionHeaderView : UICollectionReusableView

@property (nonatomic) BOOL dataUpdated;
@property (retain, nonatomic) GKLeaderboard *leaderboard;
@property (retain, nonatomic) GKGameRecord *gameRecord;
@property (retain, nonatomic) GKLeaderboardMetadataView *personalView;
@property (retain, nonatomic) GKLeaderboardMetadataView *socialView;
@property (retain, nonatomic) UIStackView *container;
@property (retain, nonatomic) NSLayoutConstraint *contentInsetTop;
@property (retain, nonatomic) NSLayoutConstraint *contentInsetBottom;
@property (retain, nonatomic) NSLayoutConstraint *contentInsetTrailing;
@property (retain, nonatomic) NSLayoutConstraint *contentInsetLeading;

- (void)updateLayout;
- (void)awakeFromNib;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (id)attributedStringWithSymbol:(id)a0;
- (id)formattedNumber:(id)a0;
- (void)updateHighlightsWithGameRecord:(id)a0 leaderboardCount:(long long)a1 setCount:(long long)a2;

@end
