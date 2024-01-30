@class VPScannerView;

@interface VPScannerProxCardViewController : UIViewController

@property (retain, nonatomic) VPScannerView *scannerView;
@property (copy, nonatomic) id /* block */ scannedCodeHandler;

- (BOOL)_canShowWhileLocked;
- (void)viewDidLoad;
- (void)stop;
- (void)start;
- (unsigned long long)supportedInterfaceOrientations;
- (void).cxx_destruct;

@end
