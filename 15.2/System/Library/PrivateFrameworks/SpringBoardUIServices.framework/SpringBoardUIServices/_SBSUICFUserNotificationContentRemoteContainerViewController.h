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
+ (id)_remoteViewControllerInterface;
+ (BOOL)_isSecureForRemoteViewService;

- (void)preferredContentSizeDidChangeForChildContentContainer:(id)a0;
- (void)addChildViewController:(id)a0;
- (void)viewDidLoad;
- (void)invalidateWithCompletion:(id /* block */)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (void)_updatePreferredContentSize;
- (BOOL)_canShowWhileLocked;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)configureWithCompletion:(id /* block */)a0;
- (void)beginRequestWithExtensionContext:(id)a0;
- (void)_trackChildViewController:(id)a0;
- (id)userNotificationContentExtensionContext;

@end
