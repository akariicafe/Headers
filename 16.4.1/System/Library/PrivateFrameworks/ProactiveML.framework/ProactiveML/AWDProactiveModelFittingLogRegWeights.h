@class AWDProactiveModelFittingSparseFloatVector, AWDProactiveModelFittingMinibatchStats, AWDProactiveModelFittingQuantizedSparseVector, AWDProactiveModelFittingModelInfo, AWDProactiveModelFittingEvalMetrics, AWDProactiveModelFittingQuantizedDenseVector;

@interface AWDProactiveModelFittingLogRegWeights : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char weightsL2norm : 1; unsigned char weightsScaleFactor : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) BOOL hasModelInfo;
@property (retain, nonatomic) AWDProactiveModelFittingModelInfo *modelInfo;
@property (readonly, nonatomic) BOOL hasSparseFloatWeights;
@property (retain, nonatomic) AWDProactiveModelFittingSparseFloatVector *sparseFloatWeights;
@property (readonly, nonatomic) BOOL hasMinibatchStats;
@property (retain, nonatomic) AWDProactiveModelFittingMinibatchStats *minibatchStats;
@property (readonly, nonatomic) BOOL hasEvaluationMetrics;
@property (retain, nonatomic) AWDProactiveModelFittingEvalMetrics *evaluationMetrics;
@property (readonly, nonatomic) BOOL hasSparseQuantizedWeights;
@property (retain, nonatomic) AWDProactiveModelFittingQuantizedSparseVector *sparseQuantizedWeights;
@property (nonatomic) BOOL hasWeightsScaleFactor;
@property (nonatomic) float weightsScaleFactor;
@property (nonatomic) BOOL hasWeightsL2norm;
@property (nonatomic) float weightsL2norm;
@property (readonly, nonatomic) BOOL hasDenseQuantizedWeights;
@property (retain, nonatomic) AWDProactiveModelFittingQuantizedDenseVector *denseQuantizedWeights;

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
- (BOOL)hasWeights;

@end
