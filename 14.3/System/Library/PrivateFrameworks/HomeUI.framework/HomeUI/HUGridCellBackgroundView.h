@class UIColor, UIBlurEffect, UIVisualEffectView, HFWallpaperSlice, UIView, HUGridCellBackgroundDisplayOptions;
@protocol HUBackgroundEffectViewGrouping;

@interface HUGridCellBackgroundView : UIView

@property (retain, nonatomic) UIVisualEffectView *effectView;
@property (retain, nonatomic) UIView *ccOnMaterialView;
@property (retain, nonatomic) UIView *ccOffMaterialView;
@property (retain, nonatomic) UIView *ccHighlightMaterialView;
@property (nonatomic) unsigned long long backgroundState;
@property (nonatomic, getter=isPressed) BOOL pressed;
@property (retain, nonatomic) HUGridCellBackgroundDisplayOptions *displayOptions;
@property (retain, nonatomic) UIColor *backgroundTintColor;
@property (retain, nonatomic) UIBlurEffect *overrideBackgroundEffect;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } normalizedWallpaperRect;
@property (retain, nonatomic) HFWallpaperSlice *blurredWallpaperSlice;
@property (retain, nonatomic) HFWallpaperSlice *darkModeBlurredWallpaperSlice;
@property (weak, nonatomic) id<HUBackgroundEffectViewGrouping> backgroundEffectViewGrouper;
@property (nonatomic) double cornerRadius;

+ (id)_sharedBlurEffect;

- (void).cxx_destruct;
- (void)dealloc;
- (void)_updateBackgroundColor;
- (void)_updateCornerRadius;
- (void)_updateHighlightView;
- (void)_updateDisplay;
- (id)_normalBackgroundColor;
- (void)traitCollectionDidChange:(id)a0;
- (BOOL)_shouldUsePrecomputedWallpaperContents;
- (void)_updateWallpaperContentsRect;
- (void)_updateWallpaperContentsScale;
- (BOOL)_shouldUseCCMaterialView;
- (void)_createOffCCMaterialViewIfNecessary;
- (void)_createOnCCMaterialViewIfNecessary;
- (void)_createHighlightCCMateriaViewIfNecessary;
- (BOOL)_shouldUseVisualEffectStyle;
- (void)_createEffectViewIfNecessary;

@end
