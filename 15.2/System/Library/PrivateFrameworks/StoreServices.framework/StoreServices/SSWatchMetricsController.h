@class SSXPCConnection, SSWatchMetricsConfiguration, NSObject;
@protocol OS_dispatch_queue;

@interface SSWatchMetricsController : NSObject {
    SSXPCConnection *_connection;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (copy, nonatomic) SSWatchMetricsConfiguration *metricsConfiguration;

- (id)_connection;
- (BOOL)isEnabled;
- (void)insertEvent:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;

@end
