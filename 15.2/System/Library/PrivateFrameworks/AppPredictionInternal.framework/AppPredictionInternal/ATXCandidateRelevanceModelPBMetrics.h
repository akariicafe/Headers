@class NSMutableArray, ATXCandidateRelevanceModelPBEvaluationMetrics, ATXCandidateRelevanceModelPBModelMetrics;

@interface ATXCandidateRelevanceModelPBMetrics : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasModelMetrics;
@property (retain, nonatomic) ATXCandidateRelevanceModelPBModelMetrics *modelMetrics;
@property (readonly, nonatomic) BOOL hasEvaluationMetricsOneWeekAgo;
@property (retain, nonatomic) ATXCandidateRelevanceModelPBEvaluationMetrics *evaluationMetricsOneWeekAgo;
@property (readonly, nonatomic) BOOL hasEvaluationMetricsTwoWeeksAgo;
@property (retain, nonatomic) ATXCandidateRelevanceModelPBEvaluationMetrics *evaluationMetricsTwoWeeksAgo;
@property (readonly, nonatomic) BOOL hasEvaluationMetricsThreeWeeksAgo;
@property (retain, nonatomic) ATXCandidateRelevanceModelPBEvaluationMetrics *evaluationMetricsThreeWeeksAgo;
@property (readonly, nonatomic) BOOL hasEvaluationMetricsFourWeeksAgo;
@property (retain, nonatomic) ATXCandidateRelevanceModelPBEvaluationMetrics *evaluationMetricsFourWeeksAgo;
@property (readonly, nonatomic) BOOL hasEvaluationMetricsLastFourWeeks;
@property (retain, nonatomic) ATXCandidateRelevanceModelPBEvaluationMetrics *evaluationMetricsLastFourWeeks;
@property (retain, nonatomic) NSMutableArray *candidateMetrics;

+ (Class)candidateMetricsType;

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
- (void)addCandidateMetrics:(id)a0;
- (unsigned long long)candidateMetricsCount;
- (void)clearCandidateMetrics;
- (id)candidateMetricsAtIndex:(unsigned long long)a0;

@end
