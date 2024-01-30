@class UIBarButtonItem, NSString, PKPassView, PKGroup, PKPass;

@interface PKEditSinglePassViewController : UIViewController <WLCardViewDelegate, PKPassDeleteHandler, PKEditPassesPerformanceTestResponder, PKEditPassesDetailsResponder> {
    PKGroup *_group;
    PKPass *_pass;
    PKPassView *_passView;
    UIBarButtonItem *_deleteBarButton;
    UIBarButtonItem *_flexibleSpace;
    UIBarButtonItem *_infoButton;
    long long _performanceTest;
    NSString *_performanceTestName;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)pass;
- (id)_barcodePassDetailsViewControllerForBarcodePass:(id)a0;
- (id)_paymentPassDetailsViewControllerForPaymentPass:(id)a0;
- (void).cxx_destruct;
- (void)_doneButtonPressed;
- (id)group;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (BOOL)handleDeletePassRequestWithPass:(id)a0 forViewController:(id)a1;
- (void)_deletePassPressed;
- (void)_moreButtonPressed;
- (void)passViewSetup;
- (void)enableDeleteButton;
- (void)_deletePassConfirmed;
- (void)disableDeleteButton;
- (void)_didPresentDetailViewController;
- (void)setPerformanceTest:(long long)a0;
- (void)setPerformanceTestName:(id)a0;
- (id)initWithGroup:(id)a0 pass:(id)a1;
- (void)passWasUpdated:(id)a0;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
