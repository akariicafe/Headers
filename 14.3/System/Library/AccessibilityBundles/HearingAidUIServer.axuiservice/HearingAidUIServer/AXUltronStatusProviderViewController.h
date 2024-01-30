@class UILabel, AXDispatchTimer;

@interface AXUltronStatusProviderViewController : UIViewController {
    UILabel *_listenType;
    UILabel *_confidence;
    AXDispatchTimer *_clearTimer;
}

- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)updateDisplay:(id)a0 confidence:(double)a1;

@end
