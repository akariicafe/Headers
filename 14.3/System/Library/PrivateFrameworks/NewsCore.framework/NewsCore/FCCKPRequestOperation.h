@class FCCKPQueryRetrieveRequest, FCCKPRecordRetrieveRequest, FCCKPRequestOperationHeader, FCCKPOperation;

@interface FCCKPRequestOperation : PBCodable <NSCopying> {
    FCCKPQueryRetrieveRequest *_queryRetrieveRequest;
    FCCKPRecordRetrieveRequest *_recordRetrieveRequest;
}

@property (readonly, nonatomic) BOOL hasRecordRetrieveRequest;
@property (retain, nonatomic) FCCKPRecordRetrieveRequest *recordRetrieveRequest;
@property (readonly, nonatomic) BOOL hasQueryRetrieveRequest;
@property (retain, nonatomic) FCCKPQueryRetrieveRequest *queryRetrieveRequest;
@property (readonly, nonatomic) BOOL hasHeader;
@property (retain, nonatomic) FCCKPRequestOperationHeader *header;
@property (readonly, nonatomic) BOOL hasRequest;
@property (retain, nonatomic) FCCKPOperation *request;

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
