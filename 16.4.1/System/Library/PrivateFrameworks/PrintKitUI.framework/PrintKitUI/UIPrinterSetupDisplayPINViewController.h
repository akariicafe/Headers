@class PKPrinter;

@interface UIPrinterSetupDisplayPINViewController : UIViewController

@property (retain, nonatomic) PKPrinter *printer;

- (BOOL)shouldAutorotateToInterfaceOrientation:(long long)a0;
- (void)viewDidAppear:(BOOL)a0;
- (unsigned long long)supportedInterfaceOrientations;
- (void).cxx_destruct;
- (void)loadView;
- (void)enterPIN;
- (id)initWithPrinter:(id)a0;
- (void)showDisplayMessage:(long long)a0;

@end
