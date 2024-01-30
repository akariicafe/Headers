@class NSArray, NSMutableArray, NSMapTable;

@interface HFCameraPlaybackEngineCache : NSObject

@property (retain, nonatomic) NSMutableArray *allCameraEvents;
@property (retain, nonatomic) NSMapTable *firstOfTheDayClips;
@property (retain, nonatomic) NSMapTable *firstOfTheDayEvents;
@property (readonly, copy, nonatomic) NSArray *cameraEvents;
@property (readonly, copy, nonatomic) NSArray *cameraClips;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_setupDebugHandler;
- (id)hfCameraRecordingEventsFromArray:(id)a0;
- (BOOL)isEventDisplayable:(id)a0;
- (void)loadEvents:(id)a0;
- (void)prepareAndAddClip:(id)a0 toSortedEvents:(id)a1;
- (void)removeEventUUIDs:(id)a0 completion:(id /* block */)a1;
- (void)resetFirstOfTheDayContainers;
- (void)resetWithEvents:(id)a0;
- (id)timelineEligibleEventsFromEvents:(id)a0;
- (void)updateContainerForCameraRecordingEvent:(id)a0;
- (void)updateFirstOfTheDayContainersWithEvent:(id)a0;
- (void)updateWithEvents:(id)a0 completion:(id /* block */)a1;

@end
