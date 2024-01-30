@interface GameCenterUI.BaseViewController : UIViewController <UIScrollViewDelegate> {
    void /* unknown type, empty encoding */ wantsHiddenNavigationBar;
    void /* unknown type, empty encoding */ wantsHiddenTitle;
    void /* unknown type, empty encoding */ manualScrollEdgeAppearanceProgress;
    void /* unknown type, empty encoding */ scrollObserver;
    void /* unknown type, empty encoding */ navbarScrollObserver;
}

- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)loadView;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;

@end
