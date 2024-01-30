@class NSArray;

@interface PPEventsAggregator : NSObject

@property (retain, nonatomic) NSArray *eventsPool;

- (void).cxx_destruct;
- (id)initWithEventsPool:(id)a0;
- (id)tripCandidatesFromEventsPool;
- (BOOL)isEvent:(id)a0 dupeOfEvent:(id)a1;
- (void)dedupeEventsInPool;

@end
