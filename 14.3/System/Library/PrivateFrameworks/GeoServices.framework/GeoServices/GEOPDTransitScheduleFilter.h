@class PBUnknownFields, PBDataReader, GEOPDDeparturePredicate;

@interface GEOPDTransitScheduleFilter : PBCodable <NSCopying> {
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

@property (readonly, nonatomic) BOOL hasDeparturePredicateCountdown;
@property (retain, nonatomic) GEOPDDeparturePredicate *departurePredicateCountdown;
@property (readonly, nonatomic) BOOL hasDeparturePredicateStamp;
@property (retain, nonatomic) GEOPDDeparturePredicate *departurePredicateStamp;
@property (nonatomic) BOOL hasOperatingHoursRange;
@property (nonatomic) struct GEOPDTimeRange { unsigned int x0; unsigned int x1; struct { unsigned char x0 : 1; unsigned char x1 : 1; } x2; } operatingHoursRange;
@property (nonatomic) BOOL hasIncludeRealTimeDepartures;
@property (nonatomic) BOOL includeRealTimeDepartures;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)initWithData:(id)a0;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithDictionary:(id)a0;

@end
