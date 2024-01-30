@interface EDPBInteractionEventAppLaunch : PBCodable <EDPBDataSetters, NSCopying>

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (void)withHasher:(id)a0 setMessage:(id)a1 data:(id)a2;

@end
