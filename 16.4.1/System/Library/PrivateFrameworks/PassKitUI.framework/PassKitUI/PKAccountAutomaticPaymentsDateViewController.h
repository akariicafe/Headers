@class PKMonthDayCollectionViewController, NSString, NSDate, PKAccountAutomaticPaymentsController, NSCalendar, NSNumberFormatter, PKTableHeaderView, PKAccountAutomaticPaymentsDateFooterView, NSDateFormatter, PKAccount, NSTimeZone, NSIndexPath;

@interface PKAccountAutomaticPaymentsDateViewController : PKSectionTableViewController <PKAddBankAccountInformationViewControllerDelegate, PKMonthDayCollectionViewControllerDelegate> {
    NSDate *_date;
    long long _scheduledDay;
    PKAccountAutomaticPaymentsController *_controller;
    PKAccount *_account;
    unsigned long long _featureIdentifier;
    PKTableHeaderView *_tableHeaderView;
    NSIndexPath *_selectedIndexPath;
    PKMonthDayCollectionViewController *_monthDayCollectionViewController;
    NSNumberFormatter *_ordinalDayNumberFormatter;
    NSDateFormatter *_cardinalDayDateFormatter;
    BOOL _useOrdinalDay;
    PKAccountAutomaticPaymentsDateFooterView *_collectionFooterView;
    NSTimeZone *_productTimeZone;
    NSCalendar *_productCalendar;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)initWithController:(id)a0;
- (id)tableHeaderView;
- (void)viewDidLoad;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (long long)_frequency;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (id)_footerText;
- (id)_addBankAccountInformationViewController;
- (void)_handleNext:(id)a0;
- (void)_handlePresentPayment;
- (void)_performPresentPayment;
- (BOOL)_shouldShowCollectionView;
- (void)_updateNextButtonEnabledIfNecessary;
- (void)addBankAccountInformationViewController:(id)a0 didAddFundingSource:(id)a1;
- (void)addBankAccountInformationViewController:(id)a0 didFailWithError:(id)a1;
- (void)addBankAccountInformationViewControllerDidFinish:(id)a0;
- (void)bankAccountInformationViewControllerChangedBankAccountInformation:(id)a0;
- (void)monthDaySelectionViewController:(id)a0 didSelectDate:(id)a1 day:(long long)a2;
- (BOOL)shouldMapSection:(unsigned long long)a0;

@end
