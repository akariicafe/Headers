@class NSMutableArray;

@interface SPProtoCacheAssets : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *assets;

+ (Class)assetsType;

- (unsigned long long)assetsCount;
- (void)addAssets:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearAssets;
- (id)assetsAtIndex:(unsigned long long)a0;

@end
