@class PBUnknownFields;

@interface GEOPDSRawAttribute : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    unsigned int _beginIndex;
    unsigned int _endIndex;
    struct { unsigned char has_beginIndex : 1; unsigned char has_endIndex : 1; } _flags;
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
