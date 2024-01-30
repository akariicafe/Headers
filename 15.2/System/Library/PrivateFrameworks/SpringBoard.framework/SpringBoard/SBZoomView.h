@class UIView, UIStatusBar;

@interface SBZoomView : UIView

@property (weak, nonatomic) UIStatusBar *statusBar;
@property (readonly, nonatomic) UIView *contentView;

+ (id)_chromeStatusBarImageForInterfaceOrientation:(long long)a0;

- (id)_initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)_shouldAnimatePropertyWithKey:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
