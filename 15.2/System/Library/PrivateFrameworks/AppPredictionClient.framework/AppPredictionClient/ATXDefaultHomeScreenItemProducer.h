@class CHSAvocadoDescriptor, NSSet, NSDictionary, NSArray, NSMutableDictionary, ATXDefaultHomeScreenItemUpdate;
@protocol ATXCategoricalHistogramProtocol;

@interface ATXDefaultHomeScreenItemProducer : NSObject {
    NSMutableDictionary *_cachedWidgetPersonalityToAppScore;
    id<ATXCategoricalHistogramProtocol> _spotlightAppLaunchHistogram;
}

@property (class, readonly, nonatomic) CHSAvocadoDescriptor *appPredictionsAvocadoDescriptor;

@property (readonly, nonatomic) NSSet *descriptors;
@property (readonly, nonatomic) NSDictionary *descriptorInstallDates;
@property (readonly, nonatomic) NSArray *homeScreenConfig;
@property (nonatomic) BOOL isDayZeroExperience;
@property (nonatomic) BOOL isiPad;
@property (nonatomic) unsigned long long adblDrainClassification;
@property (retain, nonatomic) NSDictionary *personalityToDescriptorDictionary;
@property (retain, nonatomic) NSArray *candidateDescriptors;
@property (retain, nonatomic) NSSet *widgetsOnHomeScreen;
@property (readonly, nonatomic) ATXDefaultHomeScreenItemUpdate *update;

- (id)_dayZeroUpdate;
- (id)_personalizedUpdate;
- (id)_appPredictionsWidgetDescriptor;
- (id)_stackableCandidates;
- (id)initWithDescriptors:(id)a0 descriptorInstallDates:(id)a1 homeScreenConfig:(id)a2 isDayZeroExperience:(BOOL)a3 isiPad:(BOOL)a4 spotlightAppLaunchHistogram:(id)a5;
- (id)_personalizedStack;
- (void)_initializeCachedWidgetPersonalityToAppScoreCache;
- (id)_personalizedStackFromCandidates:(id)a0 rankerPlistType:(int)a1 size:(unsigned long long)a2;
- (id)_personalizedStackForRankerPlistType:(int)a0;
- (id)_dayZeroOnboardingStacks;
- (id)_personalizedGalleryWidgetsForSize:(unsigned long long)a0;
- (id)_firstInstalledWidgetDate;
- (void).cxx_destruct;
- (long long)_rankTypeGivenWidgetIsNewlyInstalled:(BOOL)a0 isAlreadyAdded:(BOOL)a1;
- (id)_stackFromDefaultStackPersonalities:(id)a0;
- (BOOL)_isStackConfiguredOnHomeScreen;
- (id)initWithDescriptors:(id)a0 descriptorInstallDates:(id)a1 homeScreenConfig:(id)a2 isDayZeroExperience:(BOOL)a3 isiPad:(BOOL)a4 spotlightAppLaunchHistogram:(id)a5 adblDrainClassification:(unsigned long long)a6;
- (id)personalizedOnboardingStacksWithRankingAlgorithm:(int)a0;
- (id)_personalizedTodayStack;
- (BOOL)_isNewlyInstalledWidget:(id)a0;
- (id)onboardingStacks;

@end
