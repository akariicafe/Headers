@class UIPrinterSetupConnectingView, UIPrinterSetupPINView, UIScrollView, PKPrinter;

@interface UIPrinterSetupPINViewController : UIViewController

@property (retain, nonatomic) PKPrinter *printer;
@property (retain, nonatomic) UIPrinterSetupConnectingView *connectingView;
@property (retain, nonatomic) UIPrinterSetupPINView *PINView;
@property (retain, nonatomic) UIScrollView *scrollView;

- (BOOL)shouldAutorotateToInterfaceOrientation:(long long)a0;
- (void)dealloc;
- (void)viewDidAppear:(BOOL)a0;
- (unsigned long long)supportedInterfaceOrientations;
- (void).cxx_destruct;
- (void)loadView;
- (void)viewWillAppear:(BOOL)a0;
- (void)connected:(BOOL)a0;
- (void)connectToPrinter;
- (id)initWithPrinter:(id)a0;
- (void)showFailure;
- (void)showSetup;

@end
