@class UIScrollView;

@interface GameCenterUI.AppStoreContentViewController : GameCenterUI.BaseViewController {
    void /* unknown type, empty encoding */ dataPresenter;
    void /* unknown type, empty encoding */ appStoreContentView;
    void /* unknown type, empty encoding */ startTime;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ bootstrapPresenter;
@property (nonatomic, readonly) UIScrollView *scrollView;

- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (id)initWithGameRecord:(id)a0;

@end
