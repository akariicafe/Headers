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

- (void)_translationAvailabilityDidChange:(id)a0;
- (void)presentModalViewController:(id)a0 completion:(id /* block */)a1;
- (void)dismissMenu;
- (void).cxx_destruct;
- (id)viewControllerForPresentationForItemController:(id)a0;
- (void)_readerAvailabilityDidChange:(id)a0;
- (id)_readerTextSizeAlertItem;
- (id)_pageZoomAlertItem;
- (id)_readerAlertItem;
- (id)_mediaStateAlertItem;
- (id)_downloadsAlertItem;
- (void)_buildTranslationAlertItemsWithSourceInfo:(id)a0;
- (id)_readerFontAlertItem;
- (id)_readerThemeAlertItem;
- (BOOL)_canHideToolbar;
- (id)_fullScreenAlertItem;
- (id)_desktopMobileToggleAlertItemWithOrientation:(long long)a0;
- (BOOL)_canToggleContentBlockers;
- (id)_contentBlockersToggleAlertItem;
- (id)_sitePreferencesAlertItem;
- (id)_manageWebExtensionsAlertItem;
- (BOOL)_canShowChangeSearchFieldPosition;
- (id)_changeSearchFieldPositionAlertItem;
- (void)_anchorInWindowCoordinatesForAlert:(id)a0;
- (id)_userFeedbackTranslationAlertItem;
- (BOOL)_hasStartedTranslation;
- (id)_exitTranslationAlertItem;
- (id)_internalTapToRadarTranslationAlertItem;
- (id)_translateAlertItemForLocaleIdentifier:(id)a0;
- (id)initWithBrowserContentController:(id)a0;
- (void)presentMenuFromViewController:(id)a0 withSourceInfo:(id)a1;

@end
