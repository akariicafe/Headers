@class PBDataReader, GEOPDMapsIdentifier, GEOLatLng, GEOMapRegion, GEOPDGuidesLocationEntryTypeWorldWide, PBUnknownFields;

@interface GEOPDGuidesLocationEntry : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct { unsigned long long *list; unsigned long long count; unsigned long long size; } _geoIdCandidates;
    GEOLatLng *_center;
    GEOMapRegion *_mapRegion;
    GEOPDMapsIdentifier *_placeId;
    GEOPDGuidesLocationEntryTypeWorldWide *_worldwide;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _numGuides;
    int _type;
    struct { unsigned char has_numGuides : 1; unsigned char has_type : 1; unsigned char read_unknownFields : 1; unsigned char read_geoIdCandidates : 1; unsigned char read_center : 1; unsigned char read_mapRegion : 1; unsigned char read_placeId : 1; unsigned char read_worldwide : 1; unsigned char wrote_anyField : 1; } _flags;
}

- (id)initWithData:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)init;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
