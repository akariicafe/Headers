@class NSData, NSMutableArray;

@interface CKDPQueryRetrieveResponse : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *queryResults;
@property (readonly, nonatomic) BOOL hasContinuationMarker;
@property (retain, nonatomic) NSData *continuationMarker;

+ (Class)queryResultsType;

- (void)addQueryResults:(id)a0;
- (void)clearQueryResults;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)queryResultsCount;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)queryResultsAtIndex:(unsigned long long)a0;
- (id)dictionaryRepresentation;

@end
