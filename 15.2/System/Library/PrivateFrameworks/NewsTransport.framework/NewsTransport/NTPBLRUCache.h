@class NSMutableArray;

@interface NTPBLRUCache : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *entries;

+ (Class)entriesType;

- (void)addEntries:(id)a0;
- (unsigned long long)entriesCount;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)clearEntries;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)entriesAtIndex:(unsigned long long)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (id)dictionaryRepresentation;

@end
