@interface _TtC24KeyboardSettingsFeedbackP33_A8D87A2BC67C5811F046956486A724BD23FeedbackSurveyPresenter : _TtCs12_SwiftObject <Feedback.FBKFeedbackDraftViewControllerDelegate> {
    void /* unknown type, empty encoding */ feedbackController;
    void /* unknown type, empty encoding */ completion;
    void /* unknown type, empty encoding */ durationBucketingThresholds;
}

- (void)feedbackDraftViewController:(id)a0 didCompleteWithFeedbackID:(id)a1;
- (void)feedbackDraftViewController:(id)a0 didFailToAttachURL:(id)a1 error:(long long)a2;
- (void)feedbackDraftViewController:(id)a0 didFailToStartWithError:(long long)a1;
- (void)feedbackDraftViewController:(id)a0 didFailToSubmitFeedback:(id)a1;
- (void)feedbackDraftViewControllerDidCancel:(id)a0;

@end
