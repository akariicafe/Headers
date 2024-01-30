@protocol AVPlayerViewControllerContentTransitioning_NewsOnly;

@interface AVNewsWidgetPlayerLegacyBehavior : AVNewsWidgetPlayerBehavior

@property (weak, nonatomic) id<AVPlayerViewControllerContentTransitioning_NewsOnly> legacyDelegate;

- (void).cxx_destruct;
- (id)playerForContentTransitionType:(long long)a0;
- (void)willBeginContentTransition;
- (void)didUpdateContentTransitionProgress:(double)a0;
- (void)willCompleteContentTransition;
- (void)didCompleteContentTransition;
- (void)willCancelContentTransition;
- (void)didCancelContentTransition;

@end
