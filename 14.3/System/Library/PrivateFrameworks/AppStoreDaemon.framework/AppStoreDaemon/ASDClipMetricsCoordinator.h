@protocol ASDClipServiceBroker;

@interface ASDClipMetricsCoordinator : NSObject {
    id<ASDClipServiceBroker> _broker;
}

- (id)init;
- (void).cxx_destruct;
- (void)sendClipCardMetricsEvent:(id)a0 completionHandler:(id /* block */)a1;

@end
