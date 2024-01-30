@interface PXMemoriesFeedSettings : PXSettings

@property (nonatomic) long long dataSourceType;
@property (nonatomic) BOOL useSlowAnimations;
@property (nonatomic) BOOL forceReloadAfterRefresh;
@property (nonatomic) BOOL disableRoundedOverlays;
@property (nonatomic) BOOL rankMemoriesByRelevanceScore;
@property (nonatomic) BOOL displayContentDuringGraphRebuild;
@property (nonatomic) BOOL alwaysShowOnboarding;
@property (nonatomic) long long memoryGroupingMethod;
@property (nonatomic) double memoryGroupingInterval;
@property (nonatomic) double additionalContentThreshold;
@property (nonatomic) unsigned long long groupsPerBatch;
@property (nonatomic) long long favoriteMemoriesSortOrder;
@property (nonatomic) long long sharingBehavior;

+ (id)sharedInstance;
+ (id)_resetRejectedMemories;
+ (id)settingsControllerModule;

- (id)parentSettings;
- (void)setDefaultValues;
- (long long)_defaultDataSourceType;

@end
