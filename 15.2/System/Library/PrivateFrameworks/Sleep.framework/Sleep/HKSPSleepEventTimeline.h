@class NSArray, NSMutableArray, NSDate;

@interface HKSPSleepEventTimeline : NSObject <NSCopying>

@property (readonly, nonatomic) NSMutableArray *orderedOccurrences;
@property (readonly, nonatomic) NSMutableArray *timelineAdjustments;
@property (readonly, nonatomic) NSDate *originDate;
@property (readonly, nonatomic) NSArray *resolvedOccurrences;
@property (readonly, nonatomic) NSArray *events;
@property (readonly, nonatomic) NSArray *upcomingEvents;
@property (readonly, nonatomic) NSArray *previousEvents;
@property (readonly, nonatomic) NSArray *upcomingResolvedOccurrences;
@property (readonly, nonatomic) NSArray *previousResolvedOccurrences;

- (void)_adjustedResolvedOccurrence:(id)a0 adjustmentBlock:(id /* block */)a1;
- (id)resolvedOccurrenceContainingOrPrecedingDate:(id)a0;
- (id)resolvedOccurrencePrecedingDate:(id)a0;
- (void)addResolvedOccurrence:(id)a0;
- (id)upcomingResolvedOccurrencesWithinInterval:(double)a0;
- (id)resolvedOccurrenceContainingDate:(id)a0;
- (id)resolvedOccurrenceOverlappingOccurrence:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithOriginDate:(id)a0;
- (void)adjustResolvedOccurrence:(id)a0 withEvent:(id)a1;
- (void)adjustResolvedOccurrence:(id)a0 removingEventWithIdentifier:(id)a1;

@end
