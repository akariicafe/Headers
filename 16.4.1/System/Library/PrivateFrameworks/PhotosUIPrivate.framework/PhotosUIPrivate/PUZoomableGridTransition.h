@class NSString, UICollectionViewTransitionLayout, PUMomentsZoomLevelManager, UICollectionView, NSIndexPath;
@protocol UIViewControllerContextTransitioning;

@interface PUZoomableGridTransition : NSObject <UIViewControllerInteractiveTransitioning> {
    UICollectionView *_collectionView;
}

@property (nonatomic, setter=_setTransitionState:) unsigned long long transitionState;
@property (nonatomic, setter=_setOriginZoomLevel:) unsigned long long originZoomLevel;
@property (nonatomic, setter=_setTargetZoomLevel:) unsigned long long targetZoomLevel;
@property (retain, nonatomic, setter=_setTransitionLayout:) UICollectionViewTransitionLayout *_transitionLayout;
@property (nonatomic, setter=_setCurrentInteractiveProgress:) double currentInteractiveProgress;
@property (nonatomic, setter=_setCurrentInteractiveCenterOffset:) struct CGSize { double width; double height; } currentInteractiveCenterOffset;
@property (retain, nonatomic) id<UIViewControllerContextTransitioning> transitionContext;
@property (readonly, nonatomic, getter=isInteractive) BOOL interactive;
@property (readonly, weak, nonatomic) PUMomentsZoomLevelManager *zoomLevelManager;
@property (retain, nonatomic) NSIndexPath *anchorItemIndexPath;
@property (readonly, nonatomic) double completionSpeed;
@property (readonly, nonatomic) long long completionCurve;
@property (readonly, nonatomic) BOOL wantsInteractiveStart;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startInteractiveTransition:(id)a0;
- (void).cxx_destruct;
- (void)cancelInteractiveTransitionAnimated;
- (void)finishInteractiveTransitionAnimated;
- (id)initWithOriginLevel:(unsigned long long)a0 targetLevel:(unsigned long long)a1 zoomLevelManager:(id)a2 interactive:(BOOL)a3;
- (void)updateInteractiveTransitionForProgress:(double)a0 centerOffset:(struct CGSize { double x0; double x1; })a1;

@end
