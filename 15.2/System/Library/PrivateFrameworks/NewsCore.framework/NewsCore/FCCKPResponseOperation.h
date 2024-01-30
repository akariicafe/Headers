@class FCCKPResponseOperationResult, FCCKPRecordRetrieveResponse, FCCKPQueryRetrieveResponse, FCCKPOperation;

@interface FCCKPResponseOperation : PBCodable <NSCopying> {
    unsigned int _operationCost;
    FCCKPQueryRetrieveResponse *_queryRetrieveResponse;
    FCCKPRecordRetrieveResponse *_recordRetrieveResponse;
    FCCKPOperation *_response;
    FCCKPResponseOperationResult *_result;
    struct { unsigned char operationCost : 1; } _has;
}

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
