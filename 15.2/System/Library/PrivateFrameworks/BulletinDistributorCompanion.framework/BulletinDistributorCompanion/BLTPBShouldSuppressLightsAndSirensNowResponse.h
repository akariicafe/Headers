@interface BLTPBShouldSuppressLightsAndSirensNowResponse : PBCodable <NSCopying> {
    struct { unsigned char shouldSuppress : 1; } _has;
}

@property (nonatomic) BOOL hasShouldSuppress;
@property (nonatomic) BOOL shouldSuppress;

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
