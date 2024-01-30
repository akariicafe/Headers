@class FCCKPResponseOperationResult, FCCKPRecordRetrieveResponse, FCCKPQueryRetrieveResponse, FCCKPOperation;

@interface FCCKPResponseOperation : PBCodable <NSCopying> {
    FCCKPQueryRetrieveResponse *_queryRetrieveResponse;
    FCCKPRecordRetrieveResponse *_recordRetrieveResponse;
    struct { unsigned char operationCost : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasRecordRetrieveResponse;
@property (retain, nonatomic) FCCKPRecordRetrieveResponse *recordRetrieveResponse;
@property (readonly, nonatomic) BOOL hasQueryRetrieveResponse;
@property (retain, nonatomic) FCCKPQueryRetrieveResponse *queryRetrieveResponse;
@property (nonatomic) BOOL hasOperationCost;
@property (nonatomic) unsigned int operationCost;
@property (readonly, nonatomic) BOOL hasResponse;
@property (retain, nonatomic) FCCKPOperation *response;
@property (readonly, nonatomic) BOOL hasResult;
@property (retain, nonatomic) FCCKPResponseOperationResult *result;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
