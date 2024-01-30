@class UILabel, _UIFocusFastScrollingIndexBarEntry, UIView;

@interface _UIHorizontalIndexTitleBarCell : UICollectionViewCell

@property (retain, nonatomic) _UIFocusFastScrollingIndexBarEntry *entry;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *roundedCornersBackground;

+ (id)cellFont;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)_isAnotherIndexTitleCellFocused;
- (void)setSelected:(BOOL)a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (void)prepareForReuse;
- (void)_updateColors;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (void)updateForEntry:(id)a0;

@end
