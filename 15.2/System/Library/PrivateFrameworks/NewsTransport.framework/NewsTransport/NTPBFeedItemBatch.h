@class NSMutableArray;

@interface NTPBFeedItemBatch : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *feedItems;

+ (Class)feedItemsType;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (id)dictionaryRepresentation;
- (void)addFeedItems:(id)a0;
- (void)clearFeedItems;
- (unsigned long long)feedItemsCount;
- (id)feedItemsAtIndex:(unsigned long long)a0;

@end
