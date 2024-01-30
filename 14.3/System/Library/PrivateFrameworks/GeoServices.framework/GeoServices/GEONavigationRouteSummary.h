@class NSString, PBDataReader, GEOComposedWaypoint;

@interface GEONavigationRouteSummary : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSString *_destinationName;
    GEOComposedWaypoint *_destination;
    GEOComposedWaypoint *_origin;
    double _travelTime;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _transportType;
    struct { unsigned char has_travelTime : 1; unsigned char has_transportType : 1; unsigned char read_destinationName : 1; unsigned char read_destination : 1; unsigned char read_origin : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasTransportType;
@property (nonatomic) int transportType;
@property (readonly, nonatomic) BOOL hasOrigin;
@property (retain, nonatomic) GEOComposedWaypoint *origin;
@property (readonly, nonatomic) BOOL hasDestination;
@property (retain, nonatomic) GEOComposedWaypoint *destination;
@property (readonly, nonatomic) BOOL hasDestinationName;
@property (retain, nonatomic) NSString *destinationName;
@property (nonatomic) BOOL hasTravelTime;
@property (nonatomic) double travelTime;

+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (id)initWithRoute:(id)a0 destinationName:(id)a1;
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
- (void)setRoute:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (int)StringAsTransportType:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)transportTypeAsString:(int)a0;

@end
