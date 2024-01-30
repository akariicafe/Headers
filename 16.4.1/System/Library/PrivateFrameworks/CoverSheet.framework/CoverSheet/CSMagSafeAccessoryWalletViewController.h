@class CSMagSafeAccessoryWalletView;

@interface CSMagSafeAccessoryWalletViewController : CSMagSafeAccessoryViewController

@property (retain, nonatomic) CSMagSafeAccessoryWalletView *walletView;
@property (nonatomic) BOOL isAnimatingPresentation;

- (id)accessoryView;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithAccessory:(id)a0;
- (double)animationDurationBeforeDismissal;

@end
