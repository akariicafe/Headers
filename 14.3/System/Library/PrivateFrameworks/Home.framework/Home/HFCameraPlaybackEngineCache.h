@class NSMutableDictionary, NSArray, HMCameraRecordingEventManager, NSMutableArray;

@interface HFCameraPlaybackEngineCache : NSObject

@property (weak, nonatomic) HMCameraRecordingEventManager *eventManager;
@property (retain, nonatomic) NSMutableArray *allCameraEvents;
@property (retain, nonatomic) NSMutableDictionary *firstOfTheDayClips;
@property (retain, nonatomic) NSMutableDictionary *firstOfTheDayEvents;
@property (readonly, copy, nonatomic) NSArray *cameraEvents;
@property (readonly, copy, nonatomic) NSArray *cameraClips;
@property (readonly, copy, nonatomic) NSArray *datesContainingClips;

- (void).cxx_destruct;
- (void)dealloc;
- (id)hfCameraRecordingEventsFromArray:(id)a0;
- (void)prepareFirstOfTheDayEvents;
- (BOOL)isEventDisplayable:(id)a0;
- (void)updateContainerForCameraRecordingEvent:(id)a0;
- (void)prepareAndAddClipEvent:(id)a0 toEvents:(id)a1;
- (void)updateFirstOfTheDayEvents:(id)a0 firstOfTheDayClips:(id)a1 withEvent:(id)a2 previousEvent:(id)a3;
- (void)_updateFirstOfDayEvents:(id)a0 withEvent:(id)a1 previousEvent:(id)a2;
- (id)initWithEventManager:(id)a0;
- (void)resetCacheWithEvents:(id)a0;
- (void)updateForEvents:(id)a0 completion:(id /* block */)a1;
- (void)removeEventUUIDs:(id)a0 completion:(id /* block */)a1;

@end
