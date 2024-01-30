@class PKBusinessChatController, PKApplyDocumentUploadPage, PKApplyController, UIViewController;

@interface PKApplyDocumentSubmissionController : PKPaymentDocumentSubmissionController {
    PKApplyController *_applyController;
    UIViewController *_nextViewController;
    PKBusinessChatController *_businessChatController;
    PKApplyDocumentUploadPage *_documentPage;
    BOOL _isLoading;
    BOOL _isCancelling;
}

- (void)uploadID;
- (void).cxx_destruct;
- (void)userWantsToCancel;
- (void)dealloc;
- (id)initWithController:(id)a0 setupDelegate:(id)a1 documentPage:(id)a2;
- (void)removeApplicationUpdateObserver;
- (void)_cancelledConfirmed;
- (void)_featureApplicationUpdated;
- (id)nextViewController;
- (void)contactApplePressed;

@end
