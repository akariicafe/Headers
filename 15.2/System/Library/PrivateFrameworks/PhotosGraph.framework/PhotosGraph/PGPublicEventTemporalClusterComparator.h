@interface PGPublicEventTemporalClusterComparator : NSObject

- (double)distanceFromPublicEvent:(id)a0 toTemporalEvents:(id)a1;
- (double)_distanceFromString:(id)a0 toString:(id)a1;
- (id)_removeDateFromString:(id)a0;

@end
