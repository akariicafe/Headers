@interface ARCoachingHeuristicDelay : ARCoachingHeuristic {
    double _endTime;
    double _duration;
}

- (long long)requirements;
- (id)initWithDuration:(double)a0;
- (void)updateWithFrame:(id)a0 cache:(id)a1;

@end
