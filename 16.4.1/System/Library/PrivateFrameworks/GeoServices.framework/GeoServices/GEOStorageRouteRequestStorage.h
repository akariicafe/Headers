@class GEOCyclingOptions, GEOAutomobileOptions, PBDataReader, GEOURLRouteHandle, GEOWalkingOptions, GEOTransitOptions, NSMutableArray, PBUnknownFields, GEOStorageResumeRouteHandle;

@interface GEOStorageRouteRequestStorage : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOAutomobileOptions *_automobileOptions;
    GEOCyclingOptions *_cyclingOptions;
    GEOStorageResumeRouteHandle *_resumeRouteHandleStorage;
    GEOURLRouteHandle *_routeHandle;
    GEOTransitOptions *_transitOptions;
    GEOWalkingOptions *_walkingOptions;
    NSMutableArray *_waypoints;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _transportType;
    struct { unsigned char has_transportType : 1; unsigned char read_unknownFields : 1; unsigned char read_automobileOptions : 1; unsigned char read_cyclingOptions : 1; unsigned char read_resumeRouteHandleStorage : 1; unsigned char read_routeHandle : 1; unsigned char read_transitOptions : 1; unsigned char read_walkingOptions : 1; unsigned char read_waypoints : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (retain, nonatomic) NSMutableArray *waypoints;
@property (nonatomic) BOOL hasTransportType;
@property (nonatomic) int transportType;
@property (readonly, nonatomic) BOOL hasRouteHandle;
@property (retain, nonatomic) GEOURLRouteHandle *routeHandle;
@property (readonly, nonatomic) BOOL hasAutomobileOptions;
@property (retain, nonatomic) GEOAutomobileOptions *automobileOptions;
@property (readonly, nonatomic) BOOL hasTransitOptions;
@property (retain, nonatomic) GEOTransitOptions *transitOptions;
@property (readonly, nonatomic) BOOL hasWalkingOptions;
@property (retain, nonatomic) GEOWalkingOptions *walkingOptions;
@property (readonly, nonatomic) BOOL hasCyclingOptions;
@property (retain, nonatomic) GEOCyclingOptions *cyclingOptions;
@property (readonly, nonatomic) BOOL hasResumeRouteHandleStorage;
@property (retain, nonatomic) GEOStorageResumeRouteHandle *resumeRouteHandleStorage;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;
+ (Class)waypointsType;

- (id)initWithData:(id)a0;
- (void)clearSensitiveFields:(unsigned long long)a0;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;
- (int)StringAsTransportType:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)transportTypeAsString:(int)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)init;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)clearUnknownFields:(BOOL)a0;
- (void).cxx_destruct;
- (void)addWaypoints:(id)a0;
- (void)clearWaypoints;
- (id)waypointsAtIndex:(unsigned long long)a0;
- (unsigned long long)waypointsCount;

@end
