@class NSMutableArray;

@interface NTPBLRUCache : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *entries;

+ (Class)entriesType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)dealloc;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)addEntries:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)clearEntries;
- (id)entriesAtIndex:(unsigned long long)a0;
- (unsigned long long)entriesCount;

@end
