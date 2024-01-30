@class NSMutableArray;

@interface NNMKProtoCoalescedBatchedFetchResult : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *fetchResults;

+ (Class)fetchResultsType;

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
- (void)addFetchResults:(id)a0;
- (unsigned long long)fetchResultsCount;
- (void)clearFetchResults;
- (id)fetchResultsAtIndex:(unsigned long long)a0;

@end
