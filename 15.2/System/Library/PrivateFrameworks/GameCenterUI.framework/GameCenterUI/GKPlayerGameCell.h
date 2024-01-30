@class UILabel;

@interface GKPlayerGameCell : GKBaseGameCell

@property (retain, nonatomic) UILabel *statsLabel;
@property (retain, nonatomic) UILabel *dateLabel;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)statText;
- (void)didUpdateModel;
- (id)achievementsStringWithGameRecord:(id)a0;
- (id)leaderboardStringWithGameRecord:(id)a0;

@end
