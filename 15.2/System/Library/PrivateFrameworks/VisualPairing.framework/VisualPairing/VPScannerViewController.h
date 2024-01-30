@class VPScannerView, NSString, UIView, UILabel, UIButton;

@interface VPScannerViewController : UIViewController

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UIButton *pairManuallyButton;
@property (retain, nonatomic) VPScannerView *scannerView;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *viewfinderView;
@property (copy, nonatomic) id /* block */ eventHandler;
@property (copy, nonatomic) id /* block */ scannedCodeHandler;
@property (copy, nonatomic) NSString *titleMessage;

+ (id)instantiateViewController;

- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)_canShowWhileLocked;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (void)handleCancelButton:(id)a0;
- (void)handlePairManuallyButton:(id)a0;

@end
