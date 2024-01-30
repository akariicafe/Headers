@class UIActivityViewController, NSString, UIViewController;
@protocol _SFBrowserDocument;

@interface ManageWebExtensionsActivity : UIActivity <WBSExtensionsControllerObserver> {
    NSString *_numberOfNewlyInstalledExtensions;
    UIViewController *_activityViewController;
}

@property (weak, nonatomic) UIActivityViewController *parentActivityViewController;
@property (weak, nonatomic) id<_SFBrowserDocument> browserDocument;

- (id)activityTitle;
- (id)activityType;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)activityViewController;
- (void)extensionsControllerExtensionListDidChange:(id)a0;
- (id)_systemImageName;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (id)_activityBadgeColor;
- (id)_activityBadgeText;
- (id)_activityBadgeTextColor;
- (void)_formatBadgeText;
- (void)_reloadBadgeCount;

@end
