@class NSMutableArray;

@interface NTPBWrappingKeyRequest : PBRequest <NSCopying>

@property (retain, nonatomic) NSMutableArray *wrappingKeyIds;

+ (Class)wrappingKeyIdsType;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (void)addWrappingKeyIds:(id)a0;
- (void)clearWrappingKeyIds;
- (unsigned long long)wrappingKeyIdsCount;
- (id)wrappingKeyIdsAtIndex:(unsigned long long)a0;

@end
