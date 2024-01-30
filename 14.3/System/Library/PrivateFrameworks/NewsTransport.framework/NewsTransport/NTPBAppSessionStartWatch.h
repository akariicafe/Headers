@interface NTPBAppSessionStartWatch : PBCodable <NSCopying> {
    struct { unsigned char sessionStartMethodWatch : 1; } _has;
}

@property (nonatomic) BOOL hasSessionStartMethodWatch;
@property (nonatomic) int sessionStartMethodWatch;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
