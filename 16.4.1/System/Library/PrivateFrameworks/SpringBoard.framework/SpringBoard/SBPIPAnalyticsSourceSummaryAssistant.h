@interface SBPIPAnalyticsSourceSummaryAssistant : SBPIPAnalyticsAssistant {
    BOOL _PIPBecameActive;
    double _possibleDuration;
    double _possibleTimestamp;
}

- (id)analyticsIdentifier;
- (void)invalidate;
- (id)_generateMutableAnalyticsPayload;
- (id)initWithBundleIdentifier:(id)a0 contentType:(long long)a1 isAutoPIPEnabled:(BOOL)a2 invalidationBlock:(id /* block */)a3;
- (void)noteBecameActiveAtTime:(double)a0;
- (void)notePIPBecamePossibleAtTime:(double)a0;
- (void)notePIPBecameProhibitedAtTime:(double)a0;

@end
