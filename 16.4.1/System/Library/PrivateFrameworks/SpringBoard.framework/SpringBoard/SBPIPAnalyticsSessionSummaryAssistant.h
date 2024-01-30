@interface SBPIPAnalyticsSessionSummaryAssistant : SBPIPAnalyticsAssistant {
    double _stashedDuration;
    double _stashedTimestamp;
    long long _numberOfStashEvents;
    BOOL _restoredFullScreen;
    BOOL _startedAutomatically;
    BOOL _appStoppedSession;
}

- (id)analyticsIdentifier;
- (void)invalidate;
- (id)_generateMutableAnalyticsPayload;
- (id)initWithBundleIdentifier:(id)a0 contentType:(long long)a1 isAutoPIPEnabled:(BOOL)a2 invalidationBlock:(id /* block */)a3;
- (void)noteAppStoppedSession:(BOOL)a0;
- (void)noteBecameStashedAtTime:(double)a0;
- (void)noteBecameUnstashedAtTime:(double)a0;
- (void)noteRestoredFullScreen:(BOOL)a0;
- (void)noteStartedAutomatically:(BOOL)a0;

@end
