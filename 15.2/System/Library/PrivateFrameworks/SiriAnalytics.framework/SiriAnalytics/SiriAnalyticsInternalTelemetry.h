@interface SiriAnalyticsInternalTelemetry : NSObject

- (void)trackEventEmitted:(id)a0;
- (void)_trackLogicalClock:(id)a0 isDerivativeClock:(BOOL)a1;
- (void)trackEmittedEvents:(id)a0;
- (void)trackLogicalClock:(id)a0;

@end
