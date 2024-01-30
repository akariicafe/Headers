@class PUSectionedGridLayout;

@interface PULayoutAnimationsHelper : NSObject

@property (readonly, weak, nonatomic) PUSectionedGridLayout *layout;
@property (nonatomic) BOOL shouldAnimateTemporaryImageView;

+ (double)stackedTransitionAnimationPreferredDurationUsingSpringAnimations:(BOOL)a0;
+ (id /* block */)stackedTransitionAnimationsForReusableView:(id)a0 toLayoutAttributes:(id)a1 shouldUseSpringAnimations:(BOOL)a2;
+ (double)zoomTransitionAnimationPreferredDurationWhenZoomingIn:(BOOL)a0;

- (void).cxx_destruct;
- (id)_adjustAnimation:(id)a0 forReusableView:(id)a1 toLayoutAttributes:(id)a2;
- (id)_adjustCellAnimation:(id)a0 forReusableView:(id)a1 toLayoutAttributes:(id)a2;
- (id)_adjustDecorationViewAnimation:(id)a0 forReusableView:(id)a1 toLayoutAttributes:(id)a2;
- (id)_adjustRenderedStripAnimation:(id)a0 forReusableView:(id)a1 toLayoutAttributes:(id)a2;
- (id)_adjustSectionHeaderAnimation:(id)a0 forReusableView:(id)a1 toLayoutAttributes:(id)a2;
- (void)_applyDefaultLayoutAttributes:(id)a0 toView:(id)a1;
- (void)_configureAnimationsForReusableView:(id)a0 toLayoutAttributes:(id)a1 withCompletionBlock:(id /* block */)a2;
- (id)_createDefaultZoomingInAnimationForKeyPath:(id)a0 ofReusableView:(id)a1 toLayoutAttributes:(id)a2;
- (id)_createDefaultZoomingOutAnimationForKeyPath:(id)a0 ofReusableView:(id)a1 toLayoutAttributes:(id)a2;
- (id)_defaultAnimationForKeyPath:(id)a0 ofReusableView:(id)a1 toLayoutAttributes:(id)a2;
- (id /* block */)animationsForReusableView:(id)a0 toLayoutAttributes:(id)a1;
- (void)didFinishLayoutTransitionAnimations:(BOOL)a0 transitionIsAppearing:(BOOL)a1;
- (id)initWithSectionedGridLayout:(id)a0;

@end
