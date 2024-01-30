@class NSArray, NSString, SBFTouchPassThroughView;

@interface CSShakableView : SBFTouchPassThroughView <CAAnimationDelegate> {
    id /* block */ _shakeCompletionBlock;
}

@property (readonly, nonatomic) SBFTouchPassThroughView *containerView;
@property (retain, nonatomic) NSArray *prototypeSpringAnimations;
@property (nonatomic) double shakeDistance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)_defaultSpringAnimations;
- (void)_invokeCompletionBlockIfNecessary;
- (void)beginShakingWithCompletion:(id /* block */)a0;

@end
