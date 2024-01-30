@interface HMCoreAnalyticsMetricEventDispatcher : HMFObject {
    id /* block */ _sendEventHandler;
}

- (void)sendEvent:(id)a0;
- (id)initWithSendEventHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;

@end
