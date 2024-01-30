@protocol SBIconModelApplicationDataSource;

@interface SBIconModel : SBHIconModel {
    BOOL _iconsHaveBeenLoadedOnce;
    BOOL _createsIconsForInternalApps;
}

@property (readonly, nonatomic) id<SBIconModelApplicationDataSource> applicationDataSource;
@property (nonatomic) BOOL allowsWebClips;

+ (id)migratedIdentifierForLeafIdentifier:(id)a0;

- (id)expectedIconForDisplayIdentifier:(id)a0;
- (void)localeChanged;
- (void)updateExistingBookmarkIcon:(id)a0 forUpdatedWebClip:(id)a1;
- (id)applicationIconForBundleIdentifier:(id)a0;
- (void).cxx_destruct;
- (BOOL)_shouldSkipAddingIcon:(id)a0 toRootFolder:(id)a1;
- (void)_replaceAppIconsWithDownloadingIcons;
- (void)dealloc;
- (void)_replaceAppIconsWithDownloadingIcons:(id)a0;
- (void)loadAllIcons;
- (void)adjustIconsToShow:(id)a0 iconsToHide:(id)a1 afterChangeToVisibleIconTags:(id)a2 hiddenIconTags:(id)a3;
- (id)exportPendingState:(BOOL)a0 includeMissingIcons:(BOOL)a1;
- (id)exportFlattenedState:(BOOL)a0 includeMissingIcons:(BOOL)a1;
- (BOOL)importState:(id)a0;
- (id)indexPathForIconInPlatformState:(id)a0;
- (id)exportState:(BOOL)a0;
- (id)placeholdersByDisplayID;
- (id)addIconForApplication:(id)a0;
- (id)initWithStore:(id)a0 applicationDataSource:(id)a1;
- (BOOL)shouldAvoidCreatingIconForApplication:(id)a0;
- (id)description;
- (id)expectedIconForDisplayIdentifier:(id)a0 createIfNecessary:(BOOL)a1;
- (BOOL)isIconVisible:(id)a0;
- (id)applicationWithBundleIdentifier:(id)a0;
- (BOOL)shouldAvoidPlacingIconOnFirstPage:(id)a0;
- (id)_applicationIcons;
- (id)bookmarkIconForWebClipIdentifier:(id)a0;
- (id)addBookmarkIconForWebClip:(id)a0;
- (id)addIconForApplication:(id)a0 force:(BOOL)a1;
- (void)willLayout;
- (id)forecastedLayoutForIconState:(id)a0 includeMissingIcons:(BOOL)a1;
- (void)_noteApplicationIconImageChanged:(id)a0;
- (id)modernizeRootArchive:(id)a0;
- (id)addDownloadingIconForDownload:(id)a0;

@end
