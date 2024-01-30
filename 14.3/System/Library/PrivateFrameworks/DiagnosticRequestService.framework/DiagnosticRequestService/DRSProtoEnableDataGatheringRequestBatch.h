@class DRSProtoClientDeviceMetadata, NSMutableArray, NSString;

@interface DRSProtoEnableDataGatheringRequestBatch : PBCodable <DRSDecisionServerBatchRequest, CKCodeOperationMessageMutation, NSCopying>

@property (readonly, nonatomic) BOOL hasClientMetadata;
@property (retain, nonatomic) DRSProtoClientDeviceMetadata *clientMetadata;
@property (retain, nonatomic) NSMutableArray *requests;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL hasClientMetadata;
@property (retain, nonatomic) DRSProtoClientDeviceMetadata *clientMetadata;
@property (retain, nonatomic) NSMutableArray *dataGatheringRequests;

+ (Class)dataGatheringRequestsType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)addDataGatheringRequests:(id)a0;
- (unsigned long long)dataGatheringRequestsCount;
- (void)clearDataGatheringRequests;
- (id)dataGatheringRequestsAtIndex:(unsigned long long)a0;

@end
