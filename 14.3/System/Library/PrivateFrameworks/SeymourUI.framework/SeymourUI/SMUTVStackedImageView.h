@class _UIStackedImageConfiguration, UIView, UIImage, UIMotionEffectGroup, _SMUTVStackedImageNamedLayerStack, _UIStackedImageContainerLayer, UILayoutGuide, NSLayoutConstraint, NSShadow;

@interface SMUTVStackedImageView : UIView {
    UIImage *_staticImage;
    _UIStackedImageContainerLayer *_imageStackLayer;
    _UIStackedImageConfiguration *_imageStackConfig;
    _SMUTVStackedImageNamedLayerStack *_uiLayerStack;
    UIMotionEffectGroup *_motionEffectGroup;
    NSLayoutConstraint *_widthConstraint;
    NSLayoutConstraint *_heightConstraint;
    double _layerSelectionDuration;
    double _layerUnselectionDuration;
    double _shadowSelectionDuration;
    double _shadowUnselectionDuration;
    double _repositionUnselectionDuration;
}

@property (readonly, nonatomic) UILayoutGuide *focusLayoutGuide;
@property (readonly, nonatomic) long long state;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UIImage *placeholderImage;
@property (nonatomic) BOOL flatImageContainsCornerRadius;
@property (nonatomic) double cornerRadius;
@property (nonatomic) double focusSizeIncrease;
@property (copy, nonatomic) NSShadow *shadow;
@property (nonatomic) BOOL allowsNonOpaqueShadow;
@property (readonly, nonatomic) unsigned long long primaryControlState;
@property (nonatomic, getter=isOverlayComposited) BOOL overlayComposited;
@property (retain, nonatomic) UIView *overlayView;
@property (retain, nonatomic) UIView *unmaskedOverlayView;
@property (nonatomic) struct CGPoint { double x0; double x1; } focusDirection;
@property (nonatomic, getter=isPressed) BOOL pressed;
@property (nonatomic, getter=isSelected) BOOL selected;
@property (readonly, nonatomic) unsigned long long controlState;

- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (void)willMoveToWindow:(id)a0;
- (void)setPressed:(BOOL)a0 animated:(BOOL)a1;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1 focusAnimationCoordinator:(id)a2;
- (void)_updateMotionEffectsForState:(unsigned long long)a0;
- (void)setFocusDirection:(struct CGPoint { double x0; double x1; })a0 animated:(BOOL)a1;
- (BOOL)_applyKeyPathsAndRelativeValues:(id)a0 forMotionEffect:(id)a1;
- (void)dealloc;
- (void)setControlState:(unsigned long long)a0 withAnimationCoordinator:(id)a1;
- (struct CGSize { double x0; double x1; })_scaledSize;
- (void)setBackgroundColor:(id)a0;
- (void)layoutSubviews;
- (id)_preferredConfigurationForFocusAnimation:(long long)a0 inContext:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setControlState:(unsigned long long)a0 animated:(BOOL)a1;
- (void)_loadImage;
- (void)_updateStackedImageConfiguration;
- (void)_updateFocusLayoutGuideForControlState:(unsigned long long)a0;
- (void)_attachMotionEffects;
- (void)_detachMotionEffects;
- (void)_updateLayerStack:(id)a0 withImage:(struct CGImage { } *)a1 size:(struct CGSize { double x0; double x1; })a2;
- (void)_commitLayerStack:(id)a0;

@end
