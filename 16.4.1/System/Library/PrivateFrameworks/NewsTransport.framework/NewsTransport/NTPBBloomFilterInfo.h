@class NSData;

@interface NTPBBloomFilterInfo : PBCodable <NSCopying>

@property (retain, nonatomic) NSData *bloomFilterData;
@property (nonatomic) int hashFunctionCount;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
