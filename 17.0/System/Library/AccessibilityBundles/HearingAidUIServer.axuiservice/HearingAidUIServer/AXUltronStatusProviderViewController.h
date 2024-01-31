@class UILabel, AXDispatchTimer;

@interface AXUltronStatusProviderViewController : UIViewController {
    UILabel *_listenType;
    UILabel *_confidence;
    AXDispatchTimer *_clearTimer;
}

- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)updateDisplay:(id)a0 confidence:(double)a1;

@end
