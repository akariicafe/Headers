@class NSObject, NSString, WKProcessPool, NSMutableDictionary, SFWebExtension, NSMutableOrderedSet, _SFDialogController;
@protocol _SFNavigationIntentHandling, SFWebExtensionsControllerDelegate, OS_dispatch_queue, WBSUserDefaultObservation;

@interface SFWebExtensionsController : WBSWebExtensionsController {
    _SFDialogController *_dialogController;
    NSMutableOrderedSet *_queueOfExtensionsToShowInPermissionBanner;
    id<WBSUserDefaultObservation> _stubUnsupportedAPIsUserDefaultObserver;
    NSObject<OS_dispatch_queue> *_blocklistQueue;
}

@property (weak, nonatomic) id<SFWebExtensionsControllerDelegate> delegate;
@property (retain, nonatomic) WKProcessPool *processPool;
@property (retain, nonatomic) NSString *applicationNameForUserAgent;
@property (weak, nonatomic) id<_SFNavigationIntentHandling> navigationIntentHandler;
@property (retain, nonatomic) NSMutableDictionary *tabIDToTabPositionForTabsInTransit;
@property (readonly, nonatomic) NSString *recentlyInstalledExtensionCountString;
@property (readonly, nonatomic) SFWebExtension *currentExtensionForPermissionBanner;
@property (readonly, nonatomic) BOOL parentalControlsAreEnabledForExtensions;

+ (id)_composedIdentifierForStateOfExtensionWithBundleIdentifier:(id)a0 developerIdentifier:(id)a1;
+ (id)extensionIdentifierToBaseURIMapBundleParameterKey;
+ (Class)_extensionDataClass;
+ (void)_createWebExtensionContentBlockerDirectoryWithURL:(id)a0;
+ (id)_skipLoadingEnabledExtensionsAtLaunchPreferenceKey;
+ (id)sharedController;
+ (id)contentBlockerStore;
+ (id)_extensionDefaults;

- (id)_allWindows;
- (void).cxx_destruct;
- (void)_pinTab:(id)a0;
- (unsigned long long)toolbarItemIdealPointSize;
- (void)_updateWebExtensionDataMapForExtension:(id)a0;
- (void)_showPromptForExtensionDisabledBecauseItDoesNotSupportThisVersionOfSafariWithMessage:(id)a0 extensionIdentifier:(id)a1;
- (BOOL)_canSendMessageFromWebView:(id)a0;
- (id)_findTabInAnyWindowWithID:(double)a0;
- (void)_clearNewTabPreferenceIfNecessaryForRemovedExtensionWithComposedIdentifier:(id)a0;
- (id)_tabForWebView:(id)a0;
- (void)_showAccessRequestAlertForExtension:(id)a0 domains:(id)a1 callingAPIName:(id)a2 responseBlock:(id /* block */)a3;
- (id)_tabForTabID:(id)a0 webView:(id)a1 extension:(id)a2;
- (id)_windowForWindowID:(id)a0 webView:(id)a1 extension:(id)a2;
- (void)_relateParentTab:(id)a0 toTab:(id)a1;
- (void)_createNewTabInWindow:(id)a0 tabIndex:(id)a1 url:(id)a2 makeActive:(BOOL)a3 completionHandler:(id /* block */)a4;
- (id)_duplicateTab:(id)a0;
- (void)_unpinTab:(id)a0;
- (void)_captureVisibleTab:(id)a0 format:(id)a1 quality:(double)a2 completionHandler:(id /* block */)a3;
- (id)lastFocusedWindow;
- (void)_updateWindow:(id)a0 updateInfo:(id)a1;
- (id)_developerIdentifierForExtension:(id)a0;
- (id)_safariShortVersion;
- (void)removeContentBlockerForExtension:(id)a0;
- (BOOL)extensionsEnabled;
- (void)_didDiscoverExtensionCount:(int)a0;
- (void)_notifyObserversContentBlockerListDidChange;
- (BOOL)_isExtensionBlockedByBlocklist:(id)a0 developerIdentifier:(id)a1;
- (void)extensionSettingsWereUpdatedExternallyFromSettingsApp:(BOOL)a0;
- (void)reportCommandShortcutConflictsIfNecessaryForExtension:(id)a0 presentingViewController:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)_isExtensionBlockedByBlocklist:(id)a0 completionHandler:(id /* block */)a1;
- (void)_updateExtensionsStateAfterExtensionSettingsWereUpdatedExternally:(id)a0 shouldUpdateExtensionPermissionsAndEnabledState:(BOOL)a1;
- (void)_extensionWithComposedIdentifier:(id)a0 wasEnabledOrDisabledByExtensionSettings:(BOOL)a1;
- (void)_reportCommandShortcutConflictsForExtension:(id)a0 conflicts:(id)a1 presentingViewController:(id)a2 completionHandler:(id /* block */)a3;
- (id)_commandShortcutConflictAlertForExtension:(id)a0 conflict:(id)a1 okAction:(id /* block */)a2;
- (void)showPermissionBannerForExtension:(id)a0;
- (void)hidePermissionBannerForExtension:(id)a0;
- (void)didViewToolbarItemBadgesInTabWithIdentifier:(id)a0;
- (BOOL)hasUpdatedToolbarItemBadgeTextInTabWithIdentifier:(id)a0;
- (void)fireAppropriateTabMovementEventForTabState:(id)a0;
- (void)fireOnMovedEventForTabsWithPreviousTabPositions:(id)a0 currentTabsPositions:(id)a1;
- (void)fireAttachmentEventsForTabsWithPreviousTabPositions:(id)a0;
- (void)didDeactivateWindow;
- (void)compileDeclarativeNetRequestExtension:(id)a0 rules:(id)a1 completionHandler:(id /* block */)a2;

@end
