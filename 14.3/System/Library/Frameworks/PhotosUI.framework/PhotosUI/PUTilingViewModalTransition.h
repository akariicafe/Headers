@class NSString, PUTilingViewTransitionHelper;

@interface PUTilingViewModalTransition : PUModalTransition <PUTilingViewControllerTransition>

@property (readonly, nonatomic) PUTilingViewTransitionHelper *_tilingViewTransitionHelper;
@property (readonly, nonatomic) BOOL hasStarted;
@property (readonly, nonatomic, getter=isTransitionPaused) BOOL transitionPaused;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updatePausedTransitionWithProgress:(double)a0 interactionProgress:(double)a1;
- (id)init;
- (BOOL)isInteractive;
- (void).cxx_destruct;
- (void)_animateTransitionWithOperation:(long long)a0;
- (void)resumeTransition:(BOOL)a0;
- (void)animatePresentTransition;
- (void)animateDismissTransition;
- (void)pauseTransition;
- (void)pauseTransitionWithOptions:(unsigned long long)a0;

@end
