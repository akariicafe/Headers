@class UIView, _UIVisualEffectBackdropView, NSString, SFUnifiedBarTheme, UIPreviewParameters, SFUnifiedBarItemPlatterView, SFUnifiedBarMetrics, SFUnifiedBarItem, NSArray, UIVisualEffectView;

@interface SFUnifiedBarItemView : UIButton {
    _UIVisualEffectBackdropView *_cutoutBorderCopyView;
    SFUnifiedBarItemPlatterView *_cutoutBorderPlatterView;
    SFUnifiedBarItemPlatterView *_platterView;
    UIVisualEffectView *_platterFillView;
    NSArray *_platterViewConstraints;
    long long _lastAppliedPlatterStyle;
}

@property (weak) SFUnifiedBarItem *item;
@property (nonatomic, getter=isVisible) BOOL visible;
@property (nonatomic, getter=isOccluded) BOOL occluded;
@property (nonatomic, getter=isHovering) BOOL hovering;
@property (nonatomic) double squishedInset;
@property (copy, nonatomic) NSString *cutoutBorderCopyGroupName;
@property (nonatomic) BOOL showsPlatter;
@property (readonly, nonatomic) UIView *contentView;
@property (retain, nonatomic) SFUnifiedBarMetrics *barMetrics;
@property (retain, nonatomic) SFUnifiedBarTheme *barTheme;
@property (nonatomic) long long platterStyle;
@property (nonatomic) double barBackgroundAlpha;
@property (nonatomic) double themeColorVisibility;
@property (nonatomic) double squishTransformFactor;
@property (readonly, nonatomic) double preferredWidth;
@property (readonly, nonatomic) UIPreviewParameters *previewParameters;

- (void)layoutSubviews;
- (void)setHighlighted:(BOOL)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateCornerRadius;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)prepareForReuse;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)_updateContentAlpha;
- (void)_buttonShapesEnabledDidChange;
- (void)_updatePlatterEffect;
- (void)_updateBackgroundAlpha;
- (void)_disableVibrancyIfNeededForTheme:(id)a0;
- (void)applyTheme;
- (BOOL)_needsCopyCutoutBorder;
- (BOOL)_needsPlatterCutoutBorder;
- (BOOL)_needsPlatterView;
- (void)_updateOverrideUserInterfaceStyle;
- (void)_applyPlatterColor:(id)a0;
- (void)_applyThemeToPlatterView:(id)a0;

@end
