@interface _UISheetPresentationMetrics : NSObject

@property (readonly, nonatomic) double minimumSidePadding;
@property (readonly, nonatomic) double cornerRadius;
@property (readonly, nonatomic) double maximumSheetDepthLevel;
@property (readonly, nonatomic) BOOL exclusivelyUsesZPositionForTransform;
@property (readonly, nonatomic) BOOL alwaysStacksWithChild;
@property (readonly, nonatomic) double topOffset;
@property (readonly, nonatomic) double topOffsetInCompactHeight;
@property (readonly, nonatomic) BOOL wantsDimming;
@property (readonly, nonatomic) double transitionDuration;

+ (id)_defaultMetrics;

- (double)zPositionForDepthLevel:(double)a0;
- (struct CGSize { double x0; double x1; })formSheetSizeForViewController:(id)a0 windowSize:(struct CGSize { double x0; double x1; })a1 screenSize:(struct CGSize { double x0; double x1; })a2;
- (id)_init;
- (void)configureDropShadowView:(id)a0 state:(id)a1;
- (void)addAlongsideAnimations:(id)a0 forSheetTransition:(id)a1 context:(id)a2;
- (void)configureDropShadowView:(id)a0;
- (id)transitionSpringParametersHighSpeed:(BOOL)a0;
- (BOOL)shouldScaleDownBehindDescendantsForContainer:(id)a0 withBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct CGSize { double x0; double x1; })defaultFormSheetSizeForScreenSize:(struct CGSize { double x0; double x1; })a0;

@end
