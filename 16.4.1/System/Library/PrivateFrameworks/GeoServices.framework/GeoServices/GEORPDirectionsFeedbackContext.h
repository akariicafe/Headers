@class PBDataReader, GEORPUserSearchInput, NSMutableArray, PBUnknownFields;

@interface GEORPDirectionsFeedbackContext : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_directionsRequests;
    NSMutableArray *_directionsResponses;
    NSMutableArray *_directionsWaypointPlaceInfos;
    GEORPUserSearchInput *_endWaypoint;
    NSMutableArray *_rerouteLocations;
    NSMutableArray *_routes;
    GEORPUserSearchInput *_startWaypoint;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_directionsRequests : 1; unsigned char read_directionsResponses : 1; unsigned char read_directionsWaypointPlaceInfos : 1; unsigned char read_endWaypoint : 1; unsigned char read_rerouteLocations : 1; unsigned char read_routes : 1; unsigned char read_startWaypoint : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (retain, nonatomic) NSMutableArray *directionsRequests;
@property (retain, nonatomic) NSMutableArray *directionsResponses;
@property (retain, nonatomic) NSMutableArray *directionsWaypointPlaceInfos;
@property (readonly, nonatomic) BOOL hasStartWaypoint;
@property (retain, nonatomic) GEORPUserSearchInput *startWaypoint;
@property (readonly, nonatomic) BOOL hasEndWaypoint;
@property (retain, nonatomic) GEORPUserSearchInput *endWaypoint;
@property (retain, nonatomic) NSMutableArray *routes;
@property (retain, nonatomic) NSMutableArray *rerouteLocations;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)routeType;
+ (BOOL)isValid:(id)a0;
+ (Class)directionsWaypointPlaceInfoType;
+ (Class)directionsRequestType;
+ (Class)directionsResponseType;
+ (Class)rerouteLocationType;

- (id)initWithData:(id)a0;
- (void)clearSensitiveFields:(unsigned long long)a0;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)init;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)clearUnknownFields:(BOOL)a0;
- (void).cxx_destruct;
- (void)addDirectionsWaypointPlaceInfo:(id)a0;
- (void)addDirectionsRequest:(id)a0;
- (void)addDirectionsResponse:(id)a0;
- (void)addRerouteLocation:(id)a0;
- (void)addRoute:(id)a0;
- (void)clearDirectionsRequests;
- (void)clearDirectionsResponses;
- (void)clearDirectionsWaypointPlaceInfos;
- (void)clearRerouteLocations;
- (void)clearRoutes;
- (id)directionsRequestAtIndex:(unsigned long long)a0;
- (unsigned long long)directionsRequestsCount;
- (id)directionsResponseAtIndex:(unsigned long long)a0;
- (unsigned long long)directionsResponsesCount;
- (id)directionsWaypointPlaceInfoAtIndex:(unsigned long long)a0;
- (unsigned long long)directionsWaypointPlaceInfosCount;
- (id)rerouteLocationAtIndex:(unsigned long long)a0;
- (unsigned long long)rerouteLocationsCount;
- (id)routeAtIndex:(unsigned long long)a0;
- (unsigned long long)routesCount;

@end
