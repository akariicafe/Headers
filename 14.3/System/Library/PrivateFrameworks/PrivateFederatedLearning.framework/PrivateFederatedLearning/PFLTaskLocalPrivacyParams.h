@interface PFLTaskLocalPrivacyParams : PBCodable <NSCopying> {
    struct { unsigned char clippingNormMax : 1; unsigned char normBinCount : 1; } _has;
}

@property (nonatomic) BOOL hasNormBinCount;
@property (nonatomic) long long normBinCount;
@property (nonatomic) BOOL hasClippingNormMax;
@property (nonatomic) double clippingNormMax;

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
