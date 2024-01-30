@interface Feedback.FBKFeedbackDraftViewController : UIViewController <Feedback.FeedbackClientProtocol> {
    void /* unknown type, empty encoding */ form;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ extensionObserver;
    void /* unknown type, empty encoding */ extensionKitQueryDelegate;
    void /* unknown type, empty encoding */ _xpcConnection;
    void /* unknown type, empty encoding */ showsCompletionPage;
}

- (void)didFailSubmissionWithError:(id)a0;
- (void)didRequestViewDismissalWithSaved:(BOOL)a0;
- (void)draftDirtyStateUpdated:(BOOL)a0;
- (void)feedbackDidBeginSubmission;
- (void)feedbackDidCompleteWithResponseType:(long long)a0 responseID:(id)a1 completedForm:(id)a2;
- (void)feedbackDidFailToAttachURL:(id)a0 nsError:(id)a1;
- (void)feedbackRestartDidFailWithError:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;

@end
