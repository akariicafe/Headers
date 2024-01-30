@class GEOStorageRouteRequestStorage, NSUUID, NSString, NSDate;

@interface MapsSyncFakeHistoryDirectionsItem : MapsSyncFakeHistoryItem <MapsSyncHistoryDirectionsItem>

@property (readonly, nonatomic) BOOL navigationInterrupted;
@property (readonly, nonatomic) GEOStorageRouteRequestStorage *routeRequestStorage;
@property (readonly, copy, nonatomic) NSUUID *identifier;
@property (readonly, copy, nonatomic) NSDate *createTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 createTime:(id)a1 routeRequestStorage:(id)a2 navigationInterrupted:(BOOL)a3;

@end
