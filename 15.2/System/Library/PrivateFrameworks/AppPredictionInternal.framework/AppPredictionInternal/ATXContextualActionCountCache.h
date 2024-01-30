@class NSCountedSet, NSDateInterval, NSDate;

@interface ATXContextualActionCountCache : NSObject {
    NSCountedSet *headingToWorkActions;
    NSCountedSet *headingHomeActions;
    NSCountedSet *unspecifiedActions;
    NSCountedSet *allActions;
    NSDateInterval *headingToWorkDateInterval;
    NSDateInterval *headingHomeDateInterval;
    NSDateInterval *otherDateInterval;
}

@property (readonly, nonatomic) NSDate *oldestAction;

- (void).cxx_destruct;
- (id)init;
- (void)addMinimalActionParameter:(id)a0;
- (id)getCountsForContext:(id)a0;
- (id)getAllCounts;
- (BOOL)isHeadingToWorkActionTime:(id)a0;
- (BOOL)isHeadingHomeActionTime:(id)a0;
- (BOOL)isOtherActionTime:(id)a0;

@end
