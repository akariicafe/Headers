@class _SFSettingsAlertItem, NSString, NSArray, UIViewController;
@protocol _SFBrowserContentController;

@interface _SFPageFormatMenuController : NSObject <_SFPageFormatMenuItemControllerDelegate> {
    _SFSettingsAlertItem *_readerAlertItem;
    NSArray *_translationAlertItems;
}

@property (readonly, weak, nonatomic) id<_SFBrowserContentController> browserContentController;
@property (readonly, weak, nonatomic) UIViewController *viewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)_pageZoomAlertItem;
- (void)_readerAvailabilityDidChange:(id)a0;
- (id)_readerTextSizeAlertItem;
- (id)_readerAlertItem;
- (void)_buildTranslationAlertItemsWithSourceInfo:(id)a0;
- (id)_readerFontAlertItem;
- (id)_readerThemeAlertItem;
- (BOOL)_canHideToolbar;
- (id)_fullScreenAlertItem;
- (id)_desktopMobileToggleAlertItemWithOrientation:(long long)a0;
- (BOOL)_canToggleContentBlockers;
- (id)_contentBlockersToggleAlertItem;
- (id)_sitePreferencesAlertItem;
- (void)_anchorInWindowCoordinatesForAlert:(id)a0;
- (id)_userFeedbackTranslationAlertItem;
- (BOOL)_hasStartedTranslation;
- (id)_exitTranslationAlertItem;
- (id)_internalTapToRadarTranslationAlertItem;
- (id)_translateAlertItemForLocaleIdentifier:(id)a0;
- (id)initWithBrowserContentController:(id)a0;
- (void)presentMenuFromViewController:(id)a0 withSourceInfo:(id)a1;
- (id)viewControllerForPresentationForItemController:(id)a0;
- (void)_translationAvailabilityDidChange:(id)a0;

@end
