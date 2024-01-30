@class NSString, STBlockingViewController;

@interface QLScreenTimeItemViewController : QLItemViewController

@property (nonatomic) long long policy;
@property (retain, nonatomic) NSString *bundleIdentifier;
@property (retain, nonatomic) NSString *categoryIdentifier;
@property (retain, nonatomic) STBlockingViewController *blockingViewController;

- (void).cxx_destruct;
- (void)_updateBlockingViewControllerWithCurrentPolicy;
- (id)initWithCategoryIdentifier:(id)a0;
- (void)loadPreviewControllerWithContents:(id)a0 context:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)canSwipeToDismiss;
- (BOOL)canPinchToDismiss;
- (BOOL)canEnterFullScreen;
- (void)showBlockingViewControllerWithPolicy:(long long)a0;
- (void)hideBlockingViewControllerWithCompletionHandler:(id /* block */)a0;
- (id)initWithBundleIdentifier:(id)a0;

@end
