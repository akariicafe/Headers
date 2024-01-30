@class NSHashTable;
@protocol WBSFluidProgressControllerDelegate, WBSFluidProgressControllerWindowDelegate;

@interface WBSFluidProgressController : NSObject {
    NSHashTable *_observers;
}

@property (weak, nonatomic) id<WBSFluidProgressControllerDelegate> delegate;
@property (weak) id<WBSFluidProgressControllerWindowDelegate> windowDelegate;

- (void)_sendUpdateFluidProgressToObservers:(id)a0 progressState:(id)a1 source:(id)a2 updateAnimationPhase:(BOOL)a3;
- (void)updateFluidProgressWithProgressStateSource:(id)a0;
- (void)finishFluidProgressWithProgressStateSource:(id)a0;
- (void)registerObserver:(id)a0;
- (void)frontmostTabDidChange;
- (void)progressStateSourceDidCommitLoad:(id)a0 loadingSingleResource:(BOOL)a1;
- (void).cxx_destruct;
- (void)cancelFluidProgressWithProgressStateSource:(id)a0;
- (void)sendProgressUpdateToObservers:(id)a0 progressStateSource:(id)a1;
- (id)init;
- (void)startRocketEffectWithProgressStateSource:(id)a0;
- (void)unregisterObserver:(id)a0;
- (void)startFluidProgressWithProgressStateSource:(id)a0;
- (void)_updateFluidProgressWithProgressStateSource:(id)a0;
- (void)animationStepCompleted:(id)a0;

@end
