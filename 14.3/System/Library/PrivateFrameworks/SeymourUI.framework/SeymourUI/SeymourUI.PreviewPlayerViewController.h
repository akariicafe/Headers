@interface SeymourUI.PreviewPlayerViewController : AVPlayerViewController {
    void /* unknown type, empty encoding */ contentIdentifier;
    void /* unknown type, empty encoding */ dataProvider;
    void /* unknown type, empty encoding */ metricPage;
    void /* unknown type, empty encoding */ eventHub;
}

@property (nonatomic, readonly) unsigned long long supportedInterfaceOrientations;

- (void).cxx_destruct;
- (void)viewWillDisappear:(BOOL)a0;
- (id)initWithCoder:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (id)initWithPlayerLayerView:(id)a0;

@end
