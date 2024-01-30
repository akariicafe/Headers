@class GEOLatLng, PBUnknownFields;

@interface GEOPlaceIdentifier : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    GEOLatLng *_center;
    unsigned long long _muid;
    struct { unsigned char has_muid : 1; } _flags;
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
