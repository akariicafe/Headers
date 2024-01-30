@interface SiriAnalyticsMessageProcessingStrategy : NSObject {
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ localStorageDispatcher;
    void /* unknown type, empty encoding */ debouncedFBF;
}

- (id)initWithQueue:(id)a0 localStorageDispatcher:(id)a1 featureFlags:(id)a2 fbf:(id)a3;
- (void)processWithMessages:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
