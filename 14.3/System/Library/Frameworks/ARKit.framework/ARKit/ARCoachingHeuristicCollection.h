@class NSMutableArray;

@interface ARCoachingHeuristicCollection : ARCoachingHeuristic {
    NSMutableArray *_heuristics;
}

- (void)clear;
- (id)init;
- (void).cxx_destruct;
- (long long)requirements;
- (void)addHeuristic:(id)a0;
- (void)updateWithFrame:(id)a0 cache:(id)a1;

@end
