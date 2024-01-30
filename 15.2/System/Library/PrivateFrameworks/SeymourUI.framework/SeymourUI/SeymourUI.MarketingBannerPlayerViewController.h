@interface SeymourUI.MarketingBannerPlayerViewController : AVPlayerViewController {
    void /* unknown type, empty encoding */ eventHub;
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ metricPage;
    void /* unknown type, empty encoding */ videoID;
}

@property (nonatomic, readonly) unsigned long long supportedInterfaceOrientations;

- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithPlayerLayerView:(id)a0;
- (void)playerFinished:(id)a0;

@end
