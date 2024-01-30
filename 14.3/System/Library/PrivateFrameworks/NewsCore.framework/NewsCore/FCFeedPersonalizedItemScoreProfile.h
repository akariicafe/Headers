@class NSDictionary;

@interface FCFeedPersonalizedItemScoreProfile : NSObject

@property (nonatomic) double featureCtr;
@property (nonatomic) double subscribedChannelCtr;
@property (nonatomic) double paidNonpaidSubscriptionCtr;
@property (nonatomic) double autoSubscribeCtr;
@property (nonatomic) double computedGlobalScoreCoefficient;
@property (nonatomic) double userFeedbackScore;
@property (nonatomic) double userConversionScore;
@property (nonatomic) double personalizationScore;
@property (nonatomic) double firstPassPersonalizationScore;
@property (nonatomic) double agedPersonalizationScore;
@property (nonatomic) double diversifiedPersonalizationScore;
@property (nonatomic) double bundlePaidMultiplier;
@property (nonatomic) double bundleFreeMultiplier;
@property (nonatomic) double featuredMultiplier;
@property (nonatomic) double audioMultiplier;
@property (nonatomic) double evergreenMultiplier;
@property (nonatomic) double seenPenalty;
@property (nonatomic) double readPenalty;
@property (nonatomic) double sparseTagsPenalty;
@property (retain, nonatomic) NSDictionary *cohortMemberships;
@property (retain, nonatomic) NSDictionary *articleCohortMemberships;
@property (retain, nonatomic) NSDictionary *conversionCohortMemberships;
@property (nonatomic) unsigned long long groupingReason;
@property (nonatomic) unsigned long long scoringType;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
