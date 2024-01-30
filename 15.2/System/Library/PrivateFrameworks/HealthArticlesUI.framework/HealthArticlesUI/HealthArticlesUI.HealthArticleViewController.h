@interface HealthArticlesUI.HealthArticleViewController : UIViewController <UINavigationControllerDelegate, UIScrollViewDelegate> {
    void /* unknown type, empty encoding */ components;
    void /* unknown type, empty encoding */ $__lazy_storage_$_componentViews;
    void /* unknown type, empty encoding */ $__lazy_storage_$_contentView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_trackingViewToState;
    void /* unknown type, empty encoding */ scrollView;
}

@property (nonatomic, readonly) unsigned long long supportedInterfaceOrientations;

- (unsigned long long)navigationControllerSupportedInterfaceOrientations:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)viewDidLoad;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)dismissArticleModal;

@end
