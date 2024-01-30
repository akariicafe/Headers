@class PKPaymentSetupField, PKAccount, PKPaymentSetupFieldFooterView;

@interface PKAccountVerifySSNPageViewController : PKPaymentSetupFieldsViewController {
    PKAccount *_account;
    PKPaymentSetupField *_aboutCreditReportingField;
    PKPaymentSetupFieldFooterView *_footerView;
    BOOL _isLoading;
}

- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)initWithAccount:(id)a0 context:(long long)a1;
- (void)_terminateFlow;
- (void)_showSpinner:(BOOL)a0;
- (void)_handleNextStep;
- (id)defaultHeaderViewTitle;
- (id)defaultHeaderViewSubTitle;
- (void)_cancelPressed;

@end
