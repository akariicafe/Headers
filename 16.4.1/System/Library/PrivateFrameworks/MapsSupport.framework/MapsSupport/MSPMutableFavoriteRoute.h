@class GEOStorageRouteRequestStorage, NSString, NSUUID, GEOComposedWaypoint;

@interface MSPMutableFavoriteRoute : MSPMutableFavorite <MSPFavoriteRoute>

@property (copy, nonatomic) GEOStorageRouteRequestStorage *routeRequestStorage;
@property (readonly, nonatomic) GEOComposedWaypoint *startWaypoint;
@property (readonly, nonatomic) GEOComposedWaypoint *endWaypoint;
@property (readonly, nonatomic) int transportType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *storageIdentifier;

+ (Class)mutableObjectClass;
+ (Class)immutableObjectClass;
+ (id)immutableObjectProtocol;
+ (id)mutableObjectProtocol;

- (id)initWithBookmarkStorage:(id)a0;
- (id)transferToImmutableIfValidWithError:(out id *)a0;

@end
