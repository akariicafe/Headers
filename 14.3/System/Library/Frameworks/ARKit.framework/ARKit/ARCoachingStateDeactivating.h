@class ARCoachingState;

@interface ARCoachingStateDeactivating : ARCoachingState {
    ARCoachingState *_nextState;
}

- (void).cxx_destruct;
- (void)enter;
- (BOOL)isViewActiveForState;
- (id)doAction:(long long)a0;

@end
