@class NSData, NSMutableArray;

@interface FCCKPQueryRetrieveResponse : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *queryResults;
@property (readonly, nonatomic) BOOL hasContinuationMarker;
@property (retain, nonatomic) NSData *continuationMarker;

+ (Class)queryResultsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (void)dealloc;
- (void)clearQueryResults;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (unsigned long long)queryResultsCount;
- (id)description;
- (void)addQueryResults:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)queryResultsAtIndex:(unsigned long long)a0;

@end
