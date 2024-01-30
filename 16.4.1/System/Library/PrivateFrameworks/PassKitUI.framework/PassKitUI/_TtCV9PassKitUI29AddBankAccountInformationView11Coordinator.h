@interface _TtCV9PassKitUI29AddBankAccountInformationView11Coordinator : NSObject <PKAddBankAccountInformationViewControllerDelegate> {
    void /* unknown type, empty encoding */ completionAction;
    void /* unknown type, empty encoding */ fundingSourceAdded;
}

- (id)init;
- (void).cxx_destruct;
- (void)addBankAccountInformationViewController:(id)a0 didAddFundingSource:(id)a1;
- (void)addBankAccountInformationViewControllerDidFinish:(id)a0;
- (void)bankAccountInformationViewControllerChangedBankAccountInformation:(id)a0;

@end
