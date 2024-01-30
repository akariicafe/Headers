@class NSArray;

@interface TRIImmediateDownloadTelemetryGenerator : NSObject {
    BOOL _allowExpensiveNetworking;
    long long _latencyMilliseconds;
    NSArray *_telemetry;
}

- (id)latencyMetric;
- (id)initWithLatencyMilliseconds:(long long)a0 allowExpensiveNetworking:(BOOL)a1 existingTelemetry:(id)a2;
- (id)rolloutSystemTelemetry;
- (void).cxx_destruct;

@end
