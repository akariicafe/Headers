@class NSOrderedSet;

@interface SBIconModel : SBHIconModel {
    BOOL _iconsHaveBeenLoadedOnce;
    BOOL _createsIconsForInternalApps;
}

@property (copy, nonatomic) NSOrderedSet *cachedFlattenedForecastedDesiredIconState;

+ (Class)bookmarkIconClass;
+ (Class)bookmarkClass;
+ (id)currentLocaleDidChangeNotificationName;
+ (id)migratedIdentifierForLeafIdentifier:(id)a0;
+ (Class)applicationIconClass;

- (id)addBookmarkIconForWebClip:(id)a0;
- (void)willLayout;
- (id)applicationWithBundleIdentifier:(id)a0;
- (id)exportPendingState:(BOOL)a0 includeMissingIcons:(BOOL)a1;
- (id)indexPathForIconInPlatformState:(id)a0;
- (void)loadAllIcons;
- (id)modernizeRootArchive:(id)a0;
- (BOOL)importState:(id)a0;
- (id)addApplication:(id)a0;
- (BOOL)shouldAvoidPlacingIconOnFirstPage:(id)a0;
- (void)adjustIconsToShow:(id)a0 iconsToHide:(id)a1 afterChangeToVisibleIconTags:(id)a2 hiddenIconTags:(id)a3;
- (id)forecastedLayoutForIconState:(id)a0 includeMissingIcons:(BOOL)a1;
- (void)clearDesiredIconStateWithOptions:(unsigned long long)a0;
- (BOOL)shouldAvoidCreatingIconForApplication:(id)a0;
- (id)exportState:(BOOL)a0;
- (id)applicationIconForBundleIdentifier:(id)a0;
- (id)exportFlattenedState:(BOOL)a0 includeMissingIcons:(BOOL)a1;
- (BOOL)isIconVisible:(id)a0;
- (void)_replaceAppIconsWithDownloadingIcons:(id)a0;
- (void).cxx_destruct;
- (id)bookmarkIconForWebClipIdentifier:(id)a0;
- (void)_replaceAppIconsWithDownloadingIcons;

@end
