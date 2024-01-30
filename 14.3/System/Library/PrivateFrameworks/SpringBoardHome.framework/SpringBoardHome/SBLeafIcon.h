@class NSString, NSArray, NSMutableOrderedSet;
@protocol SBLeafIconDataSource;

@interface SBLeafIcon : SBIcon <NSCopying> {
    NSString *_leafIdentifier;
    NSString *_applicationBundleID;
    NSMutableOrderedSet *_dataSources;
    id<SBLeafIconDataSource> _activeDataSource;
    id<SBLeafIconDataSource> _manuallySetDataSource;
    id<SBLeafIconDataSource> _dataSourceAtUninstallation;
    unsigned long long _coalescedDataSourceUpdates;
}

@property (readonly, copy, nonatomic) NSString *sbh_iconLibraryItemIdentifier;
@property (readonly, nonatomic, getter=_bestDataSource) id<SBLeafIconDataSource> bestDataSource;
@property (readonly, nonatomic, getter=_fallbackBestDataSource) id<SBLeafIconDataSource> fallbackBestDataSource;
@property (readonly, copy, nonatomic) NSString *applicationBundleID;
@property (retain, nonatomic) id<SBLeafIconDataSource> activeDataSource;
@property (readonly, copy, nonatomic) NSArray *iconDataSources;
@property (readonly, nonatomic) id<SBLeafIconDataSource> firstIconDataSource;
@property (readonly, nonatomic) id<SBLeafIconDataSource> lastIconDataSource;
@property (readonly, nonatomic) unsigned long long iconDataSourceCount;

+ (id)iconImageForDataSource:(id)a0 ofIcon:(id)a1 info:(struct SBIconImageInfo { struct CGSize { double x0; double x1; } x0; double x1; double x2; })a2;
+ (Class)downloadingIconClass;
+ (id)formattedBadgeNumberOrString:(id)a0;

- (BOOL)isTimedOut;
- (id)genericIconImageWithInfo:(struct SBIconImageInfo { struct CGSize { double x0; double x1; } x0; double x1; double x2; })a0;
- (id)badgeNumberOrString;
- (id)init;
- (void).cxx_destruct;
- (long long)progressState;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)removeObserver:(id)a0;
- (BOOL)isUninstallSupported;
- (void)dealloc;
- (BOOL)hasIconDataSource:(id)a0;
- (void)addObserver:(id)a0;
- (void)setUninstalled;
- (void)completeUninstall;
- (void)insertIconDataSource:(id)a0 beforeIconDataSource:(id)a1;
- (void)insertIconDataSources:(id)a0 atIndexes:(id)a1;
- (void)replaceIconDataSource:(id)a0 withIconDataSource:(id)a1;
- (unsigned long long)hash;
- (BOOL)isProgressPaused;
- (BOOL)isLeafIcon;
- (id)displayNameForLocation:(id)a0;
- (id)leafIdentifier;
- (void)addIconDataSources:(id)a0;
- (id)firstIconDataSourcePassingTest:(id /* block */)a0;
- (id)iconDataSourcesOfClass:(Class)a0;
- (void)didAddIconDataSource:(id)a0;
- (void)didRemoveIconDataSource:(id)a0;
- (id)copyWithLeafIdentifier:(id)a0;
- (void)_updateActiveDataSource;
- (void)_noteActiveDataSourceDidChangeNotification:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)generateIconImageWithInfo:(struct SBIconImageInfo { struct CGSize { double x0; double x1; } x0; double x1; double x2; })a0;
- (void)_noteActiveDataSourceDidGenerateImageNotification:(id)a0;
- (void)didChangeActiveDataSource:(id)a0;
- (void)_noteDataSourceDidInvalidateNotification:(id)a0;
- (BOOL)canTruncateLabel;
- (BOOL)canTightenLabel;
- (id)accessoryTextForLocation:(id)a0;
- (void)performCoalescedDataSourceUpdate:(id /* block */)a0;
- (void)selectNextActiveDataSource;
- (void)removeIconDataSourcesOfClass:(Class)a0;
- (id)firstIconDataSourceOfClass:(Class)a0;
- (id)firstIconDataSourceWithUniqueIdentifier:(id)a0;
- (BOOL)supportsRasterization;
- (id)unmaskedIconImageWithInfo:(struct SBIconImageInfo { struct CGSize { double x0; double x1; } x0; double x1; double x2; })a0;
- (BOOL)isLaunchEnabled;
- (BOOL)isLaunchDisabledForObscuredReason;
- (double)progressPercent;
- (long long)labelAccessoryType;
- (id)displayNameForObscuredDisabledLaunchForLocation:(id)a0;
- (long long)accessoryTypeForLocation:(id)a0;
- (unsigned long long)supportedGridSizeClasses;
- (void)launchFromLocation:(id)a0 context:(id)a1;
- (BOOL)hasObserver:(id)a0;
- (id)initWithLeafIdentifier:(id)a0 applicationBundleID:(id)a1;
- (void)removeIconDataSource:(id)a0;
- (void)addIconDataSource:(id)a0;
- (void)enumerateObserversUsingBlock:(id /* block */)a0;
- (void)_noteActiveDataSourceDidChangeAndReloadIcon:(BOOL)a0;
- (id)nodeIdentifier;

@end
