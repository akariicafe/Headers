@class CSMagSafeAccessoryTrayView;

@interface CSMagSafeAccessoryTrayViewController : CSMagSafeAccessoryViewController

@property (retain, nonatomic) CSMagSafeAccessoryTrayView *trayView;
@property (nonatomic) BOOL isAnimatingPresentation;

- (void)viewDidLoad;
- (id)accessoryView;
- (id)initWithAccessory:(id)a0;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (double)animationDurationBeforeDismissal;
- (id)_trayColorForAccessory:(id)a0;

@end
