@class NSString;

@interface MXService : NSObject

@property (readonly) BOOL isStarted;
@property (readonly) long long sourceID;
@property (retain) NSString *currentClient;

- (BOOL)stopService;
- (void).cxx_destruct;
- (id)init;
- (BOOL)startService;
- (id)getDiagnosticsForClient:(id)a0 dateString:(id)a1;
- (BOOL)metricsSupported;
- (BOOL)metricsAvailable;
- (id)getMetricsForClient:(id)a0;
- (id)initWithSourceID:(long long)a0;
- (id)pruneSourceData:(id)a0;
- (BOOL)diagnosticsAvailable;
- (BOOL)diagnosticsSupported;

@end
