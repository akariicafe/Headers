@class NSString, UIPreviewInteractionController, UIView, UIGestureRecognizer, UIViewController;
@protocol UIViewControllerPreviewingDelegate;

@interface _UIViewControllerCompatibilityPreviewingContext : NSObject <UIPreviewInteractionControllerDelegate_Internal, UIViewControllerPreviewing_Internal>

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } sourceRect;
@property (weak, nonatomic) UIViewController *viewController;
@property (retain, nonatomic) UIPreviewInteractionController *previewInteractionController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<UIViewControllerPreviewingDelegate> delegate;
@property (retain, nonatomic) UIView *customViewForInteractiveHighlight;
@property (readonly, nonatomic) UIGestureRecognizer *previewingGestureRecognizerForFailureRelationship;
@property (readonly, nonatomic) UIView *sourceView;

- (void)unregister;
- (void).cxx_destruct;
- (id)initWithSourceView:(id)a0 viewController:(id)a1;
- (BOOL)performsCustomCommitTransitionForPreviewInteractionController:(id)a0;
- (BOOL)performsViewControllerCommitTransitionForPreviewInteractionController:(id)a0;
- (id)previewInteractionController:(id)a0 committedViewControllerForPreviewViewController:(id)a1;
- (void)previewInteractionController:(id)a0 didDismissViewController:(id)a1 committing:(BOOL)a2;
- (void)previewInteractionController:(id)a0 didSelectMenuItem:(id)a1;
- (void)previewInteractionController:(id)a0 interactionProgress:(id)a1 forRevealAtLocation:(struct CGPoint { double x0; double x1; })a2 inSourceView:(id)a3 containerView:(id)a4;
- (void)previewInteractionController:(id)a0 performCommitForPreviewViewController:(id)a1 committedViewController:(id)a2;
- (void)previewInteractionController:(id)a0 performCustomCommitForPreviewViewController:(id)a1 completion:(id /* block */)a2;
- (BOOL)previewInteractionController:(id)a0 shouldStartPreviewingSimultaneouslyWithGestureRecognizer:(id)a1;
- (BOOL)previewInteractionController:(id)a0 shouldUseStandardRevealTransformForPreviewingAtLocation:(struct CGPoint { double x0; double x1; })a1 inView:(id)a2;
- (id)previewInteractionController:(id)a0 transitioningDelegateForPreviewingAtPosition:(struct CGPoint { double x0; double x1; })a1 inView:(id)a2;
- (id)previewInteractionController:(id)a0 viewControllerForPreviewingAtPosition:(struct CGPoint { double x0; double x1; })a1 inView:(id)a2 presentingViewController:(id *)a3;
- (void)previewInteractionController:(id)a0 willDismissViewController:(id)a1;
- (void)previewInteractionController:(id)a0 willPresentViewController:(id)a1;
- (void)previewInteractionController:(id)a0 willPresentViewController:(id)a1 forPosition:(struct CGPoint { double x0; double x1; })a2 inSourceView:(id)a3;
- (BOOL)previewInteractionControllerShouldPerformCompatibilityCommitTransition:(id)a0;

@end
