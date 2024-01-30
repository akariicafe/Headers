@class PBDataReader, NSString, GEOStyleAttributes, GEOLatLng, GEOTimezone, NSMutableArray, PBUnknownFields;

@interface GEOPDTransitInfoSnippet : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_artworks;
    NSMutableArray *_labels;
    NSString *_searchDisplayName;
    GEOLatLng *_stopLocationForTrip;
    GEOStyleAttributes *_styleAttributesForTrip;
    NSMutableArray *_systemNames;
    GEOTimezone *_timezone;
    unsigned long long _transitId;
    NSString *_transitName;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char has_transitId : 1; unsigned char read_unknownFields : 1; unsigned char read_artworks : 1; unsigned char read_labels : 1; unsigned char read_searchDisplayName : 1; unsigned char read_stopLocationForTrip : 1; unsigned char read_styleAttributesForTrip : 1; unsigned char read_systemNames : 1; unsigned char read_timezone : 1; unsigned char read_transitName : 1; unsigned char wrote_anyField : 1; } _flags;
}

+ (id)transitInfoSnippetForPlaceData:(id)a0;

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
- (id)dictionaryRepresentation;

@end
