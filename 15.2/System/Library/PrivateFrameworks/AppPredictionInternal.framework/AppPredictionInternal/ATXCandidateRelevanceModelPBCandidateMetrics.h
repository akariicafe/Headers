@class NSString;

@interface ATXCandidateRelevanceModelPBCandidateMetrics : PBCodable <NSCopying> {
    struct { unsigned char candidateNumberOfDaysWithPositiveSamples : 1; unsigned char candidateNumberOfModelWeights : 1; unsigned char candidateNumberOfNonZeroModelWeights : 1; unsigned char candidateNumberOfPositiveSamples : 1; unsigned char candidateNumberOfSamples : 1; unsigned char candidateShadowF1 : 1; unsigned char candidateShadowLaunchPercentage : 1; unsigned char candidateShadowPrecision : 1; unsigned char candidateShadowRecall : 1; unsigned char candidateShadowShownPercentage : 1; unsigned char candidateUIF1 : 1; unsigned char candidateUILaunchPercentage : 1; unsigned char candidateUIPrecision : 1; unsigned char candidateUIRecall : 1; unsigned char candidateUIShownPercentage : 1; } _has;
}

@property (nonatomic) BOOL hasCandidateNumberOfPositiveSamples;
@property (nonatomic) unsigned int candidateNumberOfPositiveSamples;
@property (nonatomic) BOOL hasCandidateNumberOfSamples;
@property (nonatomic) unsigned int candidateNumberOfSamples;
@property (nonatomic) BOOL hasCandidateNumberOfDaysWithPositiveSamples;
@property (nonatomic) unsigned int candidateNumberOfDaysWithPositiveSamples;
@property (nonatomic) BOOL hasCandidateNumberOfModelWeights;
@property (nonatomic) unsigned int candidateNumberOfModelWeights;
@property (nonatomic) BOOL hasCandidateNumberOfNonZeroModelWeights;
@property (nonatomic) unsigned int candidateNumberOfNonZeroModelWeights;
@property (nonatomic) BOOL hasCandidateShadowLaunchPercentage;
@property (nonatomic) float candidateShadowLaunchPercentage;
@property (nonatomic) BOOL hasCandidateShadowShownPercentage;
@property (nonatomic) float candidateShadowShownPercentage;
@property (nonatomic) BOOL hasCandidateShadowPrecision;
@property (nonatomic) float candidateShadowPrecision;
@property (nonatomic) BOOL hasCandidateShadowRecall;
@property (nonatomic) float candidateShadowRecall;
@property (nonatomic) BOOL hasCandidateShadowF1;
@property (nonatomic) float candidateShadowF1;
@property (nonatomic) BOOL hasCandidateUILaunchPercentage;
@property (nonatomic) float candidateUILaunchPercentage;
@property (nonatomic) BOOL hasCandidateUIShownPercentage;
@property (nonatomic) float candidateUIShownPercentage;
@property (nonatomic) BOOL hasCandidateUIPrecision;
@property (nonatomic) float candidateUIPrecision;
@property (nonatomic) BOOL hasCandidateUIRecall;
@property (nonatomic) float candidateUIRecall;
@property (nonatomic) BOOL hasCandidateUIF1;
@property (nonatomic) float candidateUIF1;
@property (readonly, nonatomic) BOOL hasCandidateIdentifier;
@property (retain, nonatomic) NSString *candidateIdentifier;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
