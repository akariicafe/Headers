@class GEOPDMapsIdentifier, PBDataReader, GEOPDPhoto, GEOPDDataItem, GEOStyleAttributes, GEOTimezone, PBUnknownFields, NSMutableArray;

@interface GEOPDTemplateData : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDDataItem *_footer;
    GEOPDMapsIdentifier *_mapsId;
    GEOPDPhoto *_photo;
    GEOStyleAttributes *_poiIcon;
    GEOPDDataItem *_subtitle;
    GEOTimezone *_timezone;
    NSMutableArray *_titles;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    BOOL _areaHighlight;
    struct { unsigned char has_areaHighlight : 1; unsigned char read_unknownFields : 1; unsigned char read_footer : 1; unsigned char read_mapsId : 1; unsigned char read_photo : 1; unsigned char read_poiIcon : 1; unsigned char read_subtitle : 1; unsigned char read_timezone : 1; unsigned char read_titles : 1; unsigned char wrote_anyField : 1; } _flags;
}

- (id)initWithData:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)jsonRepresentation;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)placeName;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
