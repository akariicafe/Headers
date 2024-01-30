@class NSArray, NTPBScoreProfile, NTPBScoreProfileDebug;

@interface FCFeedPersonalizedItemScoreProfile : NSObject

@property (nonatomic) double featureCtr;
@property (nonatomic) double subscribedChannelCtr;
@property (nonatomic) double paidNonpaidSubscriptionCtr;
@property (nonatomic) double autoSubscribeCtr;
@property (nonatomic) double computedGlobalScoreCoefficient;
@property (nonatomic) double userFeedbackScore;
@property (nonatomic) double rawUserFeedbackScore;
@property (nonatomic) double rawPersonalizationScore;
@property (nonatomic) double personalizationScore;
@property (nonatomic) double firstPassPersonalizationScore;
@property (nonatomic) double agedPersonalizationScore;
@property (nonatomic) double diversifiedPersonalizationScore;
@property (nonatomic) double conversionMultiplier;
@property (nonatomic) double dampenedStaticMultiplier;
@property (nonatomic) double staticMultiplier;
@property (nonatomic) double qualitativeMultiplier;
@property (retain, nonatomic) NSArray *cohortMemberships;
@property (retain, nonatomic) NTPBScoreProfile *pbScoreProfile;
@property (retain, nonatomic) NTPBScoreProfileDebug *debugFields;

- (id)forwardingTargetForSelector:(SEL)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)initWithPBScoreProfile:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)a0;

@end
