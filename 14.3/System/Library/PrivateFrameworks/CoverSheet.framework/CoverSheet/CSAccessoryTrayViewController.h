@class CSAccessoryTrayView;

@interface CSAccessoryTrayViewController : CSAccessoryViewController

@property (retain, nonatomic) CSAccessoryTrayView *trayView;
@property (nonatomic) BOOL isAnimatingPresentation;

- (id)accessoryView;
- (void).cxx_destruct;
- (id)initWithAccessory:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidLoad;
- (double)animationDurationBeforeDismissal;
- (id)_trayColorForAccessory:(id)a0;

@end
