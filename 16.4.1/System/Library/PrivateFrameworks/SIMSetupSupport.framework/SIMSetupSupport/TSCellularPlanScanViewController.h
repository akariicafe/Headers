@class NSDate, NSString, CAShapeLayer, TSCellularPlanQRCodeScannerView, UIView, UILabel, UIButton;
@protocol TSSIMSetupFlowDelegate;

@interface TSCellularPlanScanViewController : SSUIViewController <AVCaptureMetadataOutputObjectsDelegate, NSSecureCoding, UINavigationControllerDelegate, TSSetupFlowItem> {
    BOOL _withBackButton;
    NSDate *_nextTimeToAcceptScan;
    CAShapeLayer *_holeOutlineLayer;
    TSCellularPlanQRCodeScannerView *_scannerView;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (weak, nonatomic) UIButton *btLearnMore;
@property (weak) id<TSSIMSetupFlowDelegate> delegate;
@property unsigned long long entryPoint;
@property (readonly) NSString *fauxCardData;
@property (readonly) BOOL confirmationCodeRequired;
@property (readonly) BOOL manualCardInfoEntry;
@property (readonly) BOOL transferViaQRCode;
@property (weak, nonatomic) UIView *scanView;
@property (weak, nonatomic) UIView *cutoutView;
@property (weak, nonatomic) UIButton *enterDetailsManuallyButton;
@property (weak, nonatomic) UILabel *scanQRCodeLabel;
@property (weak, nonatomic) UILabel *positionQRCodeLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (void)didChangeValueForKey:(id)a0;
- (void)viewDidLoad;
- (void)viewDidDisappear:(BOOL)a0;
- (void)presentViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)canBeShownFromSuspendedState;
- (void)captureOutput:(id)a0 didOutputMetadataObjects:(id)a1 fromConnection:(id)a2;
- (void)learnMoreTapped:(id)a0;
- (void)_addNewPlanWithCardData:(id)a0 confirmationCode:(id)a1;
- (void)drawQRBox:(id)a0;
- (void)enterFauxCardDataManually:(id)a0;
- (id)initWithBackButton:(BOOL)a0;
- (struct CGPoint { double x0; double x1; })makeCGPoint:(id)a0;

@end
