@class UINavigationItem;

@interface VideosUI.LibraryHomeShareViewController : VUIBaseViewController <VUIHomeShareViewControllerDelegate> {
    void /* unknown type, empty encoding */ homeController;
    void /* unknown type, empty encoding */ lastSelectedMediaLibrary;
}

@property (nonatomic, readonly) UINavigationItem *navigationItem;

- (void)homeShareViewController:(id)a0 didSelectHomeShare:(id)a1;
- (void)homeShareViewController:(id)a0 didUpdateWith:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)vui_viewDidLayoutSubviews;
- (void)vui_viewDidLoad;

@end
