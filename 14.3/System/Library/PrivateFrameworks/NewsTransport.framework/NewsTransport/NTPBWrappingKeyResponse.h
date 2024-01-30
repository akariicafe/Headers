@class NSMutableArray;

@interface NTPBWrappingKeyResponse : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *wrappingKeyMapEntries;

+ (Class)wrappingKeyMapEntriesType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)addWrappingKeyMapEntries:(id)a0;
- (void)clearWrappingKeyMapEntries;
- (unsigned long long)wrappingKeyMapEntriesCount;
- (id)wrappingKeyMapEntriesAtIndex:(unsigned long long)a0;

@end
