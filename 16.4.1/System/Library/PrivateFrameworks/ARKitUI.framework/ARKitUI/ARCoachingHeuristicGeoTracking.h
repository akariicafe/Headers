@interface ARCoachingHeuristicGeoTracking : ARCoachingHeuristic {
    long long _requirements;
}

- (long long)requirements;
- (BOOL)satisfied;
- (void)updateWithFrame:(id)a0 cache:(id)a1;

@end
