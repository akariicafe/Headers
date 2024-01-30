@class PUSectionedGridLayout;

@interface PULayoutAnimationsHelper : NSObject

@property (readonly, weak, nonatomic) PUSectionedGridLayout *layout;
@property (nonatomic) BOOL shouldAnimateTemporaryImageView;

+ (id /* block */)stackedTransitionAnimationsForReusableView:(id)a0 toLayoutAttributes:(id)a1 shouldUseSpringAnimations:(BOOL)a2;
+ (double)stackedTransitionAnimationPreferredDurationUsingSpringAnimations:(BOOL)a0;
+ (double)zoomTransitionAnimationPreferredDurationWhenZoomingIn:(BOOL)a0;

- (void).cxx_destruct;
- (id)initWithSectionedGridLayout:(id)a0;
- (id /* block */)animationsForReusableView:(id)a0 toLayoutAttributes:(id)a1;
- (void)didFinishLayoutTransitionAnimations:(BOOL)a0 transitionIsAppearing:(BOOL)a1;
- (id)_createDefaultZoomingOutAnimationForKeyPath:(id)a0 ofReusableView:(id)a1 toLayoutAttributes:(id)a2;
- (id)_defaultAnimationForKeyPath:(id)a0 ofReusableView:(id)a1 toLayoutAttributes:(id)a2;
- (id)_createDefaultZoomingInAnimationForKeyPath:(id)a0 ofReusableView:(id)a1 toLayoutAttributes:(id)a2;
- (id)_adjustAnimation:(id)a0 forReusableView:(id)a1 toLayoutAttributes:(id)a2;
- (id)_adjustCellAnimation:(id)a0 forReusableView:(id)a1 toLayoutAttributes:(id)a2;
- (id)_adjustSectionHeaderAnimation:(id)a0 forReusableView:(id)a1 toLayoutAttributes:(id)a2;
- (id)_adjustRenderedStripAnimation:(id)a0 forReusableView:(id)a1 toLayoutAttributes:(id)a2;
- (id)_adjustDecorationViewAnimation:(id)a0 forReusableView:(id)a1 toLayoutAttributes:(id)a2;
- (void)_configureAnimationsForReusableView:(id)a0 toLayoutAttributes:(id)a1 withCompletionBlock:(id /* block */)a2;
- (void)_applyDefaultLayoutAttributes:(id)a0 toView:(id)a1;

@end
