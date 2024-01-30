@protocol HUCCSmartGridPropertyAnimatorDelegate;

@interface HUCCSmartGridPropertyAnimator : UIViewPropertyAnimator

@property (weak, nonatomic) id<HUCCSmartGridPropertyAnimatorDelegate> delegate;

- (void)startAnimation;
- (void).cxx_destruct;

@end
