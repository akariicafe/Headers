@class NSArray, FBServiceClientAuthenticator, SBIconController, NSMutableSet, NSString, BSServiceConnectionListener, NSNumber;

@interface SBHomeScreenService : NSObject <BSServiceConnectionListenerDelegate, SBSHomeScreenServiceClientToServerInterface> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) SBIconController *iconController;
@property (readonly, nonatomic) FBServiceClientAuthenticator *resetHomeScreenLayoutAuthenticator;
@property (readonly, nonatomic) FBServiceClientAuthenticator *requestSuggestedAppAuthenticator;
@property (readonly, nonatomic) FBServiceClientAuthenticator *iconFolderPathLookupAuthenticator;
@property (readonly, nonatomic) FBServiceClientAuthenticator *addWidgetToTodayViewAuthenticator;
@property (readonly, nonatomic) FBServiceClientAuthenticator *lowDensityLayoutAuthenticator;
@property (readonly, nonatomic) FBServiceClientAuthenticator *addsNewIconsToHomeScreenAuthenticator;
@property (readonly, nonatomic) FBServiceClientAuthenticator *showsBadgesInAppLibraryAuthenticator;
@property (readonly, nonatomic) FBServiceClientAuthenticator *homeScreenBundleIdentifiersAuthenticator;
@property (readonly, nonatomic) FBServiceClientAuthenticator *appLibraryRequestUpdateAuthenticator;
@property (readonly, nonatomic) FBServiceClientAuthenticator *displayedDateAuthenticator;
@property (readonly, nonatomic) FBServiceClientAuthenticator *configurationAuthenticator;
@property (readonly, nonatomic) NSMutableSet *activeConnections;
@property (readonly, nonatomic) BSServiceConnectionListener *connectionListener;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSNumber *lowDensityIconLayoutEnabledValue;
@property (copy, nonatomic) NSNumber *addsNewIconsToHomeScreenValue;
@property (copy, nonatomic) NSNumber *showsBadgesInAppLibraryValue;
@property (readonly, copy, nonatomic) NSArray *allHomeScreenApplicationBundleIdentifiers;
@property (readonly, copy, nonatomic) NSArray *allHomeScreenApplicationPlaceholderBundleIdentifiers;

- (void)runDownloadingIconTest;
- (void)changeDisplayedDateOverride:(id)a0;
- (void)configureDeweyEachAppHasItsOwnCategory;
- (BOOL)hasWidgetWithBundleIdentifier:(id)a0;
- (BOOL)debugContinuityWithBadgeType:(id)a0;
- (void).cxx_destruct;
- (void)organizeAllIconsIntoFoldersWithPageCount:(id)a0;
- (void)runRemoveAndRestoreIconTest;
- (id)folderPathToIconWithBundleIdentifier:(id)a0;
- (void)requestAppLibraryUpdate:(id)a0 reason:(id)a1 completion:(id /* block */)a2;
- (void)ignoreAllApps;
- (oneway void)unforbidApplicationBundleIdentifierFromLibrary:(id)a0 withCompletion:(id /* block */)a1;
- (void)addWidgetToTodayViewWithBundleIdentifier:(id)a0;
- (oneway void)requestSuggestedApplicationWithBundleIdentifier:(id)a0 assertionPort:(id)a1 completion:(id /* block */)a2;
- (void)listener:(id)a0 didReceiveConnection:(id)a1 withContext:(id)a2;
- (void)organizeAllIconsAcrossPagesWithPageCount:(id)a0;
- (void)configureDeweyOneCategoryWithAllApps;
- (oneway void)forbidApplicationBundleIdentifierFromLibrary:(id)a0 withCompletion:(id /* block */)a1;
- (void)_requestAppLibraryUpdate:(id)a0 reason:(id)a1 optionalCompletionHandler:(id /* block */)a2;
- (void)removeAllWidgets;
- (oneway void)runFloatingDockStressTestWithCompletion:(id /* block */)a0;
- (void)refreshAppLibrary:(id)a0 reason:(id)a1;
- (void)reloadIcons;
- (oneway void)resetHomeScreenLayoutWithCompletion:(id /* block */)a0;
- (id)initWithIconController:(id)a0;
- (void)overrideBadgeValue:(id)a0 forBundleIdentifier:(id)a1;
- (oneway void)resetCategoriesLayoutWithCompletion:(id /* block */)a0;
- (void)changeDisplayedDateOffsetOverride:(id)a0;
- (id)configureCategoryMapProviderToUseCategoryMapAtURL:(id)a0;

@end
