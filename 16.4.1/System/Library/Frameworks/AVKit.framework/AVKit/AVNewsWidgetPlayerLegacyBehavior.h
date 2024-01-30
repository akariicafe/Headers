@protocol AVPlayerViewControllerContentTransitioning_NewsOnly;

@interface AVNewsWidgetPlayerLegacyBehavior : AVNewsWidgetPlayerBehavior

@property (weak, nonatomic) id<AVPlayerViewControllerContentTransitioning_NewsOnly> legacyDelegate;

- (void).cxx_destruct;
- (id)playerForContentTransitionType:(long long)a0;
- (void)didCancelContentTransition;
- (void)didCompleteContentTransition;
- (void)didUpdateContentTransitionProgress:(double)a0;
- (void)willBeginContentTransition;
- (void)willCancelContentTransition;
- (void)willCompleteContentTransition;

@end
