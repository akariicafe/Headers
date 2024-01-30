@class UIPrinterSetupConnectingView, UIPrinterSetupPINView, UIScrollView, PKPrinter;

@interface UIPrinterSetupPINViewController : UIViewController

@property (retain, nonatomic) PKPrinter *printer;
@property (retain, nonatomic) UIPrinterSetupConnectingView *connectingView;
@property (retain, nonatomic) UIPrinterSetupPINView *PINView;
@property (retain, nonatomic) UIScrollView *scrollView;

- (BOOL)shouldAutorotateToInterfaceOrientation:(long long)a0;
- (void)connected:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithPrinter:(id)a0;
- (void)showSetup;
- (void)dealloc;
- (void)connectToPrinter;
- (void)loadView;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)showFailure;
- (unsigned long long)supportedInterfaceOrientations;

@end
