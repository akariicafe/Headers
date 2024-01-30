@class NSArray, NSMutableArray, NSMutableDictionary;

@interface HFCameraPlaybackEngineCache : NSObject

@property (retain, nonatomic) NSMutableArray *allCameraEvents;
@property (retain, nonatomic) NSMutableDictionary *firstOfTheDayClips;
@property (retain, nonatomic) NSMutableDictionary *firstOfTheDayEvents;
@property (readonly, copy, nonatomic) NSArray *cameraEvents;
@property (readonly, copy, nonatomic) NSArray *cameraClips;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)loadEvents:(id)a0;
- (id)timelineEligibleEventsFromEvents:(id)a0;
- (id)hfCameraRecordingEventsFromArray:(id)a0;
- (void)prepareFirstOfTheDayEvents;
- (BOOL)isEventDisplayable:(id)a0;
- (void)updateContainerForCameraRecordingEvent:(id)a0;
- (void)prepareAndAddClipEvent:(id)a0 toEvents:(id)a1;
- (void)updateFirstOfTheDayEvents:(id)a0 firstOfTheDayClips:(id)a1 withEvent:(id)a2 previousEvent:(id)a3;
- (void)_updateFirstOfDayEvents:(id)a0 withEvent:(id)a1 previousEvent:(id)a2;
- (void)resetWithEvents:(id)a0;
- (void)updateForEvents:(id)a0 completion:(id /* block */)a1;
- (void)removeEventUUIDs:(id)a0 completion:(id /* block */)a1;

@end
