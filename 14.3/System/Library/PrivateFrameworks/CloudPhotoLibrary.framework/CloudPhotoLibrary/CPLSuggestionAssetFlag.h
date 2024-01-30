@interface CPLSuggestionAssetFlag : PBCodable <NSCopying> {
    struct { unsigned char isKeyAsset : 1; unsigned char isRepresentative : 1; } _has;
}

@property (nonatomic) BOOL hasIsRepresentative;
@property (nonatomic) BOOL isRepresentative;
@property (nonatomic) BOOL hasIsKeyAsset;
@property (nonatomic) BOOL isKeyAsset;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
