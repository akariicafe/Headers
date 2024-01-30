@class _UIStackedImageConfiguration, NSString, UIMotionEffectGroup, UIImage, UIView, NSObject;
@protocol UINamedLayerStack;

@interface _UIStackedImageContainerView : UIView <_UIImageViewOverlayViewDelegate> {
    UIMotionEffectGroup *_stackMotionEffects;
}

@property (retain, nonatomic) UIView *overlayView;
@property (retain, nonatomic) UIImage *stackImage;
@property (retain, nonatomic) NSObject<UINamedLayerStack> *constructedStackImage;
@property (copy, nonatomic) _UIStackedImageConfiguration *config;
@property (nonatomic, getter=isPressed) BOOL pressed;
@property (nonatomic, getter=isStackFocused) BOOL stackFocused;
@property (nonatomic) BOOL installsMotionEffectsWhenFocused;
@property (nonatomic) struct CGPoint { double x0; double x1; } focusDirection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)layerClass;

- (id)_imageContainerLayer;
- (void)_updateContainerLayerImages;
- (void)_uninstallMotionEffects;
- (void)_setStackFocused:(BOOL)a0 animated:(BOOL)a1 focusAnimationCoordinator:(id)a2;
- (void)_installMotionEffects;
- (void)_updateOverlayLayer;
- (void)_updateFocusedFrameGuideConstraintsIfApplicable;
- (BOOL)_applyKeyPathsAndRelativeValues:(id)a0 forMotionEffect:(id)a1;
- (void)overlayView:(id)a0 didChangeClipsToBounds:(BOOL)a1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setStackFocused:(BOOL)a0 withFocusAnimationCoordinator:(id)a1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_focusedFrameGuideCreateIfNecessary:(BOOL)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)_focusedFrameGuide;
- (id)_preferredConfigurationForFocusAnimation:(long long)a0 inContext:(id)a1;

@end
