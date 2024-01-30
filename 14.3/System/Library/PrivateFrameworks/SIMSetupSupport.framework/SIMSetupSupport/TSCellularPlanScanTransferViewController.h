@class UIView, NSString, NSDate, NSArray, CAShapeLayer, NSDictionary, UITableView, UIButton, CTDisplayPlanList, TSCellularPlanQRCodeScannerView, UIActivityIndicatorView, UILabel;
@protocol TSSIMSetupFlowDelegate;

@interface TSCellularPlanScanTransferViewController : UIViewController <AVCaptureMetadataOutputObjectsDelegate, UINavigationControllerDelegate, UITableViewDataSource, UITableViewDelegate, TSSetupFlowItem> {
    BOOL _receivedPendingInstallItems;
    BOOL _receivedTransferItems;
    BOOL _isInEligiblePlanPresent;
    NSDate *_nextTimeToAcceptScan;
    CAShapeLayer *_fillWithHoleLayer;
    CAShapeLayer *_holeOutlineLayer;
    NSArray *_transferItems;
    CTDisplayPlanList *_pendingInstallItems;
    TSCellularPlanQRCodeScannerView *_scannerView;
    UIActivityIndicatorView *_activityView;
}

@property (weak) id<TSSIMSetupFlowDelegate> delegate;
@property (readonly) NSString *fauxCardData;
@property (readonly) BOOL confirmationCodeRequired;
@property (readonly) BOOL manualCardInfoEntry;
@property (readonly) NSDictionary *physicalTransferPlan;
@property (weak, nonatomic) UIView *scanView;
@property (weak, nonatomic) UIView *cutoutView;
@property (readonly) BOOL transferring;
@property (weak, nonatomic) UIActivityIndicatorView *checkingAvailablePlansSpinner;
@property (weak, nonatomic) UILabel *checkingAvailablePlansLabel;
@property (weak, nonatomic) UIButton *enterDetailsManuallyButton;
@property (weak, nonatomic) UILabel *scanQRCodeLabel;
@property (weak, nonatomic) UILabel *positionQRCodeLabel;
@property (weak, nonatomic) UITableView *pendingPlansListTableView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (BOOL)canBeShownFromSuspendedState;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void)captureOutput:(id)a0 didOutputMetadataObjects:(id)a1 fromConnection:(id)a2;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)presentViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)didChangeValueForKey:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (long long)navigationBarScrollToEdgeBehavior;
- (void)viewDidDisappear:(BOOL)a0;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (void)viewDidLoad;
- (void)enterFauxCardDataManually:(id)a0;
- (void)_maybeUpdateTableView;
- (void)_addNewPlanWithCardData:(id)a0 confirmationCode:(id)a1;
- (void)_presentActionSheetForPendingInstall:(id)a0;
- (void)_presentActionSheetForPlanTransfer:(id)a0;
- (id)_messageTextForActionSheet:(id)a0 carrierName:(id)a1 transferCapability:(unsigned long long)a2;
- (void)_startPlanTransfer:(id)a0;
- (void)_startPendingInstall:(id)a0;
- (id)initWithTransferItems:(id)a0;
- (void)updateTransferList:(id)a0 isInEligiblePlanPresent:(BOOL)a1;
- (void)updatePendingInstallItems:(id)a0;

@end
