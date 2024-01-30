@interface SIRINLUINTERNALCompareOptions : PBCodable <NSCopying> {
    struct { unsigned char caseInsensitive : 1; unsigned char diacriticInsensitive : 1; unsigned char widthInsensitive : 1; } _has;
}

@property (nonatomic) BOOL hasCaseInsensitive;
@property (nonatomic) BOOL caseInsensitive;
@property (nonatomic) BOOL hasDiacriticInsensitive;
@property (nonatomic) BOOL diacriticInsensitive;
@property (nonatomic) BOOL hasWidthInsensitive;
@property (nonatomic) BOOL widthInsensitive;

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
