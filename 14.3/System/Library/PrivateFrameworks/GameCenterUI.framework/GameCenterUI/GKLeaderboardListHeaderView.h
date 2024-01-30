@class UILabel;

@interface GKLeaderboardListHeaderView : UICollectionReusableView

@property (nonatomic) UILabel *titleLabel;
@property (nonatomic) UILabel *subtitleLabel;

+ (double)defaultHeight;

@end
