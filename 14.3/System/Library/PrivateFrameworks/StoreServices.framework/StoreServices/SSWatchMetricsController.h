@class SSXPCConnection, SSWatchMetricsConfiguration, NSObject;
@protocol OS_dispatch_queue;

@interface SSWatchMetricsController : NSObject {
    SSXPCConnection *_connection;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (copy, nonatomic) SSWatchMetricsConfiguration *metricsConfiguration;

- (id)init;
- (void).cxx_destruct;
- (void)insertEvent:(id)a0 withCompletionHandler:(id /* block */)a1;
- (id)_connection;
- (BOOL)isEnabled;

@end
