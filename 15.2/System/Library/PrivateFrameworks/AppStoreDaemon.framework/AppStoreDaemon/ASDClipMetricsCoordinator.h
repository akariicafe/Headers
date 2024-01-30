@protocol ASDClipServiceBroker;

@interface ASDClipMetricsCoordinator : NSObject {
    id<ASDClipServiceBroker> _broker;
}

- (void).cxx_destruct;
- (id)init;
- (void)sendClipCardMetricsEvent:(id)a0 completionHandler:(id /* block */)a1;

@end
