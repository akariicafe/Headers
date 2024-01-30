@interface ARCoachingStateHidden : ARCoachingState {
    double _autoActivateTime;
}

- (void)exit;
- (void)enter;
- (BOOL)isViewActiveForState;
- (id)doAction:(long long)a0;

@end
