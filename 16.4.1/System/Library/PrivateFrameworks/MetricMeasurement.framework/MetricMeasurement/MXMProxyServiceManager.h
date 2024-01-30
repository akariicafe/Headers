@class NSXPCConnection;
@protocol MetricMeasurementHelperProtocol_Internal;

@interface MXMProxyServiceManager : NSObject

@property (class, readonly) MXMProxyServiceManager *shared;

@property (readonly) id<MetricMeasurementHelperProtocol_Internal> _proxyObject;
@property (readonly) NSXPCConnection *_serviceConnection;

- (BOOL)wake;
- (id)initInternal;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_quiesceBeforeIteration:(double)a0 timeout:(double)a1 response:(id /* block */)a2;
- (id)_sampleWithProxyMetric:(id)a0 timeout:(double)a1 stopReason:(unsigned long long *)a2;
- (void)_startPerformanceTrace:(id)a0 response:(id /* block */)a1;
- (void)_stopPerformanceTrace:(id /* block */)a0;

@end
