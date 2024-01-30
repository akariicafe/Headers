@class HMRoom, HMZone, NSArray, HMHome, NSString, HRETemplate, NADescriptionBuilder, NSMutableDictionary, NSDictionary, HMCharacteristic, HREIdentifierBuilder;

@interface HRERecommendation : NSObject <NSCopying>

@property (retain, nonatomic) HMRoom *room;
@property (retain, nonatomic) HMZone *zone;
@property (readonly, nonatomic) NSArray *roomsToFilterHomeObjects;
@property (retain, nonatomic) HMCharacteristic *splitCharacteristic;
@property (retain, nonatomic) HRETemplate *sourceTemplate;
@property (nonatomic) unsigned long long numberOfEnabledRecommendationsForTemplate;
@property (readonly) NADescriptionBuilder *descriptionBuilder;
@property (readonly, nonatomic) NSMutableDictionary *userInfo;
@property (retain, nonatomic) HREIdentifierBuilder *identifierBuilder;
@property (retain, nonatomic) NSMutableDictionary *defaultAnalyticsData;
@property (nonatomic) double sortingPriority;
@property (nonatomic) double rankModifier;
@property (readonly, nonatomic) HMHome *home;
@property (readonly, nonatomic) double rankingConfidenceScore;
@property (readonly, nonatomic) NSString *uniqueIdentifier;
@property (readonly, nonatomic) NSDictionary *analyticsData;

+ (id)highestRankInRecommendations:(id)a0;

- (id)description;
- (id)initWithHome:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)containsMeaningfulChanges;
- (void)setRankingConfidenceScore:(double)a0 rankVersion:(long long)a1;
- (id)initWithHome:(id)a0 uniqueIdentifier:(id)a1;
- (id)involvedObjects;
- (BOOL)containsRecommendableContent;
- (BOOL)includesObjects:(id)a0;
- (id)changedInvolvedObjects;
- (id)splitUsingSplitStrategy:(unsigned long long)a0 inHome:(id)a1;
- (id)splitUsingSplitCharacteristics:(id)a0;

@end
