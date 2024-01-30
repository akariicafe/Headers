@class NSString, NSMutableArray;

@interface ODCurareReportFillerReport : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *modelInformationLists;
@property (retain, nonatomic) NSMutableArray *metadataLists;
@property (retain, nonatomic) NSMutableArray *modelEvaluationSummaries;
@property (retain, nonatomic) NSMutableArray *personalizationEvaluationSummaries;
@property (nonatomic) BOOL frameworkFailure;
@property (retain, nonatomic) NSString *bundleIdentifier;

+ (Class)modelInformationListType;
+ (Class)metadataListType;
+ (Class)modelEvaluationSummariesType;
+ (Class)personalizationEvaluationSummariesType;

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
- (void)addModelInformationList:(id)a0;
- (void)addMetadataList:(id)a0;
- (void)addModelEvaluationSummaries:(id)a0;
- (void)addPersonalizationEvaluationSummaries:(id)a0;
- (unsigned long long)modelInformationListsCount;
- (void)clearModelInformationLists;
- (id)modelInformationListAtIndex:(unsigned long long)a0;
- (unsigned long long)metadataListsCount;
- (void)clearMetadataLists;
- (id)metadataListAtIndex:(unsigned long long)a0;
- (unsigned long long)modelEvaluationSummariesCount;
- (void)clearModelEvaluationSummaries;
- (id)modelEvaluationSummariesAtIndex:(unsigned long long)a0;
- (unsigned long long)personalizationEvaluationSummariesCount;
- (void)clearPersonalizationEvaluationSummaries;
- (id)personalizationEvaluationSummariesAtIndex:(unsigned long long)a0;

@end
