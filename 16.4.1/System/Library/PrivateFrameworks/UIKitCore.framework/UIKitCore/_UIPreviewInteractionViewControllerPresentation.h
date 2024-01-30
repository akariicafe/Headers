@class UIPreviewPresentationController, UIViewController, UIView;
@protocol _UIPreviewInteractionViewControllerTransition;

@interface _UIPreviewInteractionViewControllerPresentation : NSObject

@property (retain, nonatomic) UIViewController *viewController;
@property (nonatomic) BOOL shouldUseCATransitions;
@property (nonatomic) BOOL shouldFlipFromAndToViewsForDisappearanceTransition;
@property (copy, nonatomic) id /* block */ privatePresentationBlock;
@property (copy, nonatomic) id /* block */ privatePresentationCompletionBlock;
@property (nonatomic) BOOL shouldUpdateFromViewBeforePresentation;
@property (weak, nonatomic) UIView *customViewForTouchContinuation;
@property (nonatomic) BOOL shouldPresentAutomatically;
@property (retain, nonatomic) UIView *customContainerView;
@property (retain, nonatomic) UIPreviewPresentationController *presentationController;
@property (retain, nonatomic) id<_UIPreviewInteractionViewControllerTransition> appearanceTransition;
@property (retain, nonatomic) id<_UIPreviewInteractionViewControllerTransition> disappearanceTransition;

- (id)initWithViewController:(id)a0;
- (void).cxx_destruct;
- (void)_completeViewControllerPresentationImmediately;
- (void)presentViewController;

@end
