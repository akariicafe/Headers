@class NSString, UIView;

@interface WFLibraryZoomTransition : NSObject <UIViewControllerAnimatedTransitioning> {
    UIView *_cellView;
    BOOL _presenting;
    UIView *_morphView;
    UIView *_shadowView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)transitionForPresentingFromView:(id)a0;
+ (id)transitionForDismissingToView:(id)a0;

- (void).cxx_destruct;
- (void)animateTransition:(id)a0;
- (double)transitionDuration:(id)a0;
- (id)initWithView:(id)a0 presenting:(BOOL)a1;
- (id)lessStiffSpringAnimation;
- (id)stiffSpringAnimation;
- (id)centralAnimation;
- (id)morphAnimation;
- (id)crossfadeAnimation;
- (id)radiusAnimation;
- (void)configureViews:(id)a0;
- (void)startAnimations:(id)a0;
- (void)completeAnimations:(id)a0;
- (struct CGImage { } *)snapshotView:(id)a0;

@end
