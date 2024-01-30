@class UIColor, UIVisualEffectView, UIView, _UIFloatingContentView;
@protocol VUIBaseListViewCellDelegate;

@interface VUIBaseListViewCell : UICollectionViewCell {
    UIColor *_backgroundColor;
    UIColor *_highlightedBackgroundColor;
    UIVisualEffectView *_backgroundVisualEffectView;
}

@property (nonatomic) BOOL visualEffectViewBackgroundEnabled;
@property (retain, nonatomic) _UIFloatingContentView *floatingView;
@property (weak, nonatomic) id<VUIBaseListViewCellDelegate> delegate;
@property (nonatomic, getter=isDisabled) BOOL disabled;
@property (nonatomic) BOOL shouldAppearSelected;
@property (readonly, nonatomic) UIView *vuiContentView;

- (void)layoutSubviews;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void)pressesCancelled:(id)a0 withEvent:(id)a1;
- (void)setHighlighted:(BOOL)a0;
- (BOOL)canBecomeFocused;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setSelected:(BOOL)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)pressesEnded:(id)a0 withEvent:(id)a1;
- (void)setBackgroundColor:(id)a0 forState:(unsigned long long)a1;
- (void)pressesBegan:(id)a0 withEvent:(id)a1;
- (void)setBackgroundColor:(id)a0;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (id)_preferredConfigurationForFocusAnimation:(long long)a0 inContext:(id)a1;
- (BOOL)_descendantsShouldHighlight;
- (id)contentView;
- (unsigned long long)_floatingViewControlState;
- (void)updateFloatingViewControlStateForPreviouslyFocusedView:(id)a0;
- (void)_updateSelectedBackgroundColor;

@end
