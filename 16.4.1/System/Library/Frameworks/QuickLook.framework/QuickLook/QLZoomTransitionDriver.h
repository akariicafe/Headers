@class UIView;

@interface QLZoomTransitionDriver : QLTransitionDriver {
    UIView *_uncroppedView;
}

+ (void)cropView:(id)a0 toAvoidNavigationOffset:(double)a1 presenting:(BOOL)a2 animationDuration:(double)a3;

- (void)tearDown;
- (void).cxx_destruct;
- (void)_performZoomTransition;
- (void)animateTransition;

@end
