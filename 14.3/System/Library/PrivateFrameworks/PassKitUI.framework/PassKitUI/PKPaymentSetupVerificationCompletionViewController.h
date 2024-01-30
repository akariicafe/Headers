@class UIColor, NSString, PKPaymentProvisioningController, PKPaymentVerificationObserver, PKTableHeaderView, PKPaymentSetupFooterView, PKActivityTableCell, PKPaymentVerificationController;
@protocol PKPaymentSetupViewControllerDelegate;

@interface PKPaymentSetupVerificationCompletionViewController : PKPaymentSetupTableViewController <UITextFieldDelegate, PKPaymentVerificationObserverDelegate, PKForegroundActiveArbiterObserver> {
    PKActivityTableCell *_verificationCodeCell;
    BOOL _verificationCodeAccepted;
    BOOL _resignedResponder;
    PKPaymentVerificationObserver *_verificationObserver;
    PKTableHeaderView *_tableHeader;
    PKPaymentSetupFooterView *_tableFooter;
    UIColor *_editableTextFieldColor;
    long long _mode;
    BOOL _offerOtherMethods;
    struct { BOOL foreground; BOOL foregroundActive; } _foregroundActiveState;
    BOOL _verificationAlreadyHandled;
}

@property (readonly, nonatomic) PKPaymentVerificationController *verificationController;
@property (retain, nonatomic) PKPaymentProvisioningController *provisioningController;
@property (weak, nonatomic) id<PKPaymentSetupViewControllerDelegate> setupDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void).cxx_destruct;
- (void)verificationObserver:(id)a0 didObserveVerificationCode:(id)a1;
- (void)verificationObserverDidTimeout:(id)a0;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)textFieldDidBeginEditing:(id)a0;
- (void)dealloc;
- (id)initWithVerificationController:(id)a0 mode:(long long)a1 offerOtherMethods:(BOOL)a2;
- (void)loadView;
- (void)_applicationWillResignActive;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (void)_terminateFlow;
- (void)foregroundActiveArbiter:(id)a0 didUpdateForegroundActiveState:(struct { BOOL x0; BOOL x1; })a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)_performAddToWatchFlow;
- (void)_showAddToWatchOfferForPass:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)next:(id)a0;
- (void)_handlePassVerifiedNotification:(id)a0;
- (void)_stopVerificationObserver;
- (void)_startVerificationObserver;
- (void)_submitVerificationCode;
- (void)_disableUI;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)_showCompletedUIWithNextHandler:(id /* block */)a0;
- (void)_showCompletedUIForPass:(id)a0;
- (void)_showActivationError:(id)a0;
- (void)_handleNextStep;
- (void)textFieldDidChange:(id)a0;
- (void)_applicationDidBecomeActive;
- (void)viewWillLayoutSubviews;
- (void)_enableUI;

@end
