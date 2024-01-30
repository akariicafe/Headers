@interface Feedback.DraftingExtensionViewController : UIViewController <Feedback.FeedbackExtensionProtocol, FBKBugFormTableViewControllerProtocol> {
    void /* unknown type, empty encoding */ session;
    void /* unknown type, empty encoding */ form;
    void /* unknown type, empty encoding */ formStub;
    void /* unknown type, empty encoding */ shouldInitializeViews;
    void /* unknown type, empty encoding */ setFeedbackFormReply;
    void /* unknown type, empty encoding */ feedbackDraftNavigationController;
    void /* unknown type, empty encoding */ xpcClient;
    void /* unknown type, empty encoding */ localClient;
    void /* unknown type, empty encoding */ showsCompletionPage;
    void /* unknown type, empty encoding */ bugFormTableViewController;
}

- (void)controllerWillFinishSubmission:(id)a0;
- (void)controller:(id)a0 didAttachLocalFile:(id)a1;
- (void)controller:(id)a0 didClickSwitchAccountsWithCurrentUser:(id)a1;
- (void)controller:(id)a0 didFailToLoadDraftWithError:(id)a1;
- (void)controller:(id)a0 didFinishLoadingDraft:(id)a1 devicesController:(id)a2 draftingController:(id)a3;
- (void)controller:(id)a0 didFinishSubmissionWithError:(id)a1;
- (void)controller:(id)a0 didRequestDismissalWithSavedDraft:(BOOL)a1;
- (void)controllerWillResignFirstActive:(id)a0;
- (void)deleteDraft;
- (void)saveDraftWithIsClosing:(BOOL)a0;
- (void)setFeedbackForm:(id)a0 reply:(id /* block */)a1;
- (void)setShowsCompletionPage:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;

@end
