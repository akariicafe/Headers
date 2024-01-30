@class UIViewAnimationState, NSObject;
@protocol UIIntervalAnimating, OS_dispatch_queue, UIViewAnimationComposing;

@interface UIViewRunningAnimationEntry : NSObject {
    id<UIIntervalAnimating> _animation;
    NSObject<OS_dispatch_queue> *_transactionQueue;
    id /* block */ _completionCallback;
    BOOL _invalidated;
}

@property (nonatomic) BOOL invalidated;
@property (nonatomic) BOOL running;
@property (weak, nonatomic) UIViewAnimationState *animationState;
@property (retain, nonatomic) id<UIViewAnimationComposing> composer;

- (void)performWithLock:(id /* block */)a0;
- (void)setCompletionCallback:(id /* block */)a0;
- (void)performWithoutLock:(id /* block */)a0;
- (id)initWithAnimation:(id)a0 completion:(id /* block */)a1 composer:(id)a2;
- (void)performCompletionCallbackFinished:(BOOL)a0;
- (void).cxx_destruct;

@end
