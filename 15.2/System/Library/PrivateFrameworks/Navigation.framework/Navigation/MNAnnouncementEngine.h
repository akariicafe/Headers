@class NSArray, MNAnnouncementPlan, NSDictionary;

@interface MNAnnouncementEngine : NSObject {
    NSArray *_events;
    double _distance;
    double _speed;
    NSDictionary *_durations;
}

@property (retain, nonatomic) MNAnnouncementPlan *plan;

- (id)nextEvent;
- (void).cxx_destruct;
- (double)_canDelayEvent:(id)a0;
- (BOOL)_advanceToResolveConflict:(id)a0;
- (BOOL)_delayToResolveConflict:(id)a0;
- (BOOL)_compressToResolveConflict:(id)a0;
- (void)_dropToResolveConflict:(id)a0;
- (double)_canAdvanceEvent:(id)a0;
- (void)planForEvents:(id)a0 distance:(double)a1 speed:(double)a2 previousEvent:(id)a3 timeSinceLastEvent:(double)a4 durations:(id)a5;

@end
