@interface ARCoachingHeuristicTracking : ARCoachingHeuristic {
    long long _requirements;
}

- (BOOL)satisfied;
- (long long)requirements;
- (void)updateWithFrame:(id)a0 cache:(id)a1;

@end
