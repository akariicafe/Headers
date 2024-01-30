@class UIAlertController, UIViewController;
@protocol AFUIInternalDebugControlling, AFUIDebugControlling, AFUIBugReportPresentingDelegate;

@interface AFUIBugReportPresenter : NSObject <AFUIDebugControllerDelegate, AFUIInternalDebugControllerDelegate, AFUIBugReportPresenting> {
    UIViewController<AFUIInternalDebugControlling> *_internalDebugController;
    id<AFUIDebugControlling> _debugController;
}

@property (retain, nonatomic, setter=_setPresentedAlertController:) UIAlertController *presentedAlertController;
@property (weak) id<AFUIBugReportPresentingDelegate> delegate;

- (id)initWithDelegate:(id)a0;
- (void)dismiss;
- (double)_logTime;
- (void).cxx_destruct;
- (BOOL)hasContentAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)didReceiveReportBugAction;
- (void)didReceiveBugButtonLongPress;
- (void)_requestToPresentDebugController:(id)a0;
- (id)_alertControllerWithActionTypes:(id)a0;
- (void)_requestToPresentAlertController:(id)a0;
- (void)_dismissAlertControllerAnimated:(BOOL)a0;
- (void)_debugControllerPresentationWillStart;
- (void)_captureViewHierarchyDescriptionForController:(id)a0;
- (id)_lastUserTextFromConversation:(id)a0;
- (id)_conversationDataFromConversation:(id)a0;
- (void)_debugControllerPresentationDidEnd;
- (void)_requestDeviceUnlockWithSuccessCompletion:(id /* block */)a0 withErrorCompletion:(id /* block */)a1;
- (id)_actionForAlertAction:(long long)a0;
- (id)_actionTitleForAlertAction:(long long)a0;
- (long long)_actionStyleForAlertAction:(long long)a0;
- (void)_actionClickedForAction:(id)a0 withActionType:(long long)a1;
- (void)_requestToOpenURL:(id)a0;
- (void)_requestToPresentInternalDebugController:(id)a0;
- (id)_confirmationAlertControllerWithTitle:(id)a0 onConfirmation:(id /* block */)a1;
- (void)_dismissInternalDebugController;
- (void)debugController:(id)a0 stateDidChangeWithAddViews:(id)a1;
- (void)debugController:(id)a0 requestsPermissionToScreenshot:(id /* block */)a1;
- (void)debugController:(id)a0 requestsScreenShotWithCompletion:(id /* block */)a1;
- (void)debugController:(id)a0 openURL:(id)a1;
- (id)debugControllerRequestsBugReportPrefixForTitle:(id)a0;
- (id)debugControllerRequestsBugReportKeywordIdentifiers:(id)a0;
- (void)internalDebugControllerWantsDismissViewController;

@end
