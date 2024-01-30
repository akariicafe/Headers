@class NSMutableArray;

@interface CPLRampingRequest : PBRequest <NSCopying>

@property (retain, nonatomic) NSMutableArray *requests;

+ (Class)requestType;

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
- (unsigned long long)requestsCount;
- (void)clearRequests;
- (id)requestAtIndex:(unsigned long long)a0;
- (void)addRequest:(id)a0;

@end
