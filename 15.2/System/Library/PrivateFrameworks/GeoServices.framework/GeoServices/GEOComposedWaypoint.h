@class GEOMapItemStorage, GEOWaypointTyped, GEOLatLng, PBDataReader;

@interface GEOComposedWaypoint : PBCodable <NSCopying> {
    PBDataReader *_reader;
    GEOLatLng *_latLng;
    GEOMapItemStorage *_mapItemStorage;
    GEOWaypointTyped *_waypoint;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_latLng : 1; unsigned char read_mapItemStorage : 1; unsigned char read_waypoint : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasWaypoint;
@property (retain, nonatomic) GEOWaypointTyped *waypoint;
@property (readonly, nonatomic) BOOL hasMapItemStorage;
@property (retain, nonatomic) GEOMapItemStorage *mapItemStorage;
@property (readonly, nonatomic) BOOL hasLatLng;
@property (retain, nonatomic) GEOLatLng *latLng;

+ (id)composedWaypointForIncompleteMapItem:(id)a0 traits:(id)a1 clientAttributes:(id)a2 completionHandler:(id /* block */)a3 networkActivityHandler:(id /* block */)a4;
+ (id)composedWaypointForMapItemToRefine:(id)a0 traits:(id)a1 auditToken:(id)a2 clientAttributes:(id)a3 completionHandler:(id /* block */)a4 networkActivityHandler:(id /* block */)a5;
+ (id)composedWaypointForMapItem:(id)a0 traits:(id)a1 auditToken:(id)a2 clientAttributes:(id)a3 completionHandler:(id /* block */)a4 networkActivityHandler:(id /* block */)a5;
+ (id)composedWaypointForSearchString:(id)a0 completionItem:(id)a1 traits:(id)a2 clientAttributes:(id)a3 completionHandler:(id /* block */)a4 networkActivityHandler:(id /* block */)a5;
+ (id)composedWaypointForMapItemToRefine:(id)a0 traits:(id)a1 clientAttributes:(id)a2 completionHandler:(id /* block */)a3 networkActivityHandler:(id /* block */)a4;
+ (id)composedWaypointForAddressString:(id)a0 traits:(id)a1 clientAttributes:(id)a2 completionHandler:(id /* block */)a3 networkActivityHandler:(id /* block */)a4;
+ (id)composedWaypointForSearchString:(id)a0 completionItem:(id)a1 traits:(id)a2 clientAttributes:(id)a3 clientResolvedCompletionHandler:(id /* block */)a4 completionHandler:(id /* block */)a5 networkActivityHandler:(id /* block */)a6;
+ (id)composedWaypointForID:(unsigned long long)a0 resultsProviderID:(int)a1 contentProvider:(id)a2 traits:(id)a3 clientAttributes:(id)a4 completionHandler:(id /* block */)a5 networkActivityHandler:(id /* block */)a6;
+ (id)composedWaypointForTransitID:(unsigned long long)a0 coordinate:(struct { double x0; double x1; })a1 isCurrentLocation:(BOOL)a2 traits:(id)a3 clientAttributes:(id)a4 completionHandler:(id /* block */)a5 networkActivityHandler:(id /* block */)a6;
+ (BOOL)isValid:(id)a0;
+ (void)composedWaypointForMapServiceResponse:(id)a0 clientAttributes:(id)a1 error:(id)a2 handler:(id /* block */)a3;
+ (id)composedWaypointForLocation:(id)a0 mapItem:(id)a1 traits:(id)a2 auditToken:(id)a3 completionHandler:(id /* block */)a4 networkActivityHandler:(id /* block */)a5;
+ (id)composedWaypointForCurrentLocation:(id)a0 traits:(id)a1 auditToken:(id)a2 completionHandler:(id /* block */)a3 networkActivityHandler:(id /* block */)a4;
+ (id)composedWaypointForIdentifier:(id)a0 traits:(id)a1 clientAttributes:(id)a2 completionHandler:(id /* block */)a3 networkActivityHandler:(id /* block */)a4;
+ (id)composedWaypointForLocation:(id)a0 mapItem:(id)a1 traits:(id)a2 completionHandler:(id /* block */)a3 networkActivityHandler:(id /* block */)a4;
+ (id)composedWaypointForCurrentLocation:(id)a0 traits:(id)a1 completionHandler:(id /* block */)a2 networkActivityHandler:(id /* block */)a3;
+ (id)composedWaypointForMapItem:(id)a0 traits:(id)a1 clientAttributes:(id)a2 completionHandler:(id /* block */)a3 networkActivityHandler:(id /* block */)a4;
+ (id)composedWaypointForWaypointTyped:(id)a0 completionHandler:(id /* block */)a1 networkActivityHandler:(id /* block */)a2;

- (unsigned long long)muid;
- (struct { double x0; double x1; double x2; })coordinate;
- (void)readAll:(BOOL)a0;
- (id)initWithCompanionWaypoint:(id)a0;
- (void)setIsCurrentLocation:(BOOL)a0;
- (BOOL)isCurrentLocation;
- (id)initWithMapItem:(id)a0;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (id)initWithLocation:(id)a0 isCurrentLocation:(BOOL)a1;
- (id)initWithData:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)timezone;
- (id)description;
- (BOOL)isSameAs:(id)a0 comparisonCriteria:(unsigned long long)a1;
- (id)_muidCandidatesForComparison;
- (id)_locationCandidatesForComparison;
- (id)_addressCandidatesForComparison;
- (id)_regionCandidatesForContainment;
- (id)geoMapItem;
- (BOOL)isSameAs:(id)a0;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)a0;
- (double)distanceToWaypoint:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)chargingInfo;
- (id)name;
- (unsigned long long)hash;
- (id)bestLatLng;
- (BOOL)isLocationWaypointType;
- (void)clearSensitiveFields:(unsigned long long)a0;
- (id)artwork;
- (id)dictionaryRepresentation;

@end
