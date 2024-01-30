@interface PUTabbedLibrarySettings : PXSettings

@property (nonatomic) long long sidebarEnabledMode;
@property (nonatomic) BOOL enableMemoriesTab;
@property (nonatomic) BOOL enableSharedTab;
@property (nonatomic) BOOL enableAlbumsTab;
@property (nonatomic) BOOL enableCuratedLibraryTab;
@property (nonatomic) BOOL enableForYouTab;
@property (nonatomic) BOOL enableSearchTab;
@property (nonatomic) BOOL enableConsolidatedAlbumsTab;
@property (nonatomic) BOOL enableBlankTab;
@property (readonly, nonatomic, getter=isSidebarEnabled) BOOL sidebarEnabled;
@property (nonatomic) BOOL sidebarAnimateSelectionUpdates;
@property (nonatomic) BOOL sidebarAllPhotosSuspendsNavigationHighlights;
@property (nonatomic) BOOL sidebarScrollSelectedItemToCenter;
@property (nonatomic) BOOL sidebarOnlyScrollOffscreenItemOnScreen;
@property (nonatomic) BOOL sidebarAnimateDataSourceUpdates;
@property (nonatomic) BOOL sidebarUseMacStructure;
@property (nonatomic) BOOL sidebarEditAutoExpandToEditableItem;
@property (nonatomic) BOOL sidebarHideNavBackButtonForSelectedItem;
@property (nonatomic) long long sidebarLaunchLoadMode;
@property (nonatomic) BOOL sidebarLaunchAnimateLoad;
@property (nonatomic) BOOL sidebarSymbolImagesOnly;
@property (nonatomic) BOOL sidebarSimulateNonIncrementalChanges;
@property (nonatomic) BOOL sidebarPauseChangeProcessingWhenHidden;
@property (nonatomic) long long sidebarPausedChangeDetailsBufferLength;

+ (id)sharedInstance;
+ (id)transientProperties;
+ (id)keyPathsForValuesAffectingSidebarEnabled;
+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (id)parentSettings;
- (id)allTabs;
- (long long)countOfEnabledTabs;

@end
