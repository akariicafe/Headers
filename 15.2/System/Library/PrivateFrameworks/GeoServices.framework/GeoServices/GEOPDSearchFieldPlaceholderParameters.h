@class PBUnknownFields;

@interface GEOPDSearchFieldPlaceholderParameters : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    int _version;
    struct { unsigned char has_version : 1; } _flags;
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
