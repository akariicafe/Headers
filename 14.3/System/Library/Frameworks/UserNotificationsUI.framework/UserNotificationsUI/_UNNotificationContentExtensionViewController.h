@class NSString, UIViewController, UIScrollViewDelayedTouchesBeganGestureRecognizer;
@protocol UNNotificationContentExtension;

@interface _UNNotificationContentExtensionViewController : UIViewController <_UNNotificationContentExtensionContainer> {
    struct atomic_flag { _Atomic BOOL _Value; } _invalidationOnceFlag;
    UIScrollViewDelayedTouchesBeganGestureRecognizer *_touchDelayGestureRecognizer;
}

@property (retain, nonatomic) UIViewController<UNNotificationContentExtension> *extensionViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_isSecureForRemoteViewService;

- (void)willMoveToParentViewController:(id)a0;
- (void)setPreferredContentSize:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (void)dealloc;
- (id)_extensionBundleIdentifier;
- (void)viewWillDisappear:(BOOL)a0;
- (void)loadView;
- (BOOL)_shouldForwardSystemLayoutFittingSizeChanges;
- (void)_willAppearInRemoteViewController:(id)a0;
- (void)beginRequestWithExtensionContext:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)delayed:(id)a0;
- (void)addChildViewController:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)systemLayoutFittingSizeDidChangeForChildContentContainer:(id)a0;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)a0;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)preserveInputViews;
- (void)restoreInputViews;
- (void)_setupExtensionViewController:(id)a0;
- (void)_invalidateExtensionContext;
- (id)notificationExtensionVendorContext;

@end
