@class ARCoachingState;

@interface ARCoachingStateActivated : ARCoachingState {
    ARCoachingState *_nextState;
}

- (void).cxx_destruct;
- (void)enter;
- (id)doAction:(long long)a0;

@end
