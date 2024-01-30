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
- (BOOL)hasObjectiveFeatures;
- (float)featuresValueAtIndex:(unsigned long long)a0;
- (unsigned long long)featuresLength;

@end
