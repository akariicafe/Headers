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

- (id)group;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (void)_doneButtonPressed;
- (id)pass;
- (void)viewDidAppear:(BOOL)a0;
- (void)setPerformanceTest:(long long)a0;
- (void)_deletePassPressed;
- (void)passViewSetup;
- (void)_deletePassConfirmed;
- (void)_moreButtonPressed;
- (id)_barcodePassDetailsViewControllerForBarcodePass:(id)a0;
- (id)_paymentPassDetailsViewControllerForPaymentPass:(id)a0;
- (void)_didPresentDetailViewController;
- (BOOL)handleDeletePassRequestWithPass:(id)a0 forViewController:(id)a1;
- (void)passWasUpdated:(id)a0;
- (void)enableDeleteButton;
- (void)disableDeleteButton;
- (void)setPerformanceTestName:(id)a0;
- (id)initWithGroup:(id)a0 pass:(id)a1;

@end
