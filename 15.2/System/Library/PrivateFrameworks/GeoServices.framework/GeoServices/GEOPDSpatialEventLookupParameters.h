@class PBUnknownFields, GEOLatLng, PBDataReader;

@interface GEOPDSpatialEventLookupParameters : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct { int *list; unsigned long long count; unsigned long long size; } _categoryFilters;
    GEOLatLng *_center;
    struct GEOPDTimeRange { unsigned int _duration; unsigned int _startTime; struct { unsigned char duration : 1; unsigned char startTime : 1; } _has; } _timeRange;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _count;
    int _radius;
    struct { unsigned char has_timeRange : 1; unsigned char has_count : 1; unsigned char has_radius : 1; unsigned char read_unknownFields : 1; unsigned char read_categoryFilters : 1; unsigned char read_center : 1; unsigned char wrote_anyField : 1; } _flags;
}

- (id)initWithData:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)jsonRepresentation;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (id)dictionaryRepresentation;

@end
