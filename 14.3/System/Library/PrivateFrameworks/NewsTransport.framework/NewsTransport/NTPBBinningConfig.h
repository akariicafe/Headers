@interface NTPBBinningConfig : PBCodable <NSCopying> {
    struct { unsigned char decreaseConsumptionThreshold : 1; unsigned char evaluationFrequency : 1; unsigned char historyLength : 1; unsigned char increaseConsumptionThreshold : 1; unsigned char minimumArticleCount : 1; unsigned char defaultChannelBin : 1; unsigned char defaultTopicBin : 1; unsigned char enabled : 1; } _has;
}

@property (nonatomic) BOOL hasEnabled;
@property (nonatomic) BOOL enabled;
@property (nonatomic) BOOL hasEvaluationFrequency;
@property (nonatomic) long long evaluationFrequency;
@property (nonatomic) BOOL hasHistoryLength;
@property (nonatomic) long long historyLength;
@property (nonatomic) BOOL hasIncreaseConsumptionThreshold;
@property (nonatomic) double increaseConsumptionThreshold;
@property (nonatomic) BOOL hasDecreaseConsumptionThreshold;
@property (nonatomic) double decreaseConsumptionThreshold;
@property (nonatomic) BOOL hasMinimumArticleCount;
@property (nonatomic) long long minimumArticleCount;
@property (nonatomic) BOOL hasDefaultTopicBin;
@property (nonatomic) int defaultTopicBin;
@property (nonatomic) BOOL hasDefaultChannelBin;
@property (nonatomic) int defaultChannelBin;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
