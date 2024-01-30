@class UIInteractionProgress, NSString, _UIStatesFeedbackGenerator;

@interface _UIPreviewTransitionDelegate : NSObject <UIForceTransitioningDelegate>

@property (retain, nonatomic) _UIStatesFeedbackGenerator *feedbackGenerator;
@property (retain, nonatomic) UIInteractionProgress *interactionProgressForPresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (id)interactionControllerForPresentation:(id)a0;
- (id)animationControllerForDismissedController:(id)a0;
- (id)presentationControllerForPresentedViewController:(id)a0 presentingViewController:(id)a1 sourceViewController:(id)a2;

@end
