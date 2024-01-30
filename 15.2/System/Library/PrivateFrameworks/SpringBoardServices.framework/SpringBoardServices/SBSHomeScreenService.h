@class SBSDebugActiveWidgetInfo, NSArray, NSString, NSHashTable, BSServiceConnection, NSObject;
@protocol OS_dispatch_queue;

@interface SBSHomeScreenService : NSObject <SBSHomeScreenServiceServerToClientInterface> {
    BSServiceConnection *_connection;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSHashTable *_installedWebClipObservers;
    NSHashTable *_homeScreenLayoutObservers;
}

@property (nonatomic, getter=isCachedHomeScreenLayoutAvailable) BOOL cachedHomeScreenLayoutAvailable;
@property (nonatomic, getter=isCachedHomeScreenLayoutAvailableValid) BOOL cachedHomeScreenLayoutAvailableValid;
@property (nonatomic, getter=isLowDensityIconLayoutEnabled) BOOL lowDensityIconLayoutEnabled;
@property (nonatomic, getter=isRestrictedWidgetsIconLayoutEnabled) BOOL restrictedWidgetsIconLayoutEnabled;
@property (nonatomic, getter=isLargeIconLayoutEnabled) BOOL largeIconLayoutEnabled;
@property (nonatomic) BOOL addsNewIconsToHomeScreen;
@property (nonatomic) BOOL showsBadgesInAppLibrary;
@property (readonly, copy, nonatomic) NSArray *allHomeScreenApplicationBundleIdentifiers;
@property (readonly, copy, nonatomic) NSArray *allHomeScreenApplicationPlaceholderBundleIdentifiers;
@property (readonly, copy, nonatomic) NSString *allIconLists;
@property (nonatomic, getter=isHomeScreenLayoutAvailable) BOOL homeScreenLayoutAvailable;
@property (readonly, nonatomic) SBSDebugActiveWidgetInfo *debuggingActiveWidgetInfo;
@property (readonly, copy, nonatomic) NSArray *overflowSlotCounts;

- (void)organizeAllIconsIntoFoldersWithPageCount:(unsigned long long)a0;
- (void)runRemoveAndRestoreIconTest;
- (void)runDownloadingIconTest;
- (void)runWidgetDiscoverabilityTest;
- (void)clearAllOverflowSlotCounts;
- (void)setupHomeScreenForWidgetScrollPerformanceTest;
- (void)reloadIcons;
- (void)randomizeAllIconsAcrossPagesWithPageCount:(unsigned long long)a0;
- (BOOL)hasWidgetWithBundleIdentifier:(id)a0;
- (void)requestAppLibraryUpdateWithReason:(id)a0 completionHandler:(id /* block */)a1;
- (void)removeInstalledWebClipsObservationAssertion:(id)a0;
- (void)clearTodayViewLayout;
- (void)removeHomeScreenLayoutAvailabilityObservationAssertion:(id)a0;
- (void)unforbidApplicationBundleIdentifierFromLibrary:(id)a0 withCompletion:(id /* block */)a1;
- (void)changeDisplayedDateOverride:(id)a0;
- (oneway void)runFloatingDockStressTestWithCompletion:(id /* block */)a0;
- (void)addDebugIconWithSizeClassDescription:(id)a0 inPage:(unsigned long long)a1 atPositionDescription:(id)a2;
- (void)addEmptyPage;
- (id)configureCategoryMapProviderToUseCategoryMapAtURL:(id)a0;
- (void)presentAppLibraryCategoryPodForCategoryIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)requestAppLibraryUpdateSuggestionsAndRecentsPodWithReason:(id)a0 completionHandler:(id /* block */)a1;
- (void)reloadHomeScreenLayout;
- (void)configureDeweyOneCategoryWithAllApps;
- (oneway void)installedWebClipsDidChange;
- (void)overrideBadgeValue:(id)a0 forBundleIdentifier:(id)a1;
- (void)removeWidgetsFromHomeScreen;
- (void)dismissAppLibraryWithCompletion:(id /* block */)a0;
- (void)removeAllWidgets;
- (void)resetHomeScreenLayoutWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)setIconListsHidden:(id)a0;
- (void)ignoreAllApps;
- (id)init;
- (void)configureLibraryWithCategoryLimit:(long long)a0;
- (void)resetTodayViewLayout;
- (void)requestSuggestedApplicationWithBundleIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)forbidApplicationBundleIdentifierFromLibrary:(id)a0 withCompletion:(id /* block */)a1;
- (void)changeDisplayedDateOffsetOverride:(double)a0;
- (oneway void)homeScreenLayoutAvailabilityDidChange:(id)a0;
- (void)addWidgetToTodayViewWithBundleIdentifier:(id)a0;
- (void)organizeAllIconsAcrossPagesWithPageCount:(unsigned long long)a0;
- (id)addHomeScreenLayoutAvailabilityObserver:(id)a0;
- (void)dealloc;
- (BOOL)debugContinuityWithBadgeType:(id)a0;
- (id)folderPathToIconWithBundleIdentifier:(id)a0;
- (void)insertEmptyPageAtIndex:(unsigned long long)a0;
- (id)addInstalledWebClipsObserver:(id)a0;
- (void)addApplicationIconToHomeScreenWithBundleIdentifier:(id)a0;
- (void)resetCategoriesLayoutWithCompletion:(id /* block */)a0;
- (void)configureDeweyEachAppHasItsOwnCategory;
- (void)presentAppLibraryAnimated:(BOOL)a0 completion:(id /* block */)a1;

@end
