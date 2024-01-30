@class UIKBKeyViewAnimator, CADisplayLink, UIKBTree, UIView, NSMutableArray;
@protocol UIKeyboardKeyplaneTransitionDelegate;

@interface UIKeyboardKeyplaneTransition : NSObject {
    double _currentProgress;
    double _liftOffProgress;
    double _finishProgress;
    double _finishDuration;
    double _finalTransitionStartTime;
    CADisplayLink *_displayLink;
    UIKBTree *_start;
    UIKBTree *_end;
    UIView *_startView;
    UIView *_endView;
    NSMutableArray *_transitionViews;
}

@property (retain, nonatomic) UIKBTree *keyboard;
@property (copy) id /* block */ completionBlock;
@property (nonatomic) id<UIKeyboardKeyplaneTransitionDelegate> transitionDelegate;
@property (nonatomic) BOOL initiallyAtEnd;
@property (readonly, nonatomic) double nonInteractiveDuration;
@property (retain, nonatomic) UIKBKeyViewAnimator *keyViewAnimator;
@property (readonly, nonatomic) double startHeight;
@property (readonly, nonatomic) double endHeight;

- (void)removeAllAnimations;
- (void)updateWithProgress:(double)a0;
- (void)finishWithProgress:(double)a0 completionBlock:(id /* block */)a1;
- (void)rebuildWithStartKeyplane:(id)a0 startView:(id)a1 endKeyplane:(id)a2 endView:(id)a3;
- (void)commitTransitionRebuild;
- (void)runNonInteractivelyWithCompletion:(id /* block */)a0;
- (void)finalizeTransition;
- (void)transitionToFinalState:(id)a0;
- (void)addTransitionView:(id)a0 startFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 endFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)cancelNonInteractiveAnimation;
- (BOOL)canDisplayTransitionFromKeyplane:(id)a0 toKeyplane:(id)a1;
- (void)dealloc;

@end
