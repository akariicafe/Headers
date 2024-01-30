@class NSArray, NSMutableDictionary, NSDictionary, NSNumber;

@interface ATXDefaultHomeScreenItemOnboardingStacksProducer : NSObject

@property (readonly, nonatomic) NSArray *stackableCandidates;
@property (retain, nonatomic) NSMutableDictionary *cachedWidgetPersonalityToAppScore;
@property (retain, nonatomic) NSDictionary *personalityToDescriptorDictionary;
@property (readonly, nonatomic) BOOL isDayZeroExperience;
@property (readonly, nonatomic) BOOL isiPad;
@property (readonly, nonatomic) NSNumber *cachedHasiCloudFamily;
@property (readonly, nonatomic) BOOL shouldIncludeContactsWidget;
@property (readonly, nonatomic) unsigned long long adblDrainClassification;

- (id)_dayZeroOnboardingStacks;
- (void).cxx_destruct;
- (id)personalizedOnboardingStacksWithRankingAlgorithm:(int)a0;
- (id)onboardingStacks;
- (id)initWithCandidateWidgets:(id)a0 cachedWidgetPersonalityToAppScore:(id)a1 personalityToDescriptorDictionary:(id)a2 adblDrainClassification:(unsigned long long)a3 isiPad:(BOOL)a4 isDayZeroExperience:(BOOL)a5 shouldIncludeContactsWidget:(BOOL)a6 cachedHasiCloudFamily:(id)a7;
- (id)_blockedWidgetPersonalities;
- (id)_personalizedOnboardingStacksForSize:(unsigned long long)a0 requiredWidgetPersonalitiesForStack1:(id)a1 requiredWidgetPersonalitiesForStack2:(id)a2 conditionalWidgetPersonalitiesForStack1:(id)a3 conditionalWidgetPersonalitiesForStack2:(id)a4 fallbackWidgetPersonalitiesForStack1:(id)a5 fallbackWidgetPersonalitiesForStack2:(id)a6 rankedThirdPartyWidgets:(id)a7 blockedWidgetPersonalities:(id)a8;
- (id)_personalizedOnboardingStackForSize:(unsigned long long)a0 requiredWidgetPersonalities:(id)a1 conditionalWidgetPersonalities:(id)a2 fallbackWidgetPersonalities:(id)a3 rankedThirdPartyWidgets:(id)a4 usedWidgetPersonalities:(id)a5 shouldAdd3PWidgetToStack:(BOOL)a6;
- (void)_addWidget:(id)a0 toStack:(id)a1 andMarkAsUsed:(id)a2;
- (id)_firstUnusedWidgetFromList:(id)a0 fallbackWidgets:(id)a1 usedPersonalities:(id)a2 size:(unsigned long long)a3;
- (id)_firstWidgetThatIsntUsedYet:(id)a0 usedPersonalities:(id)a1;
- (id)initWithOnboardingStackWidgetCache:(id)a0 adblDrainClassification:(unsigned long long)a1 isiPad:(BOOL)a2 shouldIncludeContactsWidget:(BOOL)a3;

@end
