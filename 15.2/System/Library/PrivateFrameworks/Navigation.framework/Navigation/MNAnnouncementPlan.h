@class NSArray, NSMutableArray;

@interface MNAnnouncementPlan : NSObject

@property (retain, nonatomic) NSArray *events;
@property (retain, nonatomic) NSMutableArray *plannedEvents;
@property (nonatomic) double distance;
@property (nonatomic) double speed;

+ (double)desiredTimeGapBetweenEvent:(id)a0 andEvent:(id)a1;

- (id)description;
- (void).cxx_destruct;
- (void)sortEvents;
- (id)initWithEvents:(id)a0 distance:(double)a1 speed:(double)a2 durations:(id)a3;
- (id)nextConflict;

@end
