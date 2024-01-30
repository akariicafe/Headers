@class NSString, GEOComposedWaypoint;

@interface MapsSync.MapsSyncHistoryRideShareItem : MapsSync.MapsSyncHistoryItem {
    void /* unknown type, empty encoding */ _startWaypoint;
    void /* unknown type, empty encoding */ _endWaypoint;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) GEOComposedWaypoint *startWaypoint;
@property (nonatomic, readonly) GEOComposedWaypoint *endWaypoint;

- (void).cxx_destruct;
- (id)initWithObject:(id)a0;
- (Class)mutableObjectClass;
- (void)addEditWithBlock:(id /* block */)a0;
- (void)setPropertiesWithObject:(id)a0;
- (Class)managedObjectClass;
- (BOOL)isEqual:(id)a0;

@end
