@class PKPaymentPass, PKPeerPaymentAccount, PKPassLibraryDefaultDataProvider, PKExpressPassController, PKPaymentApplication, PKPaymentDefaultDataProvider;
@protocol PKPassDetailsCardInfoSectionControllerDelegate;

@interface PKPassDetailsCardInfoSectionController : PKPaymentPassDetailSectionController {
    unsigned long long _sectionMode;
    PKPaymentPass *_pass;
    PKPaymentApplication *_paymentApplication;
    PKPeerPaymentAccount *_peerPaymentAccount;
    long long _detailViewStyle;
    BOOL _expressModeEnabled;
    BOOL _expressModeSupported;
    PKPassLibraryDefaultDataProvider *_passLibraryDataProvider;
    PKExpressPassController *_expressPassController;
    PKPaymentDefaultDataProvider *_paymentServiceDataProvider;
}

@property (readonly, weak, nonatomic) id<PKPassDetailsCardInfoSectionControllerDelegate> delegate;
@property (nonatomic) BOOL hideSectionTitles;

+ (unsigned long long)_cardInfoSectionGenerateCellWithOutputForRowIndex:(long long)a0 pass:(id)a1 detailViewStyle:(long long)a2 sectionMode:(unsigned long long)a3 expressMode:(BOOL)a4;
+ (unsigned long long)_countOfRowsForPass:(id)a0 detailViewStyle:(long long)a1 sectionMode:(unsigned long long)a2 expressMode:(BOOL)a3;
+ (BOOL)_paymentApplicationShouldShowFullDPANForPass:(id)a0 paymentApplication:(id)a1;
+ (BOOL)_showExpressDetailsForPass:(id)a0 expressMode:(BOOL)a1 sectionMode:(unsigned long long)a2;
+ (BOOL)canShowSectionForPaymentPass:(id)a0 expressPassController:(id)a1;
+ (BOOL)validForPaymentPass:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)_cardInfoSectionGenerateCellWithOutput:(id *)a0 forRowIndex:(long long)a1 tableView:(id)a2;
- (id)_contextMenuConfigurationForCopyingText:(id)a0;
- (unsigned long long)_countOfRows;
- (void)_expressPassDidChange;
- (BOOL)_paymentApplicationShouldShowFullDPAN;
- (BOOL)_showExpressDetails;
- (void)_updateExpressPassInformation;
- (long long)editingStyleForRowAtIndexPath:(id)a0 sectionIdentifier:(id)a1;
- (id)initWithPass:(id)a0 peerPaymentAccount:(id)a1 mode:(unsigned long long)a2 detailViewStyle:(long long)a3 delegate:(id)a4;
- (BOOL)shouldDrawBottomSeparatorForSectionIdentifier:(id)a0;
- (BOOL)shouldDrawTopSeparatorForSectionIdentifier:(id)a0;
- (BOOL)shouldHighlightRowAtIndexPath:(id)a0 sectionIdentifier:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1 sectionIdentifier:(id)a2;
- (id)tableView:(id)a0 contextMenuConfigurationForRowAtIndexPath:(id)a1 point:(struct CGPoint { double x0; double x1; })a2 sectionIdentifier:(id)a3;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1 sectionIdentifier:(id)a2;
- (long long)tableView:(id)a0 numberOfRowsInSectionIdentifier:(id)a1;
- (id)tableView:(id)a0 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)a1 sectionIdentifier:(id)a2;
- (id)titleForHeaderInSectionIdentifier:(id)a0;

@end
