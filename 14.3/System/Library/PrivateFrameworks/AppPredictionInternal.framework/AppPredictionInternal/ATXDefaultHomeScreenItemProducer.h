@class ATXHomeScreenWidgetBlacklistManager, NSSet, NSDictionary, NSArray, ATXDefaultHomeScreenItemUpdate, _ATXAppInfoManager;

@interface ATXDefaultHomeScreenItemProducer : NSObject

@property (readonly, nonatomic) NSSet *descriptors;
@property (readonly, nonatomic) NSDictionary *descriptorInstallDates;
@property (readonly, nonatomic) NSArray *homeScreenConfig;
@property (retain, nonatomic) _ATXAppInfoManager *appInfoManager;
@property (retain, nonatomic) ATXHomeScreenWidgetBlacklistManager *blacklistManager;
@property (nonatomic) BOOL isDayZeroExperience;
@property (readonly, nonatomic) ATXDefaultHomeScreenItemUpdate *update;

+ (id)_defaultHomeScreenItemAssets;
+ (BOOL)_avocadoDescriptorIsAppPredictionsDescriptor:(id)a0;
+ (id)_globalPopularityPlistTypeAsPlistStringKey:(int)a0;

- (void).cxx_destruct;
- (id)initWithDescriptors:(id)a0 descriptorInstallDates:(id)a1 homeScreenConfig:(id)a2;
- (id)initWithDescriptors:(id)a0 descriptorInstallDates:(id)a1 homeScreenConfig:(id)a2 appInfoManager:(id)a3 blacklistManager:(id)a4;
- (BOOL)_isDayZeroExperience;
- (id)_updateForDayZeroExperience;
- (id)_updateForPersonalizedExperience;
- (id)_candidateHomeScreenWidgetDescriptors;
- (id)_mapWidgetPersonalityStringToWidgetDescriptorUsingCandidateWidgetDescriptors:(id)a0;
- (id)_defaultStackForDayZeroExperienceWithMappedCandidateWidgets:(id)a0 defaultStackSuggestions:(id)a1;
- (id)_defaultWidgetsForDayZeroExperienceFromMappedCandidateWidgets:(id)a0 defaultWidgetSuggestions:(id)a1;
- (void)_sortDayZeroWidgetsByDownrankingInstalledWidgets:(id)a0;
- (BOOL)_isStackConfiguredOnHomeScreen;
- (id)_defaultStackForPersonalizedExperience:(id)a0 globalPopularityPlistType:(int)a1;
- (id)_updateDefaultWidgetsForPersonalizedExperience:(id)a0;
- (void)_addSpecialAvocadoIfPossible:(id)a0 toSmallDefaultStack:(id)a1 mediumDefaultStack:(id)a2 largeDefaultStack:(id)a3 shouldAddToFront:(BOOL)a4;
- (id)_defaultWidgetStackFromSmallCandidateStack:(id)a0 mediumCandidateStack:(id)a1 largeCandidateStack:(id)a2;
- (void)_addSpecialAvocado:(id)a0 toSmallDefaultStack:(id)a1 mediumDefaultStack:(id)a2 largeDefaultStack:(id)a3 shouldAddToFront:(BOOL)a4;
- (id)_createATXHomeScreenWidgetDescriptorWithAvocadoDescriptor:(id)a0 appBundleId:(id)a1 rankType:(long long)a2;
- (id)_splitWidgetsBasedOnSupportedSize:(id)a0;
- (void)_sortDefaultStackWidgets:(id)a0 globalPopularityPlistType:(int)a1;
- (void)_sortDefaultWidgets:(id)a0 globalPopularityPlistType:(int)a1;
- (long long)_appLaunchComparatorForWidget1:(id)a0 widget2:(id)a1;
- (double)_numberOfAppLaunchesForWidget:(id)a0;
- (long long)_downrankComparator:(id)a0 widget2:(id)a1;
- (long long)_globalPopularityComparator:(id)a0 appLaunchHistogram:(id)a1 widget1:(id)a2 widget2:(id)a3;
- (void)_sortWidgetsByAppLaunchAndGlobalPopularity:(id)a0 globalPopularityPlistType:(int)a1;
- (void)_sortWidgetsByAppLaunches:(id)a0;
- (void)_sortWidgetsByGlobalPopularity:(id)a0 globalPopularityPlistType:(int)a1;
- (id)_firstInstalledWidgetDate;
- (id)_fetchWidgetsOnHomeScreenWithHomeScreenConfig:(id)a0;
- (BOOL)_isNewlyInstalledWidget:(id)a0;
- (long long)_rankTypeForWidgetGivenIsWidgetNewlyInstalled:(BOOL)a0 isOnBlacklist:(BOOL)a1 isAlreadyAdded:(BOOL)a2;
- (id)_mostRecentLaunchDateBetweenDate1:(id)a0 date2:(id)a1;
- (void)_updateWidgetBlacklistIfNeeded:(id)a0;

@end
