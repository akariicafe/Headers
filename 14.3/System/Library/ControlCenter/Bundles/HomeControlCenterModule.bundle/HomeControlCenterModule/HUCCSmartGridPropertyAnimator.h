@protocol HUCCSmartGridPropertyAnimatorDelegate;

@interface HUCCSmartGridPropertyAnimator : UIViewPropertyAnimator

@property (weak, nonatomic) id<HUCCSmartGridPropertyAnimatorDelegate> delegate;

- (void).cxx_destruct;
- (void)startAnimation;

@end
