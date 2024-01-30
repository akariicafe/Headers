@class NSString, UIViewController;
@protocol SBSUIUserNotificationContentProviding;

@interface _SBSUICFUserNotificationContentRemoteContainerViewController : UIViewController <_SBSUICFUserNotificationContentExtensionRemoteInterface> {
    BOOL _isLegacyContentViewController;
}

@property (retain, nonatomic) UIViewController<SBSUIUserNotificationContentProviding> *extensionViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_exportedInterface;
+ (BOOL)_isSecureForRemoteViewService;
+ (id)_remoteViewControllerInterface;

- (void)configureWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)_updatePreferredContentSize;
- (void)beginRequestWithExtensionContext:(id)a0;
- (void)_trackChildViewController:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (id)userNotificationContentExtensionContext;
- (void)viewDidDisappear:(BOOL)a0;
- (void)addChildViewController:(id)a0;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)a0;
- (void)invalidateWithCompletion:(id /* block */)a0;
- (BOOL)_canShowWhileLocked;
- (void)viewDidLoad;

@end
