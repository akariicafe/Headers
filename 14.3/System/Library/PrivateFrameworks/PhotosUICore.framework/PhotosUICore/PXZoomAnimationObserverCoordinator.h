@protocol PXZoomAnimationObserverCoordinatorDelegate;

@interface PXZoomAnimationObserverCoordinator : PXZoomAnimationCoordinator {
    struct { BOOL animationWillBeginWithContext; BOOL animationDidEndWithContext; } _delegateRespondsTo;
}

@property (weak, nonatomic) id<PXZoomAnimationObserverCoordinatorDelegate> delegate;

- (void).cxx_destruct;
- (void)animateContentForEndPointType:(long long)a0 withZoomAnimationContext:(id)a1;

@end
