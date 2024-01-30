@class NSString, _UIViewControllerTransitionContext, UIView, UIKBViewTreeSnapshotter;
@protocol UIInputViewAnimationHost, UIViewControllerContextTransitioning;

@interface UIInputViewAnimationControllerViewControllerContext : NSObject <UIViewControllerKeyboardContextTransitioning> {
    _UIViewControllerTransitionContext *_context;
    id<UIInputViewAnimationHost> _host;
    UIView *_from;
    UIView *_to;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _fromRect;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _toRect;
    UIKBViewTreeSnapshotter *_kbSnapshotter;
}

@property (readonly, nonatomic) id<UIViewControllerContextTransitioning> mainContext;
@property (readonly, nonatomic) UIView *fromKeyboard;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } fromKeyboardFrame;
@property (readonly, nonatomic) UIView *toKeyboard;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } toKeyboardFrame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)contextWithHost:(id)a0 startPlacement:(id)a1 endPlacement:(id)a2 transitionContext:(id)a3;

- (id)initWithHost:(id)a0 startPlacement:(id)a1 endPlacement:(id)a2 transitionContext:(id)a3;
- (void)dealloc;

@end
