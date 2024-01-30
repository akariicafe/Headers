@class UILabel;

@interface LUILogFilterPredicateCandidateCollectionViewCell : UICollectionViewCell

@property (readonly, nonatomic) UILabel *titleLabel;

- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0;
- (void)_setupUI;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_createTitleLabel;
- (void)layoutSubViews;

@end
