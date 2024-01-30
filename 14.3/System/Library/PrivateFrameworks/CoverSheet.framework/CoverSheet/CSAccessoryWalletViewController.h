@class CSAccessoryWalletView;

@interface CSAccessoryWalletViewController : CSAccessoryViewController

@property (retain, nonatomic) CSAccessoryWalletView *walletView;
@property (nonatomic) BOOL isAnimatingPresentation;

- (id)accessoryView;
- (void).cxx_destruct;
- (id)initWithAccessory:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidLoad;
- (double)animationDurationBeforeDismissal;

@end
