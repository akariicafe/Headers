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

- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (id)_infoButton;
- (id)initWithPass:(id)a0;
- (void).cxx_destruct;
- (void)_doneButtonPressed;
- (id)pass;
- (void)disableButtons;
- (void)_deletePassPressed;
- (void)_recoverPassPressed;
- (void)passViewSetup;
- (void)enableButtons;
- (void)_deletePassConfirmed;
- (void)_moreButtonPressed;
- (void)_recoverPassConfirmed;
- (void)_expiredPassRemovalConfirmedAsDeletion:(BOOL)a0;
- (id)_barcodePassDetailsViewControllerForBarcodePass:(id)a0;
- (id)_paymentPassDetailsViewControllerForPaymentPass:(id)a0;
- (void)_didPresentDetailViewController;
- (BOOL)handleDeletePassRequestWithPass:(id)a0 forViewController:(id)a1;
- (void)passWasUpdated:(id)a0;

@end
