@class PBUnknownFields;

@interface GEOPDEntityFilter : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    BOOL _includeName;
    BOOL _includeSpokenNames;
    struct { unsigned char has_includeName : 1; unsigned char has_includeSpokenNames : 1; } _flags;
}

- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)jsonRepresentation;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
