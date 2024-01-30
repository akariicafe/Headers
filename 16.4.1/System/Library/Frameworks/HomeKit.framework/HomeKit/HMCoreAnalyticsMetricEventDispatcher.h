@interface HMCoreAnalyticsMetricEventDispatcher : HMFObject {
    id /* block */ _sendEventHandler;
}

- (void)sendEvent:(id)a0;
- (id)initWithSendEventHandler:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;

@end
