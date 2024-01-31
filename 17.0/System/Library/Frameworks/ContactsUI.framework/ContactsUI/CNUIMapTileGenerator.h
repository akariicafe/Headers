@protocol CNSchedulerProvider, CNScheduler;

@interface CNUIMapTileGenerator : NSObject

@property (class, readonly) double defaultTileSize;

@property (readonly, copy, nonatomic) id /* block */ geocoderProvider;
@property (readonly, copy, nonatomic) id /* block */ snapshotterProvider;
@property (readonly, copy, nonatomic) id<CNScheduler> workQueue;
@property (readonly, copy, nonatomic) id<CNSchedulerProvider> schedulerProvider;

+ (id)defaultImage;
+ (id)mapTileImagesForPlacemark:(id)a0 snapshotterProvider:(id /* block */)a1 scheduler:(id)a2;
+ (id)placemarkForAddress:(id)a0 geocoderProvider:(id /* block */)a1 scheduler:(id)a2;

- (id)init;
- (void).cxx_destruct;
- (id)initWithGeocoderProvider:(id /* block */)a0 snapshotterProvider:(id /* block */)a1 schedulerProvider:(id)a2;
- (id)tilesForAddress:(id)a0;

@end
