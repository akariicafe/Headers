@class NSString, UITextField, DMCFieldCollection;
@protocol DMCProfileQuestionsControllerDelegate;

@interface DMCInstallProfileQuestionViewController : DMCProfileTableViewController {
    DMCFieldCollection *_fieldCollection;
    NSString *_previousResponseValue;
    BOOL _waitingForPasscodePreflight;
}

@property (retain, nonatomic) UITextField *textField;
@property (weak, nonatomic) id<DMCProfileQuestionsControllerDelegate> questionsDelegate;

- (void)_handleError:(unsigned long long)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (id)initWithStyle:(long long)a0;
- (void)_updateNavigationBar;
- (void)_setup;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void)viewDidAppear:(BOOL)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (void)_hideProgressIndicator;
- (void)_showProgressIndicator;
- (id)initWithUserInput:(id)a0;
- (void)profileConnectionDidFinishPreflightWithError:(id)a0;
- (void)stopWaitingForMoreInput;
- (void)waitForMoreInput;
- (void)_addActionForError:(unsigned long long)a0 title:(id)a1 toAlert:(id)a2;
- (void)_cancelInput;
- (void)_configureQuestionField:(id)a0;
- (void)_continueOrFinish;
- (void)_continueWithCurrentField;
- (void)_didFinishPasscodePreflightWithError:(id)a0;
- (void)_didFinishPreflightWithError:(id)a0;
- (void)_finishInput;
- (void)_preflightCurrentPayload;
- (void)_processResponseAndContinue;
- (void)_retryCurrentPasswordFieldWithError:(id)a0;
- (void)_retryWithCurrentField;
- (void)_setRightButtonEnabled:(BOOL)a0;
- (void)_showAlertForError:(id)a0;
- (void)_showNavButtonsAnimated:(BOOL)a0;
- (void)_tellDelegateDidFinishWithUserInputResponses:(id)a0;
- (void)_textFieldDidChange;
- (id)initWithFieldCollection:(id)a0;
- (void)updateWithUserInput:(id)a0;

@end
