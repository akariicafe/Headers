@class UIView, AVPresentationContainerViewAppearanceProxy, AVPresentationContainerViewLayer;

@interface AVPresentationContainerView : UIView

@property (readonly, nonatomic) AVPresentationContainerViewLayer *layer;
@property (nonatomic, getter=isCounterRotatingContentView) BOOL counterRotatingContentView;
@property (nonatomic, getter=isBeingPresented) BOOL beingPresented;
@property (nonatomic, getter=isBeingDismissed) BOOL beingDismissed;
@property (nonatomic) long long fromOrientation;
@property (nonatomic) long long toOrientation;
@property (nonatomic) BOOL willBeginOrientationChange;
@property (weak, nonatomic) UIView *presentationContainerContentView;
@property (readonly, nonatomic) AVPresentationContainerViewAppearanceProxy *appearanceProxy;
@property (nonatomic) BOOL wantsAppearanceConfigValues;

+ (Class)layerClass;

- (void)_setCornerRadius:(double)a0;
- (double)_continuousCornerRadius;
- (double)_cornerRadius;
- (void)_setContinuousCornerRadius:(double)a0;
- (void)willBeginAdjustingOrientation;
- (void)didStopTransition;
- (double)_radiansForCounterRotation;
- (void).cxx_destruct;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })avkit_overrideLayoutMarginsForInterfaceOrientation:(long long)a0;
- (void)willStartPresentationTransitionFromInterfaceOrientation:(long long)a0 toOrientation:(long long)a1 needsCounterRotation:(BOOL)a2;
- (void)willStartDismissalTransitionFromInterfaceOrientation:(long long)a0 toOrientation:(long long)a1 needsCounterRotation:(BOOL)a2;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })avkit_overrideLayoutMarginsForCounterRotation;
- (BOOL)avkit_isVideoGravityFrozen;
- (BOOL)avkit_isCounterRotatedForTransition;
- (BOOL)avkit_isBeingDismissed;
- (BOOL)avkit_isBeingPresented;
- (void)setBackgroundColor:(id)a0;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })_contentTransform;
- (void)layoutSubviews;
- (void)setClipsToBounds:(BOOL)a0;

@end
