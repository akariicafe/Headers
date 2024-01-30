@class NSString, PKBankAccountInformation, PKPeerPaymentAccount;

@interface PKPeerPaymentBankAccountsViewController : PKSectionTableViewController <PKAddBankAccountInformationViewControllerDelegate> {
    PKBankAccountInformation *_bankInformation;
    PKPeerPaymentAccount *_account;
    long long _detailViewStyle;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)scrollViewDidScroll:(id)a0;
- (void)_doneButtonPressed:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (void)bankAccountInformationViewControllerChangedBankAccountInformation:(id)a0;
- (id)initWithPeerPaymentAccount:(id)a0 detailViewStyle:(long long)a1;
- (BOOL)shouldMapSection:(unsigned long long)a0;

@end
