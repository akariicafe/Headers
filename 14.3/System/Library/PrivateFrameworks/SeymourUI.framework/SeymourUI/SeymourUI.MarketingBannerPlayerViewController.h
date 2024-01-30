@interface SeymourUI.MarketingBannerPlayerViewController : AVPlayerViewController {
    void /* unknown type, empty encoding */ eventHub;
    void /* unknown type, empty encoding */ identifier;
}

@property (nonatomic, readonly) unsigned long long supportedInterfaceOrientations;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (id)initWithPlayerLayerView:(id)a0;
- (void)playerFinished:(id)a0;

@end
