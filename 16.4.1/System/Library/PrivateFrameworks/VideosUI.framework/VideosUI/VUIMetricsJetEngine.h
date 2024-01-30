@interface VUIMetricsJetEngine : NSObject {
    void /* unknown type, empty encoding */ sharedPipeline;
    void /* unknown type, empty encoding */ recorder;
}

@property (class, nonatomic, readonly) VUIMetricsJetEngine *sharedInstance;

@property (nonatomic, retain) void /* unknown type, empty encoding */ wrappedPipeline;

- (void)setMonitorsLifecycleEvents:(BOOL)a0;
- (id)init;
- (void).cxx_destruct;
- (void)flushMetrics;
- (void)flushMetricsWithCompletion:(id /* block */)a0;
- (BOOL)isSharedContent:(id)a0;
- (id)recordEventWithTopic:(id)a0 eventType:(id)a1 eventData:(id)a2 lastPageEvent:(id)a3;

@end
