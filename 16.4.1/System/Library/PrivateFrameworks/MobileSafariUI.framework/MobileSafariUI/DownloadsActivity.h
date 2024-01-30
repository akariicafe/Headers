@class UINavigationController, ActionPanel;

@interface DownloadsActivity : TabDocumentActivity {
    UINavigationController *_navigationController;
}

@property (weak) ActionPanel *parentViewController;

- (id)activityTitle;
- (id)activityType;
- (long long)actionType;
- (id)init;
- (void).cxx_destruct;
- (id)_navigationController;
- (id)_systemImageName;
- (id)_embeddedActivityViewController;
- (id)_activityBadgeColor;
- (id)_activityBadgeText;
- (id)_activityBadgeTextColor;
- (void)performActivityWithTabDocument:(id)a0;
- (void)_downloadsDidChange;
- (BOOL)canPerformOnNewTabPage;
- (BOOL)canPerformWithTabDocument:(id)a0;

@end
