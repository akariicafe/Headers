@class PBUnknownFields;

@interface GEOPDMapsSuggestionsTouristInfo : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    double _isTourist;
    struct { unsigned char has_isTourist : 1; } _flags;
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
