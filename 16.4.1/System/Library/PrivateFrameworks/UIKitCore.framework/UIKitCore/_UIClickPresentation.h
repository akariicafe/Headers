@class UIPresentationController, UIViewController, UIView;
@protocol _UIClickPresentationTransition;

@interface _UIClickPresentation : NSObject

@property (readonly, nonatomic) UIViewController *viewController;
@property (readonly, nonatomic) UIPresentationController *presentationController;
@property (retain, nonatomic) UIView *customContainerView;
@property (retain, nonatomic) UIView *customViewForTouchContinuation;
@property (retain, nonatomic) id<_UIClickPresentationTransition> appearanceTransition;
@property (retain, nonatomic) id<_UIClickPresentationTransition> disappearanceTransition;

- (void).cxx_destruct;
- (BOOL)_presentsSelf;
- (id)initWithPresentedViewController:(id)a0 presentationController:(id)a1;

@end
