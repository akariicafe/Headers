@class UIActivityViewController, NSString, UIViewController;

@interface ManageWebExtensionsActivity : UIActivity <WBSExtensionsControllerObserver> {
    NSString *_numberOfNewlyInstalledExtensions;
    UIViewController *_activityViewController;
}

@property (weak, nonatomic) UIActivityViewController *parentActivityViewController;

- (id)activityType;
- (id)activityViewController;
- (void).cxx_destruct;
- (id)init;
- (id)_activityBadgeText;
- (id)_activityBadgeColor;
- (id)_activityBadgeTextColor;
- (id)activityTitle;
- (id)_systemImageName;
- (void)dealloc;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (void)extensionsControllerExtensionListDidChange:(id)a0;
- (void)_reloadBadgeCount;

@end
