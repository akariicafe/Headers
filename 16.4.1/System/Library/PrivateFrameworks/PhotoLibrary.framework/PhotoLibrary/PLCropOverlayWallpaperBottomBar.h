@class _UIBackdropView, PLWallpaperButton, UIView, _UILegibilityLabel;

@interface PLCropOverlayWallpaperBottomBar : UIView

@property (retain, nonatomic) _UILegibilityLabel *titleLabel;
@property (retain, nonatomic) UIView *separatorLine;
@property (retain, nonatomic) _UIBackdropView *backdropView;
@property (nonatomic) double maxToggleWidth;
@property (readonly, retain, nonatomic) PLWallpaperButton *doCancelButton;
@property (readonly, retain, nonatomic) PLWallpaperButton *doSetButton;
@property (readonly, retain, nonatomic) PLWallpaperButton *doSetHomeScreenButton;
@property (readonly, retain, nonatomic) PLWallpaperButton *doSetLockScreenButton;
@property (readonly, retain, nonatomic) PLWallpaperButton *doSetBothScreenButton;
@property (readonly, retain, nonatomic) PLWallpaperButton *motionToggle;
@property (nonatomic) BOOL motionToggleHidden;
@property (nonatomic) BOOL shouldOnlyShowLockScreenButton;
@property (nonatomic) BOOL shouldOnlyShowHomeScreenButton;

- (id)initWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setText:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)layoutSubviews;
- (void)updateForChangedSettings:(id)a0;
- (struct CGSize { double x0; double x1; })_sizeForString:(id)a0;
- (void)_commonPLCropOverlayWallpaperBottomBarInitialization;
- (void)_commonPLCropOverlayWallpaperBottomBarInitializationPad;
- (void)_commonPLCropOverlayWallpaperBottomBarInitializationPhone;
- (void)_layoutSubviewsPad;
- (void)_layoutSubviewsPhone;
- (double)widthForToggleText;

@end
