@class NSMutableArray;

@interface SPProtoCacheAssets : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *assets;

+ (Class)assetsType;

- (id)assetsAtIndex:(unsigned long long)a0;
- (void)addAssets:(id)a0;
- (unsigned long long)assetsCount;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)clearAssets;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
