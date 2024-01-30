@class AWDProactiveModelFittingMinibatchStats, AWDProactiveModelFittingQuantizedSparseMatrix, AWDProactiveModelFittingModelInfo, AWDProactiveModelFittingSparseFloatMatrix;

@interface AWDProactiveModelFittingLinRegFeatureMatrix : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char featureMatrixL2norm : 1; unsigned char featureMatrixScaleFactor : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) BOOL hasModelInfo;
@property (retain, nonatomic) AWDProactiveModelFittingModelInfo *modelInfo;
@property (readonly, nonatomic) BOOL hasSparseFloatFeatureMatrix;
@property (retain, nonatomic) AWDProactiveModelFittingSparseFloatMatrix *sparseFloatFeatureMatrix;
@property (readonly, nonatomic) BOOL hasMinibatchStats;
@property (retain, nonatomic) AWDProactiveModelFittingMinibatchStats *minibatchStats;
@property (readonly, nonatomic) BOOL hasSparseQuantizedFeatureMatrix;
@property (retain, nonatomic) AWDProactiveModelFittingQuantizedSparseMatrix *sparseQuantizedFeatureMatrix;
@property (nonatomic) BOOL hasFeatureMatrixScaleFactor;
@property (nonatomic) float featureMatrixScaleFactor;
@property (nonatomic) BOOL hasFeatureMatrixL2norm;
@property (nonatomic) float featureMatrixL2norm;

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
- (float)featureMatrixValueAtRow:(unsigned long long)a0 column:(unsigned long long)a1;
- (BOOL)hasFeatureMatrix;

@end
