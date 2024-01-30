@class PKPaymentSetupField, PKAccount, PKPaymentSetupFieldFooterView;

@interface PKAccountVerifySSNPageViewController : PKPaymentSetupFieldsViewController {
    PKAccount *_account;
    PKPaymentSetupField *_aboutCreditReportingField;
    PKPaymentSetupFieldFooterView *_footerView;
    BOOL _isLoading;
}

- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)_handleNextStep;
- (void)_cancelPressed;
- (void)_showSpinner:(BOOL)a0;
- (void)_terminateFlow;
- (id)defaultHeaderViewSubTitle;
- (id)defaultHeaderViewTitle;
- (id)initWithAccount:(id)a0 context:(long long)a1;

@end
