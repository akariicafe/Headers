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
@property (nonatomic, getter=isLargeIconLayoutEnabled) BOOL largeIconLayoutEnabled;
@property (nonatomic) BOOL addsNewIconsToHomeScreen;
@property (nonatomic) BOOL showsBadgesInAppLibrary;
@property (nonatomic) BOOL showsHomeScreenSearchAffordance;
@property (readonly, copy, nonatomic) NSArray *allHomeScreenApplicationBundleIdentifiers;
@property (readonly, copy, nonatomic) NSArray *allHomeScreenApplicationPlaceholderBundleIdentifiers;
@property (readonly, copy, nonatomic) NSString *allIconLists;
@property (nonatomic, getter=isHomeScreenLayoutAvailable) BOOL homeScreenLayoutAvailable;
@property (readonly, nonatomic) SBSDebugActiveWidgetInfo *debuggingActiveWidgetInfo;
@property (readonly, copy, nonatomic) NSArray *overflowSlotCounts;

- (void)organizeAllIconsAcrossPagesWithPageCount:(unsigned long long)a0;
- (void)runWidgetDiscoverabilityTest;
- (void)organizeAllIconsIntoFoldersWithPageCount:(unsigned long long)a0;
- (id)silhouetteLayoutForPageAtIndex:(unsigned long long)a0;
- (void)resetCategoriesLayoutWithCompletion:(id /* block */)a0;
- (void)configureDeweyOneCategoryWithAllApps;
- (void)randomizeAllIconsAcrossPagesWithPageCount:(unsigned long long)a0;
- (oneway void)installedWebClipsDidChange;
- (void)setupHomeScreenForWidgetScrollPerformanceTest;
- (void)runDownloadingIconTest;
- (void)clearTodayViewLayout;
- (void)reloadIcons;
- (void)forbidApplicationBundleIdentifierFromLibrary:(id)a0 withCompletion:(id /* block */)a1;
- (void)resetTodayViewLayout;
- (void)requestSuggestedApplicationWithBundleIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)requestAppLibraryUpdateSuggestionsAndRecentsPodWithReason:(id)a0 completionHandler:(id /* block */)a1;
- (void)addDebugIconWithSizeClassDescription:(id)a0 inPage:(unsigned long long)a1 atPositionDescription:(id)a2;
- (void)removeHomeScreenLayoutAvailabilityObservationAssertion:(id)a0;
- (void)addSuggestedPageWithPageType:(id)a0 focusModeIdentifier:(id)a1;
- (void)changeDisplayedDateOverride:(id)a0;
- (BOOL)debugContinuityWithBadgeType:(id)a0 deviceTypeIdentifier:(id)a1;
- (void)reloadHomeScreenLayout;
- (oneway void)homeScreenLayoutAvailabilityDidChange:(id)a0;
- (void)addApplicationIconToHomeScreenWithBundleIdentifier:(id)a0;
- (void)removeWidgetsFromHomeScreen;
- (id)addHomeScreenLayoutAvailabilityObserver:(id)a0;
- (void)overrideBadgeValue:(id)a0 forBundleIdentifier:(id)a1;
- (void)removeAllWidgets;
- (id)configureCategoryMapProviderToUseCategoryMapAtURL:(id)a0;
- (void)clearAllOverflowSlotCounts;
- (void)presentAppLibraryCategoryPodForCategoryIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)ignoreAllApps;
- (void)dealloc;
- (id)folderPathToIconWithBundleIdentifier:(id)a0;
- (oneway void)runFloatingDockStressTestWithCompletion:(id /* block */)a0;
- (void)resetHomeScreenLayoutWithCompletion:(id /* block */)a0;
- (void)addWidgetToTodayViewWithBundleIdentifier:(id)a0;
- (void)removeInstalledWebClipsObservationAssertion:(id)a0;
- (void)insertEmptyPageAtIndex:(unsigned long long)a0;
- (void)unforbidApplicationBundleIdentifierFromLibrary:(id)a0 withCompletion:(id /* block */)a1;
- (BOOL)hasWidgetWithBundleIdentifier:(id)a0;
- (id)init;
- (void)changeDisplayedDateOffsetOverride:(double)a0;
- (void)requestAppLibraryUpdateWithReason:(id)a0 completionHandler:(id /* block */)a1;
- (void)configureDeweyEachAppHasItsOwnCategory;
- (id)addInstalledWebClipsObserver:(id)a0;
- (void)configureLibraryWithCategoryLimit:(long long)a0;
- (void)addEmptyPage;
- (void)dismissAppLibraryWithCompletion:(id /* block */)a0;
- (void)presentAppLibraryAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)runRemoveAndRestoreIconTest;
- (void).cxx_destruct;
- (void)setIconListsHidden:(id)a0;

@end
