@interface CPLMemoryAssetFlag : PBCodable <NSCopying> {
    struct { unsigned char isCurated : 1; unsigned char isExtendedCurated : 1; unsigned char isKeyAsset : 1; unsigned char isMovieCurated : 1; unsigned char isRepresentative : 1; unsigned char isUserCurated : 1; } _has;
}

@property (nonatomic) BOOL hasIsRepresentative;
@property (nonatomic) BOOL isRepresentative;
@property (nonatomic) BOOL hasIsCurated;
@property (nonatomic) BOOL isCurated;
@property (nonatomic) BOOL hasIsMovieCurated;
@property (nonatomic) BOOL isMovieCurated;
@property (nonatomic) BOOL hasIsKeyAsset;
@property (nonatomic) BOOL isKeyAsset;
@property (nonatomic) BOOL hasIsExtendedCurated;
@property (nonatomic) BOOL isExtendedCurated;
@property (nonatomic) BOOL hasIsUserCurated;
@property (nonatomic) BOOL isUserCurated;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;

@end
