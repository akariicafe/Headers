@class NSArray;

@interface PPEventsAggregator : NSObject

@property (retain, nonatomic) NSArray *eventsPool;

- (void).cxx_destruct;
- (void)dedupeEventsInPool;
- (id)initWithEventsPool:(id)a0;
- (BOOL)isEvent:(id)a0 dupeOfEvent:(id)a1;
- (id)tripCandidatesFromEventsPool;

@end
