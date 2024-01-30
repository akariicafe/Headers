@class GEODirectionsRequestFeedback, NSString, GEOLocation, GEORouteAttributes, GEOMapRegion, GEOComposedWaypoint;

@interface MNDirectionsRequestDetails : PBCodable <NSCopying> {
    struct { unsigned char maxRouteCount : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasOrigin;
@property (retain, nonatomic) GEOComposedWaypoint *origin;
@property (readonly, nonatomic) BOOL hasDestination;
@property (retain, nonatomic) GEOComposedWaypoint *destination;
@property (readonly, nonatomic) BOOL hasRouteAttributes;
@property (retain, nonatomic) GEORouteAttributes *routeAttributes;
@property (nonatomic) BOOL hasMaxRouteCount;
@property (nonatomic) unsigned int maxRouteCount;
@property (readonly, nonatomic) BOOL hasCurrentUserLocation;
@property (retain, nonatomic) GEOLocation *currentUserLocation;
@property (readonly, nonatomic) BOOL hasCurrentMapRegion;
@property (retain, nonatomic) GEOMapRegion *currentMapRegion;
@property (readonly, nonatomic) BOOL hasDirectionsRequestFeedback;
@property (retain, nonatomic) GEODirectionsRequestFeedback *directionsRequestFeedback;
@property (readonly, nonatomic) BOOL hasTracePath;
@property (retain, nonatomic) NSString *tracePath;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
