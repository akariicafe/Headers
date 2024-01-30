@class NSObject;
@protocol OS_xpc_object, OS_dispatch_queue;

@interface WRMBasebandMetricsInterface : NSObject {
    id /* block */ metricsHandler;
    id /* block */ dataMetricsHandler;
    id /* block */ wifiMetricsHandler;
    id /* block */ mNotificationBlock;
    NSObject<OS_xpc_object> *mConnection;
    int mProcessId;
    NSObject<OS_dispatch_queue> *mQueue;
}

- (void)registerClient:(int)a0 queue:(id)a1;
- (void)reConnect;
- (id)init;
- (void)unregisterClient;
- (void)getNRPhyMetrics:(id /* block */)a0;
- (void)getCellularDataMetrics:(id /* block */)a0;
- (void)getWiFiBWEstimationMetrics:(id /* block */)a0;
- (void)getQSHMetrics:(id /* block */)a0;
- (void)handleNotification:(id)a0 wasInterupted:(BOOL)a1;
- (void)processWRMNrPhyMetrics:(id)a0;
- (void)processWRMCellDataMetrics:(id)a0;
- (void)processWRMWiFiBWEstMetrics:(id)a0;

@end
