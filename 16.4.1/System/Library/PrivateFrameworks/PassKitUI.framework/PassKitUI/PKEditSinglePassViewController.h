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
- (id)pass;
- (void)setPerformanceTest:(long long)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)_doneButtonPressed;
- (void)_didPresentDetailViewController;
- (void)passWasUpdated:(id)a0;
- (id)_barcodePassDetailsViewControllerForBarcodePass:(id)a0;
- (void)_deletePassConfirmed;
- (void)_deletePassPressed;
- (void)_moreButtonPressed;
- (id)_paymentPassDetailsViewControllerForPaymentPass:(id)a0;
- (void)disableDeleteButton;
- (void)enableDeleteButton;
- (BOOL)handleDeletePassRequestWithPass:(id)a0 forViewController:(id)a1;
- (id)initWithGroup:(id)a0 pass:(id)a1;
- (void)passViewSetup;
- (void)setPerformanceTestName:(id)a0;

@end
