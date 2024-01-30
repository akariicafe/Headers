@class HUWallpaperView, NSString, NSArray, HUDashboardNavigationTitleView, HFWallpaperSlice, HUNavigationBarLayoutOptions;

@interface HUDashboardNavigationBar : UINavigationBar <HUDashboardNavigationButtonDelegate, HUDashboardNavigationTitleViewDelegate, HUDashboardNavigationHost>

@property (retain, nonatomic) HUDashboardNavigationTitleView *titleView;
@property (nonatomic) BOOL isBackgroundVisible;
@property (nonatomic) double buttonBlurAlpha;
@property (weak, nonatomic) HUWallpaperView *containingWallpaperView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSArray *leftDashboardNavigationButtons;
@property (retain, nonatomic) NSArray *rightDashboardNavigationButtons;
@property (retain, nonatomic) HFWallpaperSlice *blurredWallpaperSlice;
@property (copy, nonatomic) HUNavigationBarLayoutOptions *layoutOptions;

- (void)setItems:(id)a0 animated:(BOOL)a1;
- (void)_updateTintColor;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)pushNavigationItem:(id)a0 animated:(BOOL)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateLayoutMargins;
- (id)popNavigationItemAnimated:(BOOL)a0;
- (void)traitCollectionDidChange:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })normalizedWallpaperRectForDashboardNavigationButton:(id)a0;
- (void)largeTitleHeightDidChange:(double)a0;
- (void)_updateAllBarButtonItemsForTopItem;
- (void)_updateLeftBarButtonItemsForTopItem;
- (void)_updateRightBarButtonItemsForTopItem;
- (void)_updateTintColorForBarButtons:(id)a0;
- (id)_configuredBarButtonItemForDashboardNavigationButton:(id)a0;

@end
