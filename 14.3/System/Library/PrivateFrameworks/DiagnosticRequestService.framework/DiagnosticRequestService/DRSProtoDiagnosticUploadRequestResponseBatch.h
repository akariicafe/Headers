@class NSString, NSMutableArray;

@interface DRSProtoDiagnosticUploadRequestResponseBatch : PBCodable <CKCodeOperationMessageMutation, NSCopying>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSMutableArray *decisionResults;

+ (Class)decisionResultsType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)addDecisionResults:(id)a0;
- (unsigned long long)decisionResultsCount;
- (void)clearDecisionResults;
- (id)decisionResultsAtIndex:(unsigned long long)a0;

@end
