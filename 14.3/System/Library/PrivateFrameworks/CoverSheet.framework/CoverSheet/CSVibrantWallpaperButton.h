@class UIView;
@protocol CSWallpaperColorProvider, CSWallpaperViewProviding, CSWallpaperView;

@interface CSVibrantWallpaperButton : SBUIVibrantButton

@property (weak, nonatomic) id<CSWallpaperColorProvider> wallpaperColorProvider;
@property (weak, nonatomic) id<CSWallpaperViewProviding> wallpaperViewProvider;
@property (readonly, nonatomic) UIView<CSWallpaperView> *effectView;

- (void)setLegibilitySettings:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateVibrancy;

@end
