@class _UIPageCurl, NSString, UIView;

@interface _UIPageCurlState : _UITransitionState <CAAnimationDelegate> {
    UIView *_frontPageView;
    UIView *_backPageView;
    long long _completionCount;
    BOOL _finished;
    BOOL _willComplete;
    id /* block */ _finally;
}

@property (readonly, nonatomic) _UIPageCurl *pageCurl;
@property (readonly, nonatomic) long long curlType;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } initialLocation;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } referenceLocation;
@property (readonly, nonatomic) UIView *frontPageView;
@property (readonly, nonatomic) UIView *backPageView;
@property (readonly, nonatomic) UIView *frontView;
@property (readonly, nonatomic) UIView *backView;
@property (readonly, nonatomic) long long curlState;
@property (readonly, nonatomic, getter=hasPendingAnimations) BOOL pendingAnimations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPageCurl:(id)a0 andCurlType:(long long)a1 fromLocation:(struct CGPoint { double x0; double x1; })a2 withReferenceLocation:(struct CGPoint { double x0; double x1; })a3 inDirection:(long long)a4 withView:(id)a5 revealingView:(id)a6 completion:(id /* block */)a7 finally:(id /* block */)a8;
- (void)finally;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void).cxx_destruct;
- (void)cleanup;
- (void)dealloc;
- (void)addFrontPageContent;
- (void)cleanupWithFinishedState:(BOOL)a0 completedState:(BOOL)a1;
- (void)setCurlState:(long long)a0 willComplete:(BOOL)a1;
- (void)incrementCompletionCount;
- (long long)_effectiveTransitionDirection;
- (BOOL)isCompatibleWithCurlOfType:(long long)a0 inDirection:(long long)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_pageViewFrame;
- (void)invalidatePageCurl;
- (void)addBackPageContent;

@end
