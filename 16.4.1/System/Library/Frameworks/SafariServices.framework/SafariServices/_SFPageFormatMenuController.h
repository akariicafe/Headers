@class _SFSettingsAlertItem, NSString, _SFPageFormatMenuUIMenuBuilder, NSArray, UIViewController;
@protocol _SFBrowserContentController;

@interface _SFPageFormatMenuController : NSObject <_SFPageFormatMenuItemControllerDelegate, SFMenuConfiguring> {
    _SFSettingsAlertItem *_readerAlertItem;
    _SFSettingsAlertItem *_downloadsAlertItem;
    NSArray *_translationAlertItems;
}

@property (readonly, weak, nonatomic) id<_SFBrowserContentController> browserContentController;
@property (readonly, weak, nonatomic) UIViewController *viewController;
@property (readonly, nonatomic) _SFPageFormatMenuUIMenuBuilder *uiMenuBuilder;
@property (readonly, nonatomic) _SFSettingsAlertItem *readerAlertItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_translationAvailabilityDidChange:(id)a0;
- (void)configureMenuAndAdoptButton:(id)a0;
- (void)presentModalViewController:(id)a0 completion:(id /* block */)a1;
- (void)dismissMenu;
- (void)_hasUnviewedDownloadsDidChange:(id)a0;
- (void).cxx_destruct;
- (BOOL)_canHideToolbar;
- (id)_contentBlockersToggleAlertItem;
- (void)_anchorInWindowCoordinatesForAlert:(id)a0;
- (void)_buildTranslationAlertItemsWithSourceInfo:(id)a0;
- (BOOL)_canShowChangeSearchFieldPosition;
- (BOOL)_canShowWebsiteSettings;
- (BOOL)_canToggleBetweenDesktopAndMobileSite;
- (BOOL)_canToggleContentBlockers;
- (BOOL)_canTogglePrivateRelay;
- (id)_changeSearchFieldPositionAlertItem;
- (id)_desktopMobileToggleAlertItemWithOrientation:(long long)a0;
- (void)_didFinishLastDownload:(id)a0;
- (id)_downloadsAlertItem;
- (id)_exitTranslationAlertItem;
- (id)_fullScreenAlertItem;
- (BOOL)_hasStartedTranslation;
- (id)_internalTapToRadarTranslationAlertItem;
- (id)_localizedStringOfRunningDownloads;
- (id)_manageExtensionsAlertItem;
- (id)_mediaStateAlertItem;
- (id)_pageZoomAlertItem;
- (id)_privateRelayToggleAlertItem;
- (id)_readerAlertItem;
- (void)_readerAvailabilityDidChange:(id)a0;
- (id)_readerFontAlertItem;
- (id)_readerTextSizeAlertItem;
- (id)_readerThemeAlertItem;
- (BOOL)_shouldEnableDownloadsAlert;
- (BOOL)_shouldShowUnviewedFinishedDownloadsIndicator;
- (void)_totalProgressDidChange:(id)a0;
- (id)_translateAlertItemForLocaleIdentifier:(id)a0;
- (void)_updateDownloadsAlertItem:(id)a0;
- (id)_userFeedbackTranslationAlertItem;
- (id)_websiteSettingsAlertItem;
- (id)initWithBrowserContentController:(id)a0;
- (id)menuForOrientation:(long long)a0 sourceInfo:(id)a1;
- (void)presentMenuFromViewController:(id)a0 withSourceInfo:(id)a1;
- (id)viewControllerForPresentationForItemController:(id)a0;

@end
