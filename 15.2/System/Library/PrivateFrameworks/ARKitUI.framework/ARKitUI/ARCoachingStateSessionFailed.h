@class ARCoachingHeuristicCollection, ARCoachingState;

@interface ARCoachingStateSessionFailed : ARCoachingState {
    ARCoachingState *_nextState;
    ARCoachingHeuristicCollection *_heuristics;
}

- (id)initWithView:(id)a0;
- (void).cxx_destruct;
- (long long)requirements;
- (void)enter;
- (id)doAction:(long long)a0;

@end
