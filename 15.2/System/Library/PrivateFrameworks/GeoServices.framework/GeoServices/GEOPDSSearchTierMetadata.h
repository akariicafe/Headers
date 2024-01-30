@class PBUnknownFields;

@interface GEOPDSSearchTierMetadata : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    unsigned int _endIndex;
    unsigned int _startIndex;
    int _tierType;
    struct { unsigned char has_endIndex : 1; unsigned char has_startIndex : 1; unsigned char has_tierType : 1; } _flags;
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
