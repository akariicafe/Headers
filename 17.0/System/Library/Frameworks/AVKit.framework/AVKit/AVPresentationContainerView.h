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

- (void)setBackgroundColor:(id)a0;
- (void)setClipsToBounds:(BOOL)a0;
- (void)_setContinuousCornerRadius:(double)a0;
- (void)_setCornerRadius:(double)a0;
- (double)_cornerRadius;
- (void).cxx_destruct;
- (double)_continuousCornerRadius;
- (void)layoutSubviews;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })_contentTransform;
- (double)_radiansForCounterRotation;
- (BOOL)avkit_isBeingDismissed;
- (BOOL)avkit_isBeingPresented;
- (BOOL)avkit_isCounterRotatedForTransition;
- (BOOL)avkit_isVideoGravityFrozen;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })avkit_overrideLayoutMarginsForCounterRotation;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })avkit_overrideLayoutMarginsForInterfaceOrientation:(long long)a0;
- (void)didStopTransition;
- (void)willBeginAdjustingOrientation;
- (void)willStartDismissalTransitionFromInterfaceOrientation:(long long)a0 toOrientation:(long long)a1 needsCounterRotation:(BOOL)a2;
- (void)willStartPresentationTransitionFromInterfaceOrientation:(long long)a0 toOrientation:(long long)a1 needsCounterRotation:(BOOL)a2;

@end
