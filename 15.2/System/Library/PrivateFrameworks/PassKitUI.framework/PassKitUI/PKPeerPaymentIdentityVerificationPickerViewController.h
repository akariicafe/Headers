@class PKPaymentSetupFieldPicker, NSString, PKPeerPaymentIdentityVerificationController, PKTableHeaderView, NSArray;
@protocol PKPaymentSetupViewControllerDelegate;

@interface PKPeerPaymentIdentityVerificationPickerViewController : PKPaymentSetupTableViewController <PKExplanationViewDelegate, PKPeerPaymentAccountResolutionControllerDelegate> {
    PKPeerPaymentIdentityVerificationController *_controller;
    PKPaymentSetupFieldPicker *_pickerField;
    NSString *_footerText;
    PKTableHeaderView *_headerView;
    unsigned long long _identityVerificaionError;
    NSArray *_leftBarButtonItems;
    NSArray *_rightBarButtonItems;
    BOOL _navigationEnabled;
    BOOL _rightBarButtonItemsEnabled;
}

@property (retain, nonatomic) NSString *headerTitle;
@property (retain, nonatomic) NSString *headerSubtitle;
@property (weak, nonatomic) id<PKPaymentSetupViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfSectionsInTableView:(id)a0;
- (BOOL)isComplete;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)viewDidLayoutSubviews;
- (void)_handleError:(id)a0;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (void).cxx_destruct;
- (id)headerView;
- (void)_updateNavigationItemAnimated:(BOOL)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)initWithController:(id)a0 setupDelegate:(id)a1 pickerField:(id)a2 footerText:(id)a3;
- (void)_handleCancelButtonTapped:(id)a0;
- (void)_handleNextButtonTapped:(id)a0;
- (void)_setRightBarButtonItemsEnabled:(BOOL)a0;
- (void)_setTableViewHeaderActivitySpinnerAnimated:(BOOL)a0 title:(id)a1 subtitle:(id)a2;
- (void)hideActivitySpinnerWithTitle:(id)a0 subtitle:(id)a1;
- (void)_setNavigationBarEnabled:(BOOL)a0;
- (void)setHeaderViewTitle:(id)a0 subtitle:(id)a1;
- (void)_setIdleTimerDisabled:(BOOL)a0 title:(id)a1 subtitle:(id)a2;
- (void)_processNextViewController;
- (void)_terminateFlow;
- (void)_showNavigationBarSpinner:(BOOL)a0;
- (void)_updateRightBarButtonState;
- (void)explanationViewDidSelectContinue:(id)a0;
- (void)explanationViewDidSelectSetupLater:(id)a0;
- (void)peerPaymentAccountResolutionController:(id)a0 requestsPresentViewController:(id)a1 animated:(BOOL)a2;
- (void)peerPaymentAccountResolutionController:(id)a0 requestsDismissCurrentViewControllerAnimated:(BOOL)a1;
- (id)initWithController:(id)a0 pickerField:(id)a1 footerText:(id)a2;
- (void)showActivitySpinnerWithTitle:(id)a0 subtitle:(id)a1;
- (void)hideActivitySpinner;

@end
