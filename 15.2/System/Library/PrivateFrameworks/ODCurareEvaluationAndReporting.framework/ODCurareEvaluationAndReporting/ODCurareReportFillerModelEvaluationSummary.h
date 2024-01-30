@class NSString, NSMutableArray, ODCurareReportFillerDataSet;

@interface ODCurareReportFillerModelEvaluationSummary : PBCodable <NSCopying>

@property (retain, nonatomic) NSString *modelName;
@property (retain, nonatomic) NSString *evaluationDate;
@property (retain, nonatomic) NSMutableArray *modelEvaluationResults;
@property (readonly, nonatomic) BOOL hasDataUsedToEvaluateModel;
@property (retain, nonatomic) ODCurareReportFillerDataSet *dataUsedToEvaluateModel;

+ (Class)modelEvaluationResultsType;

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
- (void)addModelEvaluationResults:(id)a0;
- (unsigned long long)modelEvaluationResultsCount;
- (void)clearModelEvaluationResults;
- (id)modelEvaluationResultsAtIndex:(unsigned long long)a0;

@end
