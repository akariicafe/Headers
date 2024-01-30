@class CSMagSafeAccessoryWalletView;

@interface CSMagSafeAccessoryWalletViewController : CSMagSafeAccessoryViewController

@property (retain, nonatomic) CSMagSafeAccessoryWalletView *walletView;
@property (nonatomic) BOOL isAnimatingPresentation;

- (void)viewDidLoad;
- (id)accessoryView;
- (id)initWithAccessory:(id)a0;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (double)animationDurationBeforeDismissal;

@end
