@class AWDProactiveModelFittingLogRegGradient, AWDProactiveModelFittingLinRegFeatureMatrix, AWDProactiveModelFittingEvaluation, AWDProactiveModelFittingLogRegWeights, AWDProactiveModelFittingLinRegObjectiveFeatures;

@interface AWDProactiveModelFittingParsecFeedbackEnvelope : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasEvaluation;
@property (retain, nonatomic) AWDProactiveModelFittingEvaluation *evaluation;
@property (readonly, nonatomic) BOOL hasLogRegWeights;
@property (retain, nonatomic) AWDProactiveModelFittingLogRegWeights *logRegWeights;
@property (readonly, nonatomic) BOOL hasLogRegGradient;
@property (retain, nonatomic) AWDProactiveModelFittingLogRegGradient *logRegGradient;
@property (readonly, nonatomic) BOOL hasLinRegFeatureMatrix;
@property (retain, nonatomic) AWDProactiveModelFittingLinRegFeatureMatrix *linRegFeatureMatrix;
@property (readonly, nonatomic) BOOL hasLinRegObjectiveFeatures;
@property (retain, nonatomic) AWDProactiveModelFittingLinRegObjectiveFeatures *linRegObjectiveFeatures;

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

@end
