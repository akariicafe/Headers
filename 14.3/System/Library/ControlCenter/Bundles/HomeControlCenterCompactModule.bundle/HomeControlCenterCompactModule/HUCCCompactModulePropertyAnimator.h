@protocol HUCCCompactModulePropertyAnimatorDelegate;

@interface HUCCCompactModulePropertyAnimator : UIViewPropertyAnimator

@property (weak, nonatomic) id<HUCCCompactModulePropertyAnimatorDelegate> delegate;

- (void).cxx_destruct;
- (void)startAnimation;

@end
