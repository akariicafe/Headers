@interface SIRINLUEXTERNALReferenceContext : PBCodable <NSCopying> {
    struct { unsigned char contextualReference : 1; unsigned char disambiguationNeeded : 1; } _has;
}

@property (nonatomic) BOOL hasContextualReference;
@property (nonatomic) BOOL contextualReference;
@property (nonatomic) BOOL hasDisambiguationNeeded;
@property (nonatomic) BOOL disambiguationNeeded;

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
