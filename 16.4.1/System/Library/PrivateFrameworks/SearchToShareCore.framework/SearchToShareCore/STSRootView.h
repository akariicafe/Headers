@class UIVisualEffectView, UIView;

@interface STSRootView : UIView {
    UIVisualEffectView *_visualEffectView;
}

@property (retain, nonatomic) UIView *contentView;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInsets;

- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)_setupView;

@end
