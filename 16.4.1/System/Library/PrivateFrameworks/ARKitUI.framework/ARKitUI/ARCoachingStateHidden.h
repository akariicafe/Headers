@interface ARCoachingStateHidden : ARCoachingState {
    double _autoActivateTime;
    BOOL _minimumWaitComplete;
}

- (void)enter;
- (void)exit;
- (id)doAction:(long long)a0;
- (BOOL)isViewActiveForState;

@end
