@class PKAccountAutomaticPaymentsController, PKTableHeaderView, NSArray, NSIndexPath, PKAccount;

@interface PKAccountAutomaticPaymentsPresetViewController : PKSectionTableViewController {
    PKAccountAutomaticPaymentsController *_controller;
    PKAccount *_account;
    unsigned long long _featureIdentifier;
    PKTableHeaderView *_tableHeaderView;
    NSIndexPath *_selectedIndexPath;
    NSArray *_paymentPresets;
}

- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)initWithController:(id)a0;
- (id)tableHeaderView;
- (void)viewDidLoad;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (void)_handleNext:(id)a0;
- (BOOL)shouldMapSection:(unsigned long long)a0;

@end
