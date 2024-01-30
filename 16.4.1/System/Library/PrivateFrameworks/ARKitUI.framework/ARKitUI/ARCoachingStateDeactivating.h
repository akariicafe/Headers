@class ARCoachingState;

@interface ARCoachingStateDeactivating : ARCoachingState {
    ARCoachingState *_nextState;
}

- (void)enter;
- (void).cxx_destruct;
- (id)doAction:(long long)a0;
- (BOOL)isViewActiveForState;

@end
