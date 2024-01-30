@class UILabel, _UIFocusFastScrollingIndexBarEntry, UIView;

@interface _UIHorizontalIndexTitleBarCell : UICollectionViewCell

@property (retain, nonatomic) _UIFocusFastScrollingIndexBarEntry *entry;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *roundedCornersBackground;

+ (id)cellFont;

- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (void).cxx_destruct;
- (void)updateForEntry:(id)a0;
- (BOOL)_isAnotherIndexTitleCellFocused;
- (void)prepareForReuse;
- (void)setSelected:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)_updateColors;

@end
