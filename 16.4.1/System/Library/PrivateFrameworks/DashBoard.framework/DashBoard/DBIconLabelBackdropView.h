@class UIView, _TtC9DashBoard22DBDashboardPlatterView, CRSUIWallpaperPreferences;

@interface DBIconLabelBackdropView : UIView

@property (retain, nonatomic) CRSUIWallpaperPreferences *wallpaperPreferences;
@property (retain, nonatomic) UIView *highlightView;
@property (retain, nonatomic) _TtC9DashBoard22DBDashboardPlatterView *platterView;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;

- (void)_updateHighlight;
- (void).cxx_destruct;
- (id)initWithWallpaperPreferences:(id)a0;

@end
