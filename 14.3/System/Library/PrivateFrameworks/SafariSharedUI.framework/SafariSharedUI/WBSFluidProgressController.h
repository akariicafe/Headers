@protocol WBSFluidProgressControllerDelegate, WBSFluidProgressControllerWindowDelegate;

@interface WBSFluidProgressController : NSObject

@property (weak) id<WBSFluidProgressControllerDelegate> delegate;
@property (weak) id<WBSFluidProgressControllerWindowDelegate> windowDelegate;

- (void)startRocketEffectWithProgressStateSource:(id)a0;
- (void).cxx_destruct;
- (void)startFluidProgressWithProgressStateSource:(id)a0;
- (void)finishFluidProgressWithProgressStateSource:(id)a0;
- (void)frontmostTabDidChange;
- (void)_updateFluidProgressWithProgressStateSource:(id)a0;
- (void)updateFluidProgressWithProgressStateSource:(id)a0;
- (void)animationStepCompleted:(id)a0;
- (void)cancelFluidProgressWithProgressStateSource:(id)a0;
- (void)progressStateSourceDidCommitLoad:(id)a0 loadingSingleResource:(BOOL)a1;

@end
