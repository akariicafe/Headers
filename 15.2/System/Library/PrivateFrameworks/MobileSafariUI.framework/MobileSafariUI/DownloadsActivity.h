@class UINavigationController, ActionPanel;

@interface DownloadsActivity : TabDocumentActivity {
    UINavigationController *_navigationController;
}

@property (weak) ActionPanel *parentViewController;

- (id)activityType;
- (long long)actionType;
- (void).cxx_destruct;
- (id)init;
- (id)_navigationController;
- (id)_activityBadgeText;
- (id)_activityBadgeColor;
- (id)_activityBadgeTextColor;
- (id)_embeddedActivityViewController;
- (id)activityTitle;
- (id)_systemImageName;
- (BOOL)canPerformWithTabDocument:(id)a0;
- (void)performActivityWithTabDocument:(id)a0;
- (BOOL)canPerformOnNewTabPage;
- (void)_downloadsDidChange;

@end
