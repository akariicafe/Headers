@class HFWallpaperSlice, NSString, UIVisualEffectView, CABackdropLayer, UIView, UIVisualEffect;

@interface HUWallpaperView : UIView <HUBackgroundEffectViewGrouping>

@property (retain, nonatomic) UIView *wallpaperContentView;
@property (retain, nonatomic) UIVisualEffectView *visualEffectView;
@property (readonly, nonatomic) CABackdropLayer *backdropLayer;
@property (retain, nonatomic) HFWallpaperSlice *wallpaperSlice;
@property (retain, nonatomic) NSString *blurGroupName;
@property (readonly, nonatomic) UIVisualEffect *sharedEffect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_sharedBlurEffect;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)_updateVisualEffectView;
- (void)backgroundEffectAddCaptureDependent:(id)a0;
- (void)backgroundEffectRemoveCaptureDependent:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })normalizedWallpaperRectForFrameInWindowSpace:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
