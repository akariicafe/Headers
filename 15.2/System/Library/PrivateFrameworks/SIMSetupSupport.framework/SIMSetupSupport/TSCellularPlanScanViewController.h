@class NSDate, NSString, CAShapeLayer, TSCellularPlanQRCodeScannerView, UIView, UILabel, UIButton;
@protocol TSSIMSetupFlowDelegate;

@interface TSCellularPlanScanViewController : UIViewController <AVCaptureMetadataOutputObjectsDelegate, UINavigationControllerDelegate, TSSetupFlowItem> {
    BOOL _withBackButton;
    NSDate *_nextTimeToAcceptScan;
    CAShapeLayer *_fillWithHoleLayer;
    CAShapeLayer *_holeOutlineLayer;
    TSCellularPlanQRCodeScannerView *_scannerView;
}

@property (weak) id<TSSIMSetupFlowDelegate> delegate;
@property (readonly) NSString *fauxCardData;
@property (readonly) BOOL confirmationCodeRequired;
@property (readonly) BOOL manualCardInfoEntry;
@property (weak, nonatomic) UIView *scanView;
@property (weak, nonatomic) UIView *cutoutView;
@property (weak, nonatomic) UIButton *enterDetailsManuallyButton;
@property (weak, nonatomic) UILabel *scanQRCodeLabel;
@property (weak, nonatomic) UILabel *positionQRCodeLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)canBeShownFromSuspendedState;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)presentViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)didChangeValueForKey:(id)a0;
- (void)captureOutput:(id)a0 didOutputMetadataObjects:(id)a1 fromConnection:(id)a2;
- (void)enterFauxCardDataManually:(id)a0;
- (void)_addNewPlanWithCardData:(id)a0 confirmationCode:(id)a1;
- (id)initWithBackButton:(BOOL)a0;

@end
