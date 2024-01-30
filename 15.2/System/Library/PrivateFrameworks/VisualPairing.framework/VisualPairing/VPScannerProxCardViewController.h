@class VPScannerView;

@interface VPScannerProxCardViewController : UIViewController

@property (retain, nonatomic) VPScannerView *scannerView;
@property (copy, nonatomic) id /* block */ scannedCodeHandler;

- (void)viewDidLoad;
- (BOOL)_canShowWhileLocked;
- (void)start;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (void)stop;

@end
