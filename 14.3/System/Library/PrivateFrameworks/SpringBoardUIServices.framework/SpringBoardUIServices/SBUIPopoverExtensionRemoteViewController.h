@class UIViewController;
@protocol _SBUIPopoverExtensionHostInterface, SBUIPopoverExtension;

@interface SBUIPopoverExtensionRemoteViewController : UIViewController <_SBUIPopoverExtensionRemoteInterface>

@property (retain, nonatomic) id<_SBUIPopoverExtensionHostInterface> hostService;
@property (retain, nonatomic) UIViewController<SBUIPopoverExtension> *extensionViewController;

+ (id)_exportedInterface;
+ (BOOL)_isSecureForRemoteViewService;
+ (id)_remoteViewControllerInterface;

- (void).cxx_destruct;
- (id)popoverExtensionContext;
- (void)_setupChildViewController:(id)a0;
- (void)_willAppearInRemoteViewController:(id)a0;
- (void)beginRequestWithExtensionContext:(id)a0;
- (void)addChildViewController:(id)a0;
- (void)_updateForBundleIdentifier:(id)a0;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)a0;
- (BOOL)_canShowWhileLocked;

@end
