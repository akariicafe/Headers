@class UIView;

@interface GKFocusHighlightingCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIView *focusHighlightView;
@property (nonatomic) double _gkFocusHighlightMargin;
@property (nonatomic) double _gkFocusHighlightCornerRadius;

- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (void)initFocusHighlightView;
- (void)updateFocusHighlightView;

@end
