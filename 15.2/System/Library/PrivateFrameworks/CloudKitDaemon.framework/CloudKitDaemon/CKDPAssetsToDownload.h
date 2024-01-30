@class CKDPRequestedFields;

@interface CKDPAssetsToDownload : PBCodable <NSCopying> {
    struct { unsigned char allAssets : 1; } _has;
}

@property (nonatomic) BOOL hasAllAssets;
@property (nonatomic) BOOL allAssets;
@property (readonly, nonatomic) BOOL hasAssetFields;
@property (retain, nonatomic) CKDPRequestedFields *assetFields;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
