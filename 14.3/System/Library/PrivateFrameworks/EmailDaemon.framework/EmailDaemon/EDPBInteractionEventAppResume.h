@interface EDPBInteractionEventAppResume : PBCodable <EDPBDataSetters, NSCopying>

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)withHasher:(id)a0 setMessage:(id)a1 data:(id)a2;

@end
