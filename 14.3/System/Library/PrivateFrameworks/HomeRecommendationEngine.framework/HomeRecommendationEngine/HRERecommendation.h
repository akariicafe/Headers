@class HMHome, NSString, HMTrigger, NSSet, NSMutableDictionary, HRETemplate, NSDictionary, NSMutableSet, HMActionSet;
@protocol HFIconDescriptor;

@interface HRERecommendation : NSObject

@property (retain, nonatomic) NSMutableDictionary *configuration;
@property (readonly, nonatomic) HRETemplate *template;
@property (weak, nonatomic) HMHome *home;
@property (retain, nonatomic) NSMutableSet *mutableActions;
@property (retain, nonatomic) NSDictionary *rankingConfig;
@property (retain, nonatomic) NSDictionary *adjustedRatings;
@property (nonatomic) double rankingConfidenceScore;
@property (readonly, nonatomic) NSString *uniqueIdentifier;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *actionSetName;
@property (readonly, nonatomic) NSString *actionsSummary;
@property (readonly, nonatomic) NSString *longDescription;
@property (readonly, nonatomic) id<HFIconDescriptor> iconDescriptor;
@property (readonly, nonatomic) long long sortKey;
@property (readonly, nonatomic) HMTrigger *trigger;
@property (readonly, nonatomic) NSSet *actions;
@property (readonly, nonatomic) HMActionSet *existingActionSet;
@property (readonly, nonatomic) BOOL triggerExistsInHome;
@property (readonly, nonatomic) BOOL requiresFMFDeviceToRun;
@property (readonly, nonatomic, getter=isDerivedFromExistingConfiguration) BOOL derivedFromExistingConfiguration;

+ (id)highestRankInRecommendations:(id)a0;
+ (id)_identifiersAndValuesForActions:(id)a0 ignoringTypes:(id)a1;
+ (id)_identifiersAndTypesForActions:(id)a0;

- (void).cxx_destruct;
- (id)initWithHome:(id)a0;
- (id)description;
- (id)analyticsSource;
- (id)debugDescription;
- (void)safeSetObject:(id)a0 forKey:(id)a1;
- (id)actionSetType;
- (id)createBuilderItemWithBuilderContext:(id)a0;
- (BOOL)matchesTrigger:(id)a0;
- (id)iconDescriptorWithServiceLikeItems:(id)a0;
- (id)naturalLanguageTitleWithObjectsInContext:(id)a0 options:(id)a1;
- (id)servicesInEvents;
- (id)objectsInActions;
- (BOOL)containsMeaningfulChanges;
- (id)initWithConfiguration:(id)a0 withHome:(id)a1;
- (unsigned long long)recommendationSource;
- (BOOL)matchesTrigger:(id)a0 allowingPredicateDifference:(BOOL)a1 allowingVariance:(BOOL)a2;
- (BOOL)actionsOrEventsInvolveObjects:(id)a0;
- (void)calculateAdjustedAttributeRatings:(double)a0;

@end
