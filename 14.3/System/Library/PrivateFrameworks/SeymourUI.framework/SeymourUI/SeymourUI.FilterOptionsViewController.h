@interface SeymourUI.FilterOptionsViewController : UIViewController {
    void /* unknown type, empty encoding */ visibility;
    void /* unknown type, empty encoding */ dataProvider;
    void /* unknown type, empty encoding */ dependencies;
    void /* unknown type, empty encoding */ eventHub;
    void /* unknown type, empty encoding */ storefrontLocalizer;
    void /* unknown type, empty encoding */ layout;
    void /* unknown type, empty encoding */ titleLabel;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ subtitleLabel;

- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (id)initWithCoder:(id)a0;
- (void)onDone;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)onCancel;
- (void)updateTitleView;
- (void)textSizeChanged:(id)a0;

@end
