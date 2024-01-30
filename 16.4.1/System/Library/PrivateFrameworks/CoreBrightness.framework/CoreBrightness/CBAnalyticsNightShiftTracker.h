@interface CBAnalyticsNightShiftTracker : NSObject {
    double _modeChangeTimestamp;
    BOOL _isEnabled;
}

- (BOOL)isStarted;
- (void)update:(int)a0 isEnabled:(BOOL)a1;
- (void)start:(BOOL)a0;
- (void)stop:(int)a0 isEnabled:(BOOL)a1;
- (id)init;

@end
