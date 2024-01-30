@class LPTapToLoadViewStyle, NSString, UIView, LPTextView, UILongPressGestureRecognizer;
@protocol LPTapToLoadViewDelegate;

@interface LPTapToLoadView : LPComponentView <CAAnimationDelegate, UIGestureRecognizerDelegate> {
    LPTextView *_captionView;
    UIView *_progressView;
    LPTapToLoadViewStyle *_style;
    UIView *_highlightView;
    UILongPressGestureRecognizer *_highlightGestureRecognizer;
    BOOL _wasTapped;
    id /* block */ _animateOutCompletionHandler;
}

@property (weak, nonatomic) id<LPTapToLoadViewDelegate> tapToLoadViewDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 canPreventGestureRecognizer:(id)a1;
- (void)_didScroll;
- (id)initWithHost:(id)a0;
- (void)_highlightLongPressRecognized:(id)a0;
- (void)_tapRecognized:(id)a0;
- (void)layoutComponentView;
- (id)initWithHost:(id)a0 style:(id)a1;
- (void)animateOutWithCompletionHandler:(id /* block */)a0;
- (void)_buildViews;
- (id)_createIndeterminateProgressIndicator;
- (void)_animateToProgressView;

@end
