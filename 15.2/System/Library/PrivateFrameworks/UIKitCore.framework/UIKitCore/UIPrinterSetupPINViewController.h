@class UIPrinterSetupConnectingView, UIPrinterSetupPINView, UIScrollView, PKPrinter;

@interface UIPrinterSetupPINViewController : UIViewController

@property (retain, nonatomic) PKPrinter *printer;
@property (retain, nonatomic) UIPrinterSetupConnectingView *connectingView;
@property (retain, nonatomic) UIPrinterSetupPINView *PINView;
@property (retain, nonatomic) UIScrollView *scrollView;

- (void)connected:(BOOL)a0;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)shouldAutorotateToInterfaceOrientation:(long long)a0;
- (void)loadView;
- (id)initWithPrinter:(id)a0;
- (void)showSetup;
- (void)showFailure;
- (void)connectToPrinter;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;

@end
