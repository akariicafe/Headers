@class UIView, NSString, _UIVisualEffectBackdropView, SFUnifiedBarTheme, SFUnifiedBarItemPlatterView, NSArray, SFUnifiedBarMetrics, SFUnifiedBarItem, UIDragPreviewParameters, UIVisualEffectView;

@interface SFUnifiedBarItemView : UIButton {
    _UIVisualEffectBackdropView *_cutoutBorderCopyView;
    SFUnifiedBarItemPlatterView *_cutoutBorderPlatterView;
    UIView *_cutoutBorderEraserView;
    SFUnifiedBarItemPlatterView *_platterView;
    UIVisualEffectView *_platterFillView;
    NSArray *_platterViewConstraints;
    long long _lastAppliedPlatterStyle;
}

@property (weak) SFUnifiedBarItem *item;
@property (copy, nonatomic) NSString *reuseIdentifier;
@property (nonatomic, getter=isVisible) BOOL visible;
@property (nonatomic, getter=isOccluded) BOOL occluded;
@property (nonatomic, getter=isHovering) BOOL hovering;
@property (nonatomic) double squishedInset;
@property (copy, nonatomic) NSString *cutoutBorderCopyGroupName;
@property (nonatomic) BOOL needsEraserBasedCutoutBorder;
@property (readonly, nonatomic) UIView *contentView;
@property (retain, nonatomic) SFUnifiedBarMetrics *barMetrics;
@property (retain, nonatomic) SFUnifiedBarTheme *barTheme;
@property (nonatomic) long long platterStyle;
@property (nonatomic) double barBackgroundAlpha;
@property (nonatomic) double themeColorVisibility;
@property (nonatomic) double squishTransformFactor;
@property (readonly, nonatomic) double preferredWidth;
@property (readonly, nonatomic) UIDragPreviewParameters *previewParameters;

- (void)prepareForReuse;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setHighlighted:(BOOL)a0;
- (void)applyTheme;
- (void)layoutSubviews;
- (void)updateConstraints;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)_updateContentAlpha;
- (void)_applyPlatterColor:(id)a0;
- (void)_applyThemeToPlatterView:(id)a0;
- (void)_buttonShapesEnabledDidChange;
- (void)_disableVibrancyIfNeededForTheme:(id)a0;
- (void)_layOutCutoutBorder;
- (void)_setShowsCutoutBorderEffects:(BOOL)a0;
- (void)_setShowsCutoutBorderEraser:(BOOL)a0;
- (void)_setShowsPlatter:(BOOL)a0;
- (BOOL)_shouldEnableCopyCutoutBorder;
- (BOOL)_shouldEnablePlatterCutoutBorder;
- (BOOL)_shouldHidePlatterView;
- (void)_updateBackgroundAlpha;
- (void)_updateOverrideUserInterfaceStyle;
- (void)_updatePlatterEffect;
- (void)_updateShowsCutoutBorder;
- (void)updateCornerRadius;

@end
