@class GEOPDPhoto, PBUnknownFields;

@interface GEOPDIcon : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    GEOPDPhoto *_image;
    int _iconType;
    struct { unsigned char has_iconType : 1; } _flags;
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
