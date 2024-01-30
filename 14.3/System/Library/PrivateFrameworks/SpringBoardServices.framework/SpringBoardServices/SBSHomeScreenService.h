@class NSArray, NSObject, BSServiceConnection;
@protocol OS_dispatch_queue;

@interface SBSHomeScreenService : NSObject <SBSHomeScreenServiceServerToClientInterface> {
    BSServiceConnection *_connection;
    NSObject<OS_dispatch_queue> *_connectionQueue;
}

@property (nonatomic, getter=isLowDensityIconLayoutEnabled) BOOL lowDensityIconLayoutEnabled;
@property (nonatomic) BOOL addsNewIconsToHomeScreen;
@property (nonatomic) BOOL showsBadgesInAppLibrary;
@property (readonly, copy, nonatomic) NSArray *allHomeScreenApplicationBundleIdentifiers;
@property (readonly, copy, nonatomic) NSArray *allHomeScreenApplicationPlaceholderBundleIdentifiers;

- (void)runDownloadingIconTest;
- (void)changeDisplayedDateOverride:(id)a0;
- (void)configureDeweyEachAppHasItsOwnCategory;
- (BOOL)hasWidgetWithBundleIdentifier:(id)a0;
- (BOOL)debugContinuityWithBadgeType:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)organizeAllIconsIntoFoldersWithPageCount:(unsigned long long)a0;
- (void)runRemoveAndRestoreIconTest;
- (void)dealloc;
- (id)folderPathToIconWithBundleIdentifier:(id)a0;
- (void)ignoreAllApps;
- (void)unforbidApplicationBundleIdentifierFromLibrary:(id)a0 withCompletion:(id /* block */)a1;
- (void)addWidgetToTodayViewWithBundleIdentifier:(id)a0;
- (void)organizeAllIconsAcrossPagesWithPageCount:(unsigned long long)a0;
- (void)configureDeweyOneCategoryWithAllApps;
- (void)forbidApplicationBundleIdentifierFromLibrary:(id)a0 withCompletion:(id /* block */)a1;
- (void)removeAllWidgets;
- (oneway void)runFloatingDockStressTestWithCompletion:(id /* block */)a0;
- (void)requestAppLibraryUpdateWithReason:(id)a0 completionHandler:(id /* block */)a1;
- (void)reloadIcons;
- (void)resetHomeScreenLayoutWithCompletion:(id /* block */)a0;
- (void)requestAppLibraryUpdateSuggestionsAndRecentsPodWithReason:(id)a0 completionHandler:(id /* block */)a1;
- (void)requestSuggestedApplicationWithBundleIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)overrideBadgeValue:(id)a0 forBundleIdentifier:(id)a1;
- (void)resetCategoriesLayoutWithCompletion:(id /* block */)a0;
- (void)changeDisplayedDateOffsetOverride:(double)a0;
- (id)configureCategoryMapProviderToUseCategoryMapAtURL:(id)a0;

@end
