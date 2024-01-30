@class NSString, DRSProtoClientDeviceMetadata, NSMutableArray;

@interface DRSProtoDiagnosticRequestStatsBatch : PBCodable <CKCodeOperationMessageMutation, NSCopying>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL hasClientMetadata;
@property (retain, nonatomic) DRSProtoClientDeviceMetadata *clientMetadata;
@property (retain, nonatomic) NSMutableArray *requestsResultsStats;

+ (Class)requestsResultsStatsType;

- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (id)dictionaryRepresentation;
- (void)addRequestsResultsStats:(id)a0;
- (unsigned long long)requestsResultsStatsCount;
- (void)clearRequestsResultsStats;
- (id)requestsResultsStatsAtIndex:(unsigned long long)a0;

@end
