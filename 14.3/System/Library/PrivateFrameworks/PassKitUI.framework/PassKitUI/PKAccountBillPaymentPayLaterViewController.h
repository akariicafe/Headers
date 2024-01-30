@class PKAccountBillPaymentPayInterestDescriptionView, PKAccountBillPaymentController, UILabel, NSDate, PKTransactionSource, NSDecimalNumber, PKAddBankAccountInformationViewController, PKContinuousButton, NSDateFormatter, NSCalendar, NSString, PKAccount, CLInUseAssertion, PKBillPaymentSuggestedAmountList, UIPickerView, PKCompoundInterestCalculator;
@protocol PKAccountBillPaymentObserver;

@interface PKAccountBillPaymentPayLaterViewController : UIViewController <UIPickerViewDelegate, UIPickerViewDataSource, PKAccountBillPaymentControllerDelegate, PKAddBankAccountInformationViewControllerDelegate, PKAccountBillPaymentPayInterestDescriptionViewDelegate> {
    CLInUseAssertion *_CLInUse;
    PKAccount *_account;
    PKTransactionSource *_transactionSource;
    PKAccountBillPaymentController *_billPaymentCoordinator;
    PKBillPaymentSuggestedAmountList *_suggestionList;
    NSDate *_minDate;
    NSDate *_maxDate;
    long long _numDays;
    NSDateFormatter *_dateFormatterDayOfWeek;
    NSDateFormatter *_dateFormatter;
    NSDateFormatter *_localDateFormatter;
    NSCalendar *_productCalendar;
    NSCalendar *_localCalendar;
    NSDecimalNumber *_selectedAmount;
    NSDecimalNumber *_remainingStatementBalance;
    NSDecimalNumber *_apr;
    BOOL _performingAction;
    long long _currentPickerViewRow[1];
    UIPickerView *_datePicker;
    PKContinuousButton *_payOnButton;
    UILabel *_payLaterTitleLabel;
    UILabel *_whenToPayQuestionLabel;
    PKCompoundInterestCalculator *_interestCalculator;
    PKAccountBillPaymentPayInterestDescriptionView *_interestDescriptionView;
    PKAddBankAccountInformationViewController *_addBankAccountViewController;
}

@property (weak, nonatomic) id<PKAccountBillPaymentObserver> observer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_accountDidChange:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;
- (id)_addBankAccountInformationViewController;
- (void)bankAccountInformationViewControllerChangedBankAccountInformation:(id)a0;
- (void)addBankAccountInformationViewController:(id)a0 didAddFundingSource:(id)a1;
- (void)addBankAccountInformationViewControllerDidFinish:(id)a0;
- (void)loadView;
- (void)_setNavigationBarEnabled:(BOOL)a0;
- (long long)numberOfComponentsInPickerView:(id)a0;
- (long long)pickerView:(id)a0 numberOfRowsInComponent:(long long)a1;
- (id)pickerView:(id)a0 titleForRow:(long long)a1 forComponent:(long long)a2;
- (void)pickerView:(id)a0 didSelectRow:(long long)a1 inComponent:(long long)a2;
- (void)_presentAlertControllerForError:(id)a0;
- (void)_dismissViewControllerWithSuccess:(BOOL)a0;
- (void)_presentAddBankAccount;
- (id)initWithAccount:(id)a0 billPaymentController:(id)a1 transactionSource:(id)a2 suggestionList:(id)a3 selectedAmount:(id)a4;
- (id)_stripTimeFromDate:(id)a0;
- (void)_payOnButtonTapped:(id)a0;
- (double)_sideMargin;
- (double)_payButtonTopPadding;
- (id)_dateForRow:(long long)a0;
- (id)_dateStringForRow:(long long)a0 formatter:(id)a1;
- (void)_performBillPaymentWithAmount:(id)a0 scheduledDate:(id)a1 billPaymentSuggestedAmountDataEvent:(id)a2;
- (id)_interestForSelectedDate:(id)a0;
- (void)_setEnabled:(BOOL)a0;
- (void)billPaymentPayInterestDescriptionViewHasTappedLearnMore:(id)a0;
- (void)_updateLabelText;
- (void)accountBillPaymentController:(id)a0 hasChangedState:(unsigned long long)a1 error:(id)a2 updatedAccount:(id)a3;
- (void)viewWillLayoutSubviews;

@end
