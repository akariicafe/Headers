@class UIActivityViewController, WBSWebExtensionData, SFWebExtensionPageMenuController;
@protocol WBSWebExtensionTab;

@interface _SFWebExtensionActivity : UIActivity {
    WBSWebExtensionData *_webExtension;
    id<WBSWebExtensionTab> _tab;
    SFWebExtensionPageMenuController *_pageMenuController;
}

@property (weak, nonatomic) UIActivityViewController *parentViewController;

- (id)activityType;
- (BOOL)_isEnabled;
- (BOOL)_isDisabled;
- (void).cxx_destruct;
- (BOOL)_managesOwnPresentation;
- (id)_activityImage;
- (BOOL)_wantsOriginalImageColor;
- (id)_activityBadgeText;
- (id)_activityBadgeColor;
- (id)_activityBadgeTextColor;
- (id)_activityStatusImage;
- (id)_activityStatusTintColor;
- (id)activityTitle;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (void)performActivity;
- (void)_reloadActivitySoon;
- (void)_reloadActivity;
- (id)initWithPageMenuController:(id)a0 webExtension:(id)a1 tab:(id)a2;

@end
