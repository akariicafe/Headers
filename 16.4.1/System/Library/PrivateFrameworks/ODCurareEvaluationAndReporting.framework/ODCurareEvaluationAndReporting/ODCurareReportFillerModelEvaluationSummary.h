@class NSString, NSMutableArray, ODCurareReportFillerDataSet;

@interface ODCurareReportFillerModelEvaluationSummary : PBCodable <NSCopying>

@property (retain, nonatomic) NSString *modelName;
@property (retain, nonatomic) NSString *evaluationDate;
@property (retain, nonatomic) NSMutableArray *modelEvaluationResults;
@property (readonly, nonatomic) BOOL hasDataUsedToEvaluateModel;
@property (retain, nonatomic) ODCurareReportFillerDataSet *dataUsedToEvaluateModel;

+ (Class)modelEvaluationResultsType;

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
- (void)addModelEvaluationResults:(id)a0;
- (void)clearModelEvaluationResults;
- (id)modelEvaluationResultsAtIndex:(unsigned long long)a0;
- (unsigned long long)modelEvaluationResultsCount;

@end
