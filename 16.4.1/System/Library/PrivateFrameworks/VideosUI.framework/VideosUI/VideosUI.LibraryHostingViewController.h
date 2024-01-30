@class UINavigationItem;

@interface VideosUI.LibraryHostingViewController : VideosUI.VUIViewController {
    void /* unknown type, empty encoding */ childController;
}

@property (nonatomic, readonly) UINavigationItem *navigationItem;

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)vui_viewDidLoad;
- (void)vui_viewWillAppear:(BOOL)a0;
- (void)vui_viewWillLayoutSubviews;

@end
