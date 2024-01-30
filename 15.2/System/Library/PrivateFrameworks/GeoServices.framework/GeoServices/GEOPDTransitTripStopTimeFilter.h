@class PBUnknownFields, GEOPDDeparturePredicate, PBDataReader;

@interface GEOPDTransitTripStopTimeFilter : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDDeparturePredicate *_departurePredicateCountdown;
    GEOPDDeparturePredicate *_departurePredicateStamp;
    struct GEOPDTimeRange { unsigned int _duration; unsigned int _startTime; struct { unsigned char duration : 1; unsigned char startTime : 1; } _has; } _operatingHoursRange;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    BOOL _includeRealTimeDepartures;
    struct { unsigned char has_operatingHoursRange : 1; unsigned char has_includeRealTimeDepartures : 1; unsigned char read_unknownFields : 1; unsigned char read_departurePredicateCountdown : 1; unsigned char read_departurePredicateStamp : 1; unsigned char wrote_anyField : 1; } _flags;
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
- (id)dictionaryRepresentation;

@end
