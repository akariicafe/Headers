@class NSString;

@interface ATXMPBAnchorModelEngagementTracker : PBCodable <NSCopying> {
    struct { unsigned char anchorPopularity : 1; unsigned char classConditionalProbability : 1; unsigned char globalPopularity : 1; unsigned char posteriorProbability : 1; unsigned char score : 1; unsigned char standardDeviationOfOffsetFromAnchor : 1; unsigned char engagementType : 1; unsigned char numPredictionsforAnchor : 1; unsigned char numUniqueOccurrencesAfterAnchor : 1; unsigned char secondsAfterAnchor : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasAnchorType;
@property (retain, nonatomic) NSString *anchorType;
@property (nonatomic) BOOL hasScore;
@property (nonatomic) double score;
@property (readonly, nonatomic) BOOL hasCandidateType;
@property (retain, nonatomic) NSString *candidateType;
@property (nonatomic) BOOL hasSecondsAfterAnchor;
@property (nonatomic) unsigned int secondsAfterAnchor;
@property (nonatomic) BOOL hasNumPredictionsforAnchor;
@property (nonatomic) unsigned int numPredictionsforAnchor;
@property (nonatomic) BOOL hasEngagementType;
@property (nonatomic) int engagementType;
@property (readonly, nonatomic) BOOL hasConsumerSubType;
@property (retain, nonatomic) NSString *consumerSubType;
@property (readonly, nonatomic) BOOL hasAbGroup;
@property (retain, nonatomic) NSString *abGroup;
@property (readonly, nonatomic) BOOL hasExecutableObject;
@property (retain, nonatomic) NSString *executableObject;
@property (nonatomic) BOOL hasPosteriorProbability;
@property (nonatomic) double posteriorProbability;
@property (nonatomic) BOOL hasClassConditionalProbability;
@property (nonatomic) double classConditionalProbability;
@property (nonatomic) BOOL hasStandardDeviationOfOffsetFromAnchor;
@property (nonatomic) double standardDeviationOfOffsetFromAnchor;
@property (nonatomic) BOOL hasNumUniqueOccurrencesAfterAnchor;
@property (nonatomic) unsigned int numUniqueOccurrencesAfterAnchor;
@property (nonatomic) BOOL hasAnchorPopularity;
@property (nonatomic) double anchorPopularity;
@property (nonatomic) BOOL hasGlobalPopularity;
@property (nonatomic) double globalPopularity;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (int)StringAsEngagementType:(id)a0;
- (id)engagementTypeAsString:(int)a0;

@end
