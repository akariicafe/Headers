@class AWDProactiveModelFittingSparseFloatVector, AWDProactiveModelFittingMinibatchStats, AWDProactiveModelFittingQuantizedSparseVector, AWDProactiveModelFittingModelInfo;

@interface AWDProactiveModelFittingLinRegObjectiveFeatures : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char featuresL2norm : 1; unsigned char featuresScaleFactor : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) BOOL hasModelInfo;
@property (retain, nonatomic) AWDProactiveModelFittingModelInfo *modelInfo;
@property (readonly, nonatomic) BOOL hasSparseFloatFeatures;
@property (retain, nonatomic) AWDProactiveModelFittingSparseFloatVector *sparseFloatFeatures;
@property (readonly, nonatomic) BOOL hasMinibatchStats;
@property (retain, nonatomic) AWDProactiveModelFittingMinibatchStats *minibatchStats;
@property (readonly, nonatomic) BOOL hasSparseQuantizedFeatures;
@property (retain, nonatomic) AWDProactiveModelFittingQuantizedSparseVector *sparseQuantizedFeatures;
@property (nonatomic) BOOL hasFeaturesScaleFactor;
@property (nonatomic) float featuresScaleFactor;
@property (nonatomic) BOOL hasFeaturesL2norm;
@property (nonatomic) float featuresL2norm;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)hasObjectiveFeatures;
- (float)featuresValueAtIndex:(unsigned long long)a0;
- (unsigned long long)featuresLength;

@end
