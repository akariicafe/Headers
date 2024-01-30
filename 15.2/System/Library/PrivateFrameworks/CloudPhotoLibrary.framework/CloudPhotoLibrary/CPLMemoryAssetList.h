@class NSMutableArray;

@interface CPLMemoryAssetList : PBCodable <NSCopying> {
    struct { unsigned char version : 1; } _has;
}

@property (retain, nonatomic) NSMutableArray *assets;
@property (nonatomic) BOOL hasVersion;
@property (nonatomic) unsigned int version;

+ (Class)assetType;

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
- (void)addAsset:(id)a0;
- (id)dictionaryRepresentation;
- (id)assetAtIndex:(unsigned long long)a0;

@end
