@class UIViewController, UIWindow, UITransitionView;
@protocol UIViewControllerInteractiveTransitioning, UIViewControllerAnimatedTransitioning;

@interface UIWindowController : NSObject {
    int _currentTransition;
    id _target;
    SEL _didEndSelector;
    UIViewController *_fromViewController;
    UIViewController *_toViewController;
    struct CGPoint { double x; double y; } _beginOriginForToView;
    struct CGPoint { double x; double y; } _endOriginForToView;
    long long _toModalStyle;
    BOOL _needsDidAppear;
    BOOL _needsDidDisappear;
}

@property (weak, nonatomic) UIWindow *window;
@property (readonly, nonatomic) UITransitionView *transitionView;
@property (nonatomic) BOOL presenting;
@property (retain, nonatomic, setter=_setTransitionController:) id<UIViewControllerAnimatedTransitioning> _transitionController;
@property (retain, nonatomic, setter=_setInteractionController:) id<UIViewControllerInteractiveTransitioning> _interactionController;
@property (nonatomic, getter=_isInteractiveTransition, setter=_setInteractiveTransition:) BOOL _interactiveTransition;

+ (id)windowControllerForWindow:(id)a0;
+ (void)windowWillBeDeallocated:(id)a0;

- (struct CGPoint { double x0; double x1; })_originForViewController:(id)a0 orientation:(long long)a1 actualStatusBarHeight:(double)a2 fullScreenLayout:(BOOL)a3 inWindow:(id)a4;
- (void)transition:(int)a0 fromViewController:(id)a1 toViewController:(id)a2 target:(id)a3 didEndSelector:(SEL)a4 animation:(id /* block */)a5;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_boundsForViewController:(id)a0 transition:(int)a1 orientation:(long long)a2 fullScreenLayout:(BOOL)a3 inWindow:(id)a4;
- (void)transition:(int)a0 fromViewController:(id)a1 toViewController:(id)a2 target:(id)a3 didEndSelector:(SEL)a4;
- (double)durationForTransition:(int)a0;
- (struct CGPoint { double x0; double x1; })transitionView:(id)a0 endOriginForToView:(id)a1 forTransition:(int)a2 defaultOrigin:(struct CGPoint { double x0; double x1; })a3;
- (void)transitionViewDidComplete:(id)a0 fromView:(id)a1 toView:(id)a2 removeFromView:(BOOL)a3;
- (void)transitionViewDidStart:(id)a0;
- (struct CGSize { double x0; double x1; })_flipSize:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (BOOL)transitionViewShouldUseViewControllerCallbacks;
- (struct CGPoint { double x0; double x1; })_adjustOrigin:(struct CGPoint { double x0; double x1; })a0 givenOtherOrigin:(struct CGPoint { double x0; double x1; })a1 forTransition:(int)a2;
- (struct CGPoint { double x0; double x1; })transitionView:(id)a0 endOriginForFromView:(id)a1 forTransition:(int)a2 defaultOrigin:(struct CGPoint { double x0; double x1; })a3;
- (void)dealloc;
- (void)transitionViewDidCancel:(id)a0 fromView:(id)a1 toView:(id)a2;
- (void)_prepareKeyboardForTransition:(int)a0 fromView:(id)a1;
- (void)_transplantView:(id)a0 toSuperview:(id)a1 atIndex:(unsigned long long)a2;
- (struct CGPoint { double x0; double x1; })transitionView:(id)a0 beginOriginForToView:(id)a1 forTransition:(int)a2 defaultOrigin:(struct CGPoint { double x0; double x1; })a3;
- (void)transitionView:(id)a0 startCustomTransitionWithDuration:(double)a1;

@end
