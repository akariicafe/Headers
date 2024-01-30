@class NSMutableArray;

@interface NTPBWrappingKeyResponse : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *wrappingKeyMapEntries;

+ (Class)wrappingKeyMapEntriesType;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (void)addWrappingKeyMapEntries:(id)a0;
- (void)clearWrappingKeyMapEntries;
- (unsigned long long)wrappingKeyMapEntriesCount;
- (id)wrappingKeyMapEntriesAtIndex:(unsigned long long)a0;

@end
