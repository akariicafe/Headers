@class UIColor, _UIFloatingContentView, UIVisualEffectView;
@protocol _TVListViewCellDelegate;

@interface _TVListViewCell : UICollectionViewCell {
    UIColor *_backgroundColor;
    UIColor *_highlightedBackgroundColor;
    UIVisualEffectView *_backgroundVisualEffectView;
}

@property (nonatomic) BOOL visualEffectViewBackgroundEnabled;
@property (retain, nonatomic) _UIFloatingContentView *floatingView;
@property (weak, nonatomic) id<_TVListViewCellDelegate> delegate;
@property (nonatomic, getter=isDisabled) BOOL disabled;
@property (nonatomic) BOOL shouldAppearSelected;

- (BOOL)canBecomeFocused;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (void)pressesBegan:(id)a0 withEvent:(id)a1;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (void)pressesCancelled:(id)a0 withEvent:(id)a1;
- (void)prepareForReuse;
- (void)setSelected:(BOOL)a0;
- (void)setBackgroundColor:(id)a0;
- (void)layoutSubviews;
- (id)_preferredConfigurationForFocusAnimation:(long long)a0 inContext:(id)a1;
- (BOOL)_descendantsShouldHighlight;
- (void)pressesEnded:(id)a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setBackgroundColor:(id)a0 forState:(unsigned long long)a1;
- (void)traitCollectionDidChange:(id)a0;
- (void)setHighlighted:(BOOL)a0;
- (unsigned long long)_floatingViewControlState;
- (void)updateFloatingViewControlStateForPreviouslyFocusedView:(id)a0;
- (void)_updateSelectedBackgroundColor;

@end
