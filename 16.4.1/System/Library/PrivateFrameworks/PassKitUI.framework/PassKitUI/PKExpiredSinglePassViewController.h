@class UIBarButtonItem, NSString, PKPassView, PKPass;

@interface PKExpiredSinglePassViewController : UIViewController <WLCardViewDelegate, PKPassDeleteHandler, PKExpiredPassesDetailsResponder> {
    PKPass *_pass;
    PKPassView *_passView;
    UIBarButtonItem *_deleteBarButton;
    UIBarButtonItem *_recoverBarButton;
    UIBarButtonItem *_flexibleSpace;
    UIBarButtonItem *_infoButton;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)pass;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (id)_infoButton;
- (id)initWithPass:(id)a0;
- (void)_didPresentDetailViewController;
- (void)passWasUpdated:(id)a0;
- (id)_barcodePassDetailsViewControllerForBarcodePass:(id)a0;
- (void)_deletePassConfirmed;
- (void)_deletePassPressed;
- (void)_expiredPassRemovalConfirmedAsDeletion:(BOOL)a0;
- (void)_moreButtonPressed;
- (id)_paymentPassDetailsViewControllerForPaymentPass:(id)a0;
- (void)_recoverPassConfirmed;
- (void)_recoverPassPressed;
- (void)disableButtons;
- (void)enableButtons;
- (BOOL)handleDeletePassRequestWithPass:(id)a0 forViewController:(id)a1;
- (void)passViewSetup;

@end
