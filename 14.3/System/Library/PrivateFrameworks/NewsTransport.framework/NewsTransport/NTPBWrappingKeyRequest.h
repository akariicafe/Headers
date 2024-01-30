@class NSMutableArray;

@interface NTPBWrappingKeyRequest : PBRequest <NSCopying>

@property (retain, nonatomic) NSMutableArray *wrappingKeyIds;

+ (Class)wrappingKeyIdsType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)addWrappingKeyIds:(id)a0;
- (void)clearWrappingKeyIds;
- (unsigned long long)wrappingKeyIdsCount;
- (id)wrappingKeyIdsAtIndex:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
