@interface MNRouteCoordinate : PBCodable <NSCopying> {
    struct { unsigned char index : 1; unsigned char offset : 1; } _has;
}

@property (nonatomic) BOOL hasIndex;
@property (nonatomic) unsigned int index;
@property (nonatomic) BOOL hasOffset;
@property (nonatomic) float offset;

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
