@class UIAlertController, UIViewController;
@protocol AFUIInternalDebugControlling, AFUIDebugControlling, AFUIBugReportPresentingDelegate;

@interface AFUIBugReportPresenter : NSObject <AFUIDebugControllerDelegate, AFUIInternalDebugControllerDelegate, AFUIBugReportPresenting> {
    UIViewController<AFUIInternalDebugControlling> *_internalDebugController;
    id<AFUIDebugControlling> _debugController;
}

@property (retain, nonatomic, setter=_setPresentedAlertController:) UIAlertController *presentedAlertController;
@property (retain, nonatomic, setter=_setPresentedTTRController:) UIViewController *presentedTTRController;
@property (weak) id<AFUIBugReportPresentingDelegate> delegate;

- (void)dismiss;
- (double)_logTime;
- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (void)_dismissViewControllerAnimated:(BOOL)a0;
- (BOOL)hasContentAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)_dismissInternalDebugController;
- (void)_actionClickedForAction:(id)a0 withActionType:(long long)a1;
- (id)_actionForAlertAction:(long long)a0;
- (long long)_actionStyleForAlertAction:(long long)a0;
- (id)_actionTitleForAlertAction:(long long)a0;
- (id)_alertControllerWithActionTypes:(id)a0;
- (void)_captureViewHierarchyDescriptionForController:(id)a0;
- (id)_confirmationAlertControllerWithTitle:(id)a0 onConfirmation:(id /* block */)a1;
- (id)_conversationDataFromConversation:(id)a0;
- (void)_debugControllerPresentationDidEnd;
- (void)_debugControllerPresentationWillStart;
- (void)_requestDeviceUnlockWithSuccessCompletion:(id /* block */)a0 withErrorCompletion:(id /* block */)a1;
- (void)_requestToOpenURL:(id)a0;
- (void)_requestToPresentAlertController:(id)a0;
- (void)_requestToPresentDebugController:(id)a0;
- (void)_requestToPresentInternalDebugController:(id)a0;
- (void)_requestToPresentViewController:(id)a0;
- (id)_utterancesFromConversation:(id)a0;
- (void)debugController:(id)a0 openURL:(id)a1;
- (void)debugController:(id)a0 requestsPermissionToScreenshot:(id /* block */)a1;
- (void)debugController:(id)a0 requestsScreenShotWithCompletion:(id /* block */)a1;
- (void)debugController:(id)a0 stateDidChangeWithAddViews:(id)a1;
- (void)debugController:(id)a0 utterances:(id)a1 completion:(id /* block */)a2;
- (id)debugControllerRequestsBugReportKeywordIdentifiers:(id)a0;
- (id)debugControllerRequestsBugReportPrefixForTitle:(id)a0;
- (void)didReceiveBugButtonLongPress;
- (void)didReceiveReportBugAction;
- (void)internalDebugControllerWantsDismissViewController;

@end
