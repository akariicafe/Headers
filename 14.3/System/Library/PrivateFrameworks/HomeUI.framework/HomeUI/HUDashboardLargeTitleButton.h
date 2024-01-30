@class UIControl, HUNavigationButtonLayoutOptions, HFWallpaperSlice, HUWallpaperView, HUDashboardNavigationButton, NSString, UIButton;

@interface HUDashboardLargeTitleButton : UIView <HUDashboardNavigationButtonDelegate>

@property (readonly, nonatomic) HUDashboardNavigationButton *navigationButton;
@property (readonly, nonatomic) UIButton *imageButton;
@property (readonly, nonatomic) UIControl *button;
@property (copy, nonatomic) HUNavigationButtonLayoutOptions *layoutOptions;
@property (retain, nonatomic) HFWallpaperSlice *blurredWallpaperSlice;
@property (weak, nonatomic) HUWallpaperView *containingWallpaperView;
@property (copy, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)requiresConstraintBasedLayout;

- (id)initWithImage:(id)a0;
- (void).cxx_destruct;
- (void)updateConstraints;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)wallpaperContentsFrameDidChange;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })normalizedWallpaperRectForDashboardNavigationButton:(id)a0;

@end
