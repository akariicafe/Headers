@interface ARCoachingHeuristicDelay : ARCoachingHeuristic {
    double _endTime;
    double _duration;
}

- (id)initWithDuration:(double)a0;
- (long long)requirements;
- (void)updateWithFrame:(id)a0 cache:(id)a1;

@end
