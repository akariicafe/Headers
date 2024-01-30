@class NSString, GEOStorageRouteRequestStorage;

@interface MapsSync.MapsSyncHistoryDirectionsItem : MapsSync.MapsSyncHistoryItem {
    void /* unknown type, empty encoding */ _navigationInterrupted;
    void /* unknown type, empty encoding */ _routeRequestStorage;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BOOL navigationInterrupted;
@property (nonatomic, readonly) GEOStorageRouteRequestStorage *routeRequestStorage;

- (void)addEditWithBlock:(id /* block */)a0;
- (void)setPropertiesWithObject:(id)a0;
- (id)initWithObject:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (Class)mutableObjectClass;
- (Class)managedObjectClass;

@end
