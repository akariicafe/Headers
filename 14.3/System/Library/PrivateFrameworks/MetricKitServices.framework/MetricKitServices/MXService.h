@interface MXService : NSObject

@property (readonly) BOOL isStarted;
@property (readonly) long long sourceID;

- (id)init;
- (BOOL)stopService;
- (BOOL)startService;
- (BOOL)metricsSupported;
- (BOOL)metricsAvailableForDate:(id)a0;
- (BOOL)diagnosticsSupported;
- (BOOL)diagnosticsAvailableForDate:(id)a0;
- (id)getMetricsForClient:(id)a0 dateString:(id)a1;
- (id)getDiagnosticsForClient:(id)a0 dateString:(id)a1;
- (id)initWithSourceID:(long long)a0;
- (id)pruneSourceData:(id)a0;

@end
