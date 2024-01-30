@class UIColor, UIBlurEffect, UIVisualEffectView, UIView, HUGridCellBackgroundDisplayOptions;
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
@property (nonatomic) BOOL useDefaultCellBackgroundColor;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } normalizedWallpaperRect;
@property (weak, nonatomic) id<HUBackgroundEffectViewGrouping> backgroundEffectViewGrouper;
@property (nonatomic) double cornerRadius;

+ (id)_sharedBlurEffect;

- (void)_updateBackgroundColor;
- (void)dealloc;
- (void)_updateCornerRadius;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (id)_normalBackgroundColor;
- (void)_updateDisplay;
- (void)_updateHighlightView;
- (void)_createEffectViewIfNecessary;
- (void)_createHighlightCCMateriaViewIfNecessary;
- (void)_createOffCCMaterialViewIfNecessary;
- (void)_createOnCCMaterialViewIfNecessary;
- (BOOL)_shouldUseCCMaterialView;
- (BOOL)_shouldUsePrecomputedWallpaperContents;
- (BOOL)_shouldUseVisualEffectStyle;
- (void)_updateWallpaperContentsRect;

@end
