@class UIBlurEffect, UIVisualEffectView, UIImageView, UIView, UIViewController;

@interface SidebarViewController : UIViewController {
    UIBlurEffect *_backgroundBlurEffect;
    UIVisualEffectView *_backdrop;
    UIView *_verticalSeparator;
    UIView *_wallpaperView;
    UIImageView *_wallpaperImageView;
}

@property (readonly, nonatomic) double separatorWidth;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } wallpaperObscuredInsets;
@property (retain, nonatomic) UIViewController *contentViewController;

- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (void)_updateWallpaperImage;
- (void)_updateWallpaperInset;
- (void)_springBoardWallpaperDidChange:(id)a0;
- (void)_setWallpaperImage:(id)a0;

@end
