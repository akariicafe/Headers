@class SKUIStorePageViewController, NSString, NSURL, NSData, SSVLoadURLOperation, SKUICategoryController;

@interface SKUILegacyNativeViewController : SKUIViewController <SKUICategoryControllerDelegate> {
    NSURL *_activeURL;
    SKUICategoryController *_categoryController;
    NSURL *_defaultURL;
    NSData *_initialData;
    SSVLoadURLOperation *_initialOperation;
    SKUIStorePageViewController *_storePageViewController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithData:(id)a0 fromOperation:(id)a1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)a0 duration:(double)a1;
- (void)reloadData;
- (void)dealloc;
- (void).cxx_destruct;
- (void)loadView;
- (void)viewWillAppear:(BOOL)a0;
- (id)_storePageViewController;
- (id)_categoryController;
- (void)_finishLoadWithResult:(BOOL)a0 error:(id)a1;
- (void)_reloadNavigationItem;
- (id)activeMetricsController;
- (void)categoryController:(id)a0 didSelectCategory:(id)a1;

@end
