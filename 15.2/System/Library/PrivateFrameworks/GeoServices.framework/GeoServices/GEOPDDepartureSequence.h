@class GEOPBTransitArtwork, PBDataReader, NSString, NSMutableArray, PBUnknownFields;

@interface GEOPDDepartureSequence : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct { unsigned long long *list; unsigned long long count; unsigned long long size; } _nextStopIds;
    struct GEOPDTimeRange { unsigned int x0; unsigned int x1; struct { unsigned char x0 : 1; unsigned char x1 : 1; } x2; } *_operatingHours;
    unsigned long long _operatingHoursCount;
    unsigned long long _operatingHoursSpace;
    GEOPBTransitArtwork *_artwork;
    NSMutableArray *_departureFrequencys;
    NSMutableArray *_departures;
    NSString *_directionNameString;
    NSString *_displayName;
    NSString *_headsignString;
    unsigned long long _lineId;
    NSString *_originName;
    unsigned long long _stopId;
    unsigned long long _transitId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char has_lineId : 1; unsigned char has_stopId : 1; unsigned char has_transitId : 1; unsigned char read_unknownFields : 1; unsigned char read_nextStopIds : 1; unsigned char read_operatingHours : 1; unsigned char read_artwork : 1; unsigned char read_departureFrequencys : 1; unsigned char read_departures : 1; unsigned char read_directionNameString : 1; unsigned char read_displayName : 1; unsigned char read_headsignString : 1; unsigned char read_originName : 1; unsigned char wrote_anyField : 1; } _flags;
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
