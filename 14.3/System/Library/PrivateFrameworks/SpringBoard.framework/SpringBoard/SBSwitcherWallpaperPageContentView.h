@class NSString, SBOrientationTransformWrapperView, SBWallpaperEffectView;

@interface SBSwitcherWallpaperPageContentView : UIView <SBAppSwitcherPageContentView> {
    SBOrientationTransformWrapperView *_wallpaperWrapperView;
}

@property (nonatomic) long long desiredWallpaperOrientation;
@property (nonatomic) long long wallpaperStyle;
@property (readonly, nonatomic) SBWallpaperEffectView *wallpaperEffectView;
@property (nonatomic) double cornerRadius;
@property (nonatomic) long long orientation;
@property (readonly, nonatomic) BOOL contentRequiresGroupOpacity;
@property (nonatomic, getter=isActive) BOOL active;
@property (nonatomic, getter=isVisible) BOOL visible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)_deviceSupportsEdgeAntiAliasing;
- (void).cxx_destruct;
- (id)_viewForWallpaperWrapper;
- (void)_updateWallpaperOrientation;
- (void)_updateCornerRadius;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_wallpaperFrame;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)invalidate;

@end
