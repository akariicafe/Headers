@class GEOPDSTransportHint, PBUnknownFields;

@interface GEOPDSSearchLocationParameters : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    GEOPDSTransportHint *_searchTransportHint;
    int _searchLocationParametersType;
    struct { unsigned char has_searchLocationParametersType : 1; } _flags;
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
