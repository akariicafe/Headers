@interface AWDProactiveModelFittingEvalMetrics : PBCodable <NSCopying> {
    struct { float *list; unsigned long long count; unsigned long long size; } _negativeScores;
    struct { float *list; unsigned long long count; unsigned long long size; } _positiveScores;
    struct { unsigned char falseNegatives : 1; unsigned char falsePositives : 1; unsigned char trueNegatives : 1; unsigned char truePositives : 1; unsigned char f1 : 1; unsigned char rmse : 1; unsigned char secsToExecute : 1; } _has;
}

@property (nonatomic) BOOL hasRmse;
@property (nonatomic) float rmse;
@property (nonatomic) BOOL hasF1;
@property (nonatomic) float f1;
@property (nonatomic) BOOL hasTruePositives;
@property (nonatomic) unsigned long long truePositives;
@property (nonatomic) BOOL hasTrueNegatives;
@property (nonatomic) unsigned long long trueNegatives;
@property (nonatomic) BOOL hasFalsePositives;
@property (nonatomic) unsigned long long falsePositives;
@property (nonatomic) BOOL hasFalseNegatives;
@property (nonatomic) unsigned long long falseNegatives;
@property (readonly, nonatomic) unsigned long long positiveScoresCount;
@property (readonly, nonatomic) float *positiveScores;
@property (readonly, nonatomic) unsigned long long negativeScoresCount;
@property (readonly, nonatomic) float *negativeScores;
@property (nonatomic) BOOL hasSecsToExecute;
@property (nonatomic) float secsToExecute;

+ (id)evalMetricsWithRmse:(float)a0 f1:(float)a1;
+ (id)evalMetricsWithRmse:(float)a0 f1:(float)a1 truePositives:(unsigned long long)a2 trueNegatives:(unsigned long long)a3 falsePositives:(unsigned long long)a4 falseNegatives:(unsigned long long)a5;

- (id)toDictionary;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)dealloc;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)addNegativeScores:(float)a0;
- (void)addPositiveScores:(float)a0;
- (void)clearNegativeScores;
- (void)clearPositiveScores;
- (float)negativeScoresAtIndex:(unsigned long long)a0;
- (float)positiveScoresAtIndex:(unsigned long long)a0;
- (void)setNegativeScores:(float *)a0 count:(unsigned long long)a1;
- (void)setPositiveScores:(float *)a0 count:(unsigned long long)a1;

@end
