@class NSArray, MNGuidanceEventManager, NSMutableArray;

@interface MNAnnouncementPlan : NSObject

@property (weak, nonatomic) MNGuidanceEventManager *manager;
@property (retain, nonatomic) NSArray *events;
@property (retain, nonatomic) NSMutableArray *plannedEvents;
@property (nonatomic) double distance;
@property (nonatomic) double speed;

+ (double)desiredTimeGapBetweenEvent:(id)a0 andEvent:(id)a1;

- (void).cxx_destruct;
- (id)description;
- (void)sortEvents;
- (id)initWithEvents:(id)a0 distance:(double)a1 speed:(double)a2 manager:(id)a3;
- (id)nextConflict;

@end
