@class NSString, NSMutableArray;

@interface ODCurareReportFillerReport : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *modelInformationLists;
@property (retain, nonatomic) NSMutableArray *metadataLists;
@property (retain, nonatomic) NSMutableArray *modelEvaluationSummaries;
@property (retain, nonatomic) NSMutableArray *personalizationEvaluationSummaries;
@property (nonatomic) BOOL frameworkFailure;
@property (retain, nonatomic) NSString *bundleIdentifier;

+ (Class)metadataListType;
+ (Class)modelEvaluationSummariesType;
+ (Class)modelInformationListType;
+ (Class)personalizationEvaluationSummariesType;

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
- (void)addMetadataList:(id)a0;
- (void)addModelEvaluationSummaries:(id)a0;
- (void)addModelInformationList:(id)a0;
- (void)addPersonalizationEvaluationSummaries:(id)a0;
- (void)clearMetadataLists;
- (void)clearModelEvaluationSummaries;
- (void)clearModelInformationLists;
- (void)clearPersonalizationEvaluationSummaries;
- (id)metadataListAtIndex:(unsigned long long)a0;
- (unsigned long long)metadataListsCount;
- (id)modelEvaluationSummariesAtIndex:(unsigned long long)a0;
- (unsigned long long)modelEvaluationSummariesCount;
- (id)modelInformationListAtIndex:(unsigned long long)a0;
- (unsigned long long)modelInformationListsCount;
- (id)personalizationEvaluationSummariesAtIndex:(unsigned long long)a0;
- (unsigned long long)personalizationEvaluationSummariesCount;

@end
