@interface AXWatchRemoteScreenUI.AXTwiceCompanionMainViewController : UIViewController {
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ dismissButton;
    void /* unknown type, empty encoding */ watchDeviceView;
    void /* unknown type, empty encoding */ statusLabel;
    void /* unknown type, empty encoding */ pullToDismissManager;
    void /* unknown type, empty encoding */ cardBackgroundView;
}

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (BOOL)_canShowWhileLocked;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (void)cardSwipeDownWithGesture:(id)a0;

@end
