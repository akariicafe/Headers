@class NSMutableArray;

@interface NNMKProtoFetchBatchRequest : PBRequest <NSCopying> {
    struct { unsigned char fullSyncVersion : 1; unsigned char wantsBatchedResponse : 1; } _has;
}

@property (nonatomic) BOOL hasFullSyncVersion;
@property (nonatomic) unsigned int fullSyncVersion;
@property (retain, nonatomic) NSMutableArray *fetchRequests;
@property (nonatomic) BOOL hasWantsBatchedResponse;
@property (nonatomic) BOOL wantsBatchedResponse;

+ (Class)fetchRequestType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)addFetchRequest:(id)a0;
- (unsigned long long)fetchRequestsCount;
- (void)clearFetchRequests;
- (id)fetchRequestAtIndex:(unsigned long long)a0;

@end
