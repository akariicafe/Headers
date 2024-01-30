@class PBUnknownFields;

@interface GEOPDEntityFilter : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    BOOL _includeName;
    BOOL _includeSpokenNames;
    struct { unsigned char has_includeName : 1; unsigned char has_includeSpokenNames : 1; } _flags;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
