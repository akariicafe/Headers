@interface GEOPDSearchKey64ValueDoublePair : PBCodable <NSCopying> {
    unsigned long long _key;
    double _value;
    struct { unsigned char has_key : 1; unsigned char has_value : 1; } _flags;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;

@end
