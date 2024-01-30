@class NSString;

@interface ATXCandidateRelevanceModelPBModelMetrics : PBCodable <NSCopying> {
    struct { unsigned char avgNumberOfModelWeights : 1; unsigned char avgNumberOfNonZeroModelWeights : 1; unsigned char learningRate : 1; unsigned char logisticRegressionRegularizationL1Ratio : 1; unsigned char logisticRegressionRegularizationRate : 1; unsigned char minIterations : 1; unsigned char modelAgeInDays : 1; unsigned char numberOfCandidateModels : 1; unsigned char stoppingThreshold : 1; unsigned char trainDataNumberOfCandidates : 1; unsigned char trainDataNumberOfDaysWithPositiveSamples : 1; unsigned char trainDataNumberOfPositiveSamples : 1; unsigned char trainDataNumberOfSamples : 1; unsigned char hasDefaultHyperParams : 1; unsigned char hasTrainedModel : 1; unsigned char pipelineEnabled : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasBlendingABGroup;
@property (retain, nonatomic) NSString *blendingABGroup;
@property (readonly, nonatomic) BOOL hasAbGroup;
@property (retain, nonatomic) NSString *abGroup;
@property (readonly, nonatomic) BOOL hasClientModelId;
@property (retain, nonatomic) NSString *clientModelId;
@property (nonatomic) BOOL hasPipelineEnabled;
@property (nonatomic) BOOL pipelineEnabled;
@property (nonatomic) BOOL hasHasTrainedModel;
@property (nonatomic) BOOL hasTrainedModel;
@property (nonatomic) BOOL hasHasDefaultHyperParams;
@property (nonatomic) BOOL hasDefaultHyperParams;
@property (readonly, nonatomic) BOOL hasModelType;
@property (retain, nonatomic) NSString *modelType;
@property (nonatomic) BOOL hasAvgNumberOfModelWeights;
@property (nonatomic) unsigned int avgNumberOfModelWeights;
@property (nonatomic) BOOL hasAvgNumberOfNonZeroModelWeights;
@property (nonatomic) unsigned int avgNumberOfNonZeroModelWeights;
@property (nonatomic) BOOL hasNumberOfCandidateModels;
@property (nonatomic) unsigned int numberOfCandidateModels;
@property (readonly, nonatomic) BOOL hasLogisticRegressionRegularizationStrategy;
@property (retain, nonatomic) NSString *logisticRegressionRegularizationStrategy;
@property (nonatomic) BOOL hasLogisticRegressionRegularizationRate;
@property (nonatomic) float logisticRegressionRegularizationRate;
@property (nonatomic) BOOL hasLogisticRegressionRegularizationL1Ratio;
@property (nonatomic) float logisticRegressionRegularizationL1Ratio;
@property (nonatomic) BOOL hasLearningRate;
@property (nonatomic) float learningRate;
@property (nonatomic) BOOL hasMinIterations;
@property (nonatomic) unsigned int minIterations;
@property (nonatomic) BOOL hasStoppingThreshold;
@property (nonatomic) float stoppingThreshold;
@property (nonatomic) BOOL hasTrainDataNumberOfPositiveSamples;
@property (nonatomic) unsigned int trainDataNumberOfPositiveSamples;
@property (nonatomic) BOOL hasTrainDataNumberOfSamples;
@property (nonatomic) unsigned int trainDataNumberOfSamples;
@property (nonatomic) BOOL hasTrainDataNumberOfDaysWithPositiveSamples;
@property (nonatomic) unsigned int trainDataNumberOfDaysWithPositiveSamples;
@property (nonatomic) BOOL hasTrainDataNumberOfCandidates;
@property (nonatomic) unsigned int trainDataNumberOfCandidates;
@property (readonly, nonatomic) BOOL hasExecutableType;
@property (retain, nonatomic) NSString *executableType;
@property (nonatomic) BOOL hasModelAgeInDays;
@property (nonatomic) unsigned int modelAgeInDays;

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

@end
