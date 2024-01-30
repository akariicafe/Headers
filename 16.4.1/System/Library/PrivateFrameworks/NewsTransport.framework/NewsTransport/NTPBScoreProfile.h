@class NTPBScoreProfileDebug, NSMutableArray;

@interface NTPBScoreProfile : PBCodable <NSCopying> {
    struct { unsigned char agedPersonalizationScore : 1; unsigned char autoSubscribeCtr : 1; unsigned char computedGlobalScoreCoefficient : 1; unsigned char conversionMultiplier : 1; unsigned char dampenedStaticMultiplier : 1; unsigned char diversifiedPersonalizationScore : 1; unsigned char featureCtr : 1; unsigned char firstPassPersonalizationScore : 1; unsigned char paidNonpaidSubscriptionCtr : 1; unsigned char personalizationScore : 1; unsigned char qualitativeMultiplier : 1; unsigned char rawPersonalizationScore : 1; unsigned char rawUserFeedbackScore : 1; unsigned char staticMultiplier : 1; unsigned char subscribedChannelCtr : 1; unsigned char userFeedbackScore : 1; } _has;
}

@property (nonatomic) BOOL hasFeatureCtr;
@property (nonatomic) double featureCtr;
@property (nonatomic) BOOL hasSubscribedChannelCtr;
@property (nonatomic) double subscribedChannelCtr;
@property (nonatomic) BOOL hasPaidNonpaidSubscriptionCtr;
@property (nonatomic) double paidNonpaidSubscriptionCtr;
@property (nonatomic) BOOL hasAutoSubscribeCtr;
@property (nonatomic) double autoSubscribeCtr;
@property (nonatomic) BOOL hasComputedGlobalScoreCoefficient;
@property (nonatomic) double computedGlobalScoreCoefficient;
@property (nonatomic) BOOL hasUserFeedbackScore;
@property (nonatomic) double userFeedbackScore;
@property (nonatomic) BOOL hasRawUserFeedbackScore;
@property (nonatomic) double rawUserFeedbackScore;
@property (nonatomic) BOOL hasRawPersonalizationScore;
@property (nonatomic) double rawPersonalizationScore;
@property (nonatomic) BOOL hasPersonalizationScore;
@property (nonatomic) double personalizationScore;
@property (nonatomic) BOOL hasFirstPassPersonalizationScore;
@property (nonatomic) double firstPassPersonalizationScore;
@property (nonatomic) BOOL hasAgedPersonalizationScore;
@property (nonatomic) double agedPersonalizationScore;
@property (nonatomic) BOOL hasDiversifiedPersonalizationScore;
@property (nonatomic) double diversifiedPersonalizationScore;
@property (nonatomic) BOOL hasConversionMultiplier;
@property (nonatomic) double conversionMultiplier;
@property (nonatomic) BOOL hasDampenedStaticMultiplier;
@property (nonatomic) double dampenedStaticMultiplier;
@property (nonatomic) BOOL hasStaticMultiplier;
@property (nonatomic) double staticMultiplier;
@property (nonatomic) BOOL hasQualitativeMultiplier;
@property (nonatomic) double qualitativeMultiplier;
@property (retain, nonatomic) NSMutableArray *cohortMemberships;
@property (readonly, nonatomic) BOOL hasDebugFields;
@property (retain, nonatomic) NTPBScoreProfileDebug *debugFields;

+ (Class)cohortMembershipsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)dealloc;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)addCohortMemberships:(id)a0;
- (void)clearCohortMemberships;
- (id)cohortMembershipsAtIndex:(unsigned long long)a0;
- (unsigned long long)cohortMembershipsCount;

@end
