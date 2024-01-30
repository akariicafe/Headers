@class GEONavigationTransitStopSummary, PBDataReader;

@interface GEONavigationScheduledTransitLinkSummary : PBCodable <NSCopying> {
    PBDataReader *_reader;
    unsigned long long _lineID;
    double _scheduledArrival;
    double _scheduledDeparture;
    GEONavigationTransitStopSummary *_stopFrom;
    GEONavigationTransitStopSummary *_stopTo;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char has_lineID : 1; unsigned char has_scheduledArrival : 1; unsigned char has_scheduledDeparture : 1; unsigned char read_stopFrom : 1; unsigned char read_stopTo : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasLineID;
@property (nonatomic) unsigned long long lineID;
@property (nonatomic) BOOL hasScheduledDeparture;
@property (nonatomic) double scheduledDeparture;
@property (nonatomic) BOOL hasScheduledArrival;
@property (nonatomic) double scheduledArrival;
@property (readonly, nonatomic) BOOL hasStopFrom;
@property (retain, nonatomic) GEONavigationTransitStopSummary *stopFrom;
@property (readonly, nonatomic) BOOL hasStopTo;
@property (retain, nonatomic) GEONavigationTransitStopSummary *stopTo;

+ (BOOL)isValid:(id)a0;

- (void)readAll:(BOOL)a0;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (id)initWithData:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithJSON:(id)a0;
- (id)initWithTransitTripRouteStep:(id)a0 originSummary:(id)a1 destinationSummary:(id)a2;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
