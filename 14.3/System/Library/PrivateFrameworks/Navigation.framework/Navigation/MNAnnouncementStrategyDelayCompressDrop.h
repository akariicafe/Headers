@class NSArray, MNGuidanceEventManager, MNAnnouncementPlan;

@interface MNAnnouncementStrategyDelayCompressDrop : NSObject <MNAnnoucementStrategy>

@property (weak, nonatomic) MNGuidanceEventManager *manager;
@property (retain, nonatomic) NSArray *events;
@property (nonatomic) double distance;
@property (nonatomic) double speed;
@property (retain, nonatomic) MNAnnouncementPlan *plan;

- (id)initWithManager:(id)a0;
- (void).cxx_destruct;
- (id)nextEvent;
- (double)_canDelayEvent:(id)a0;
- (BOOL)_advanceToResolveConflict:(id)a0;
- (BOOL)_delayToResolveConflict:(id)a0;
- (BOOL)_compressToResolveConflict:(id)a0;
- (void)_dropToResolveConflict:(id)a0;
- (double)_canAdvanceEvent:(id)a0;
- (void)planForEvents:(id)a0 distance:(double)a1 speed:(double)a2 previousEvent:(id)a3 timeSinceLastEvent:(double)a4;

@end
