@class NSString, STBlockingViewController;

@interface QLScreenTimeItemViewController : QLItemViewController

@property (nonatomic) long long policy;
@property (retain, nonatomic) NSString *bundleIdentifier;
@property (retain, nonatomic) NSString *categoryIdentifier;
@property (retain, nonatomic) STBlockingViewController *blockingViewController;

- (id)initWithBundleIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)hideBlockingViewControllerWithCompletionHandler:(id /* block */)a0;
- (BOOL)canSwipeToDismiss;
- (BOOL)canEnterFullScreen;
- (BOOL)canPinchToDismiss;
- (void)loadPreviewControllerWithContents:(id)a0 context:(id)a1 completionHandler:(id /* block */)a2;
- (void)_updateBlockingViewControllerWithCurrentPolicy;
- (id)initWithCategoryIdentifier:(id)a0;
- (void)showBlockingViewControllerWithPolicy:(long long)a0;

@end
