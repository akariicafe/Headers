@class FCPersonalizationCohortConfig;

@interface FCPersonalizationScoringConfig : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double articleLengthAggregateWeight;
@property (nonatomic) double articleReadPenalty;
@property (nonatomic) double audioMultiplierForFreeUsers;
@property (nonatomic) double audioMultiplierForTrialUsers;
@property (nonatomic) double audioMultiplierForPaidUsers;
@property (nonatomic) double autofavoritedVoteCoefficient;
@property (nonatomic) double baselineRatePrior;
@property (nonatomic) double bundleFreeMultiplierForFreeUsers;
@property (nonatomic) double bundleFreeMultiplierForTrialUsers;
@property (nonatomic) double bundleFreeMultiplierForPaidUsers;
@property (nonatomic) double bundlePaidMultiplierForFreeUsers;
@property (nonatomic) double bundlePaidMultiplierForTrialUsers;
@property (nonatomic) double bundlePaidMultiplierForPaidUsers;
@property (nonatomic) double channelTopicDiversificationInitialPenalty;
@property (nonatomic) double channelTopicDiversificationPenalty;
@property (nonatomic) double channelTopicDiversificationPenaltyHalfLife;
@property (nonatomic) double conversionCoefficientForFreeUsers;
@property (nonatomic) double conversionCoefficientForTrialUsers;
@property (nonatomic) double conversionCoefficientForPaidUsers;
@property (retain, nonatomic) FCPersonalizationCohortConfig *conversionCohort;
@property (nonatomic) double ctrWithOneAutofavorited;
@property (nonatomic) double ctrWithOneSubscribed;
@property (nonatomic) double ctrWithSubscribedChannel;
@property (nonatomic) double ctrWithThreeAutofavorited;
@property (nonatomic) double ctrWithThreeSubscribed;
@property (nonatomic) double ctrWithTwoAutofavorited;
@property (nonatomic) double ctrWithTwoSubscribed;
@property (nonatomic) double ctrWithZeroAutofavorited;
@property (nonatomic) double ctrWithZeroSubscribed;
@property (nonatomic) double decayFactor;
@property (nonatomic) double democratizationFactor;
@property (nonatomic) double diversificationInitialPenalty;
@property (nonatomic) double diversificationPenalty;
@property (nonatomic) double diversificationPenaltyHalfLife;
@property (nonatomic) double featuredMultiplierForFreeUsers;
@property (nonatomic) double featuredMultiplierForTrialUsers;
@property (nonatomic) double featuredMultiplierForPaidUsers;
@property (nonatomic) double evergreenMultiplierForFreeUsers;
@property (nonatomic) double evergreenMultiplierForTrialUsers;
@property (nonatomic) double evergreenMultiplierForPaidUsers;
@property (nonatomic) double firstPassHalfLifeCoefficient;
@property (nonatomic) double firstPassEvergreenHalfLifeCoefficient;
@property (nonatomic) double firstPassDiversificationPenalty;
@property (nonatomic) double firstPassArticleFilter;
@property (nonatomic) double globalScoreCoefficientFree;
@property (nonatomic) double globalScoreCoefficientPaid;
@property (nonatomic) double globalScoreCoefficientHalfLife;
@property (nonatomic) double globalScoreCoefficientInitialMultiplier;
@property (nonatomic) double headlineSeenPenalty;
@property (nonatomic) double halfLifeCoefficient;
@property (nonatomic) double evergreenHalfLifeCoefficient;
@property (nonatomic) double mutedVoteCoefficient;
@property (nonatomic) double personalizationCoefficient;
@property (nonatomic) double publisherAggregateWeight;
@property (nonatomic) double sparseTagsPenalty;
@property (nonatomic) double subscribedChannelScoreCoefficient;
@property (nonatomic) double subscribedTopicsScoreCoefficient;
@property (retain, nonatomic) FCPersonalizationCohortConfig *userCohort;

- (id)initWithConfigDictionary:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithConfigDictionary:(id)a0 defaultConfig:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithArticleLengthAggregateWeight:(double)a0 articleReadPenalty:(double)a1 audioMultiplierForFreeUsers:(double)a2 audioMultiplierForTrialUsers:(double)a3 audioMultiplierForPaidUsers:(double)a4 autofavoritedVoteCoefficient:(double)a5 baselineRatePrior:(double)a6 bundleFreeMultiplierForFreeUsers:(double)a7 bundleFreeMultiplierForTrialUsers:(double)a8 bundleFreeMultiplierForPaidUsers:(double)a9 bundlePaidMultiplierForFreeUsers:(double)a10 bundlePaidMultiplierForTrialUsers:(double)a11 bundlePaidMultiplierForPaidUsers:(double)a12 channelTopicDiversificationInitialPenalty:(double)a13 channelTopicDiversificationPenalty:(double)a14 channelTopicDiversificationPenaltyHalfLife:(double)a15 conversionCoefficientForFreeUsers:(double)a16 conversionCoefficientForTrialUsers:(double)a17 conversionCoefficientForPaidUsers:(double)a18 conversionCohort:(id)a19 ctrWithOneAutofavorited:(double)a20 ctrWithOneSubscribed:(double)a21 ctrWithSubscribedChannel:(double)a22 ctrWithThreeAutofavorited:(double)a23 ctrWithThreeSubscribed:(double)a24 ctrWithTwoAutofavorited:(double)a25 ctrWithTwoSubscribed:(double)a26 ctrWithZeroAutofavorited:(double)a27 ctrWithZeroSubscribed:(double)a28 decayFactor:(double)a29 democratizationFactor:(double)a30 diversificationInitialPenalty:(double)a31 diversificationPenalty:(double)a32 diversificationPenaltyHalfLife:(double)a33 featuredMultiplierForFreeUsers:(double)a34 featuredMultiplierForTrialUsers:(double)a35 featuredMultiplierForPaidUsers:(double)a36 evergreenMultiplierForFreeUsers:(double)a37 evergreenMultiplierForTrialUsers:(double)a38 evergreenMultiplierForPaidUsers:(double)a39 firstPassHalfLifeCoefficient:(double)a40 firstPassEvergreenHalfLifeCoefficient:(double)a41 firstPassDiversificationPenalty:(double)a42 firstPassArticleFilter:(double)a43 globalScoreCoefficientFree:(double)a44 globalScoreCoefficientPaid:(double)a45 globalScoreCoefficientHalfLife:(double)a46 globalScoreCoefficientInitialMultiplier:(double)a47 headlineSeenPenalty:(double)a48 halfLifeCoefficient:(double)a49 evergreenHalfLifeCoefficient:(double)a50 mutedVoteCoefficient:(double)a51 personalizationCoefficient:(double)a52 publisherAggregateWeight:(double)a53 sparseTagsPenalty:(double)a54 subscribedChannelScoreCoefficient:(double)a55 subscribedTopicsScoreCoefficient:(double)a56 userCohort:(id)a57;

@end
