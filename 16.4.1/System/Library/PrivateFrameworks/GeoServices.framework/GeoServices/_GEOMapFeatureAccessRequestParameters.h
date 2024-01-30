@class GEOTileLoader, NSObject;
@protocol OS_dispatch_queue;

@interface _GEOMapFeatureAccessRequestParameters : NSObject

@property (retain, nonatomic) GEOTileLoader *tileLoader;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) BOOL allowNetworkTileLoad;
@property (nonatomic) BOOL flipNegativeTravelDirectionRoads;
@property (nonatomic) BOOL visitDoubleTravelDirectionRoadsTwice;
@property (nonatomic) BOOL allowStaleData;
@property (nonatomic) BOOL joinAllRoadsByMuid;
@property (nonatomic) BOOL cachedTilesCallbackImmediately;

- (void).cxx_destruct;

@end
