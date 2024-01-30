@class NSArray;

@interface TRISetupAssistantFetchTelemetryGenerator : NSObject {
    long long _latencyMilliseconds;
    NSArray *_telemetry;
}

- (void).cxx_destruct;
- (id)initWithDeadlineTimestamp:(id)a0 referenceDate:(id)a1 existingTelemetry:(id)a2;
- (id)latencyMetric;
- (id)rolloutSystemTelemetry;

@end
