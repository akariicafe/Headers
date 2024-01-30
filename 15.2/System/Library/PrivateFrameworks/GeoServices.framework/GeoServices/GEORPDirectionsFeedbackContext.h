@class PBDataReader, GEORPUserSearchInput, NSMutableArray, PBUnknownFields;

@interface GEORPDirectionsFeedbackContext : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_directionsRequests;
    NSMutableArray *_directionsResponses;
    NSMutableArray *_directionsWaypointPlaceInfos;
    GEORPUserSearchInput *_endWaypoint;
    GEORPUserSearchInput *_startWaypoint;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_directionsRequests : 1; unsigned char read_directionsResponses : 1; unsigned char read_directionsWaypointPlaceInfos : 1; unsigned char read_endWaypoint : 1; unsigned char read_startWaypoint : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (retain, nonatomic) NSMutableArray *directionsRequests;
@property (retain, nonatomic) NSMutableArray *directionsResponses;
@property (retain, nonatomic) NSMutableArray *directionsWaypointPlaceInfos;
@property (readonly, nonatomic) BOOL hasStartWaypoint;
@property (retain, nonatomic) GEORPUserSearchInput *startWaypoint;
@property (readonly, nonatomic) BOOL hasEndWaypoint;
@property (retain, nonatomic) GEORPUserSearchInput *endWaypoint;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;
+ (Class)directionsRequestType;
+ (Class)directionsResponseType;
+ (Class)directionsWaypointPlaceInfoType;

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
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (void)addDirectionsRequest:(id)a0;
- (void)addDirectionsResponse:(id)a0;
- (void)addDirectionsWaypointPlaceInfo:(id)a0;
- (unsigned long long)directionsRequestsCount;
- (void)clearDirectionsRequests;
- (id)directionsRequestAtIndex:(unsigned long long)a0;
- (unsigned long long)directionsResponsesCount;
- (void)clearDirectionsResponses;
- (id)directionsResponseAtIndex:(unsigned long long)a0;
- (unsigned long long)hash;
- (unsigned long long)directionsWaypointPlaceInfosCount;
- (void)clearDirectionsWaypointPlaceInfos;
- (id)directionsWaypointPlaceInfoAtIndex:(unsigned long long)a0;
- (void)clearSensitiveFields:(unsigned long long)a0;
- (id)dictionaryRepresentation;

@end
