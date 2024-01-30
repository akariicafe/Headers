@class SKStorePageViewController, NSString;

@interface SKRemoteStorePageViewController : _UIRemoteViewController <SKUIClientStorePageViewController>

@property (weak, nonatomic) SKStorePageViewController *storePageViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void).cxx_destruct;
- (void)didFinishWithResult:(id)a0 error:(id)a1;
- (void)showProductPageWithItemIdentifier:(id)a0;

@end
