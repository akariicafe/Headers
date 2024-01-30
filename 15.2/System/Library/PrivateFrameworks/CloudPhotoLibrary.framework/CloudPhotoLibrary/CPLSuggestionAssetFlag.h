@interface CPLSuggestionAssetFlag : PBCodable <NSCopying> {
    struct { unsigned char isKeyAsset : 1; unsigned char isRepresentative : 1; } _has;
}

@property (nonatomic) BOOL hasIsRepresentative;
@property (nonatomic) BOOL isRepresentative;
@property (nonatomic) BOOL hasIsKeyAsset;
@property (nonatomic) BOOL isKeyAsset;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
