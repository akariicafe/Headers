@class UIImageView, _UIBackdropView;

@interface PLWallpaperButton : UIButton <_UIBackdropViewObserver>

@property (retain, nonatomic) UIImageView *titleMaskImageView;
@property (retain, nonatomic) _UIBackdropView *backdropView;

+ (id)autoLayoutCommonWallpaperButton;
+ (id)autoLayoutCommonWallpaperButtonWithStyle:(long long)a0;

- (void)setSelected:(BOOL)a0;
- (void)safeAreaInsetsDidChange;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 style:(long long)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setHighlighted:(BOOL)a0;
- (void)dealloc;
- (void)setEnabled:(BOOL)a0;
- (void)backdropViewDidChange:(id)a0;
- (void)_setupBackdropView;
- (void)_updateContentEdgeInsets;

@end
