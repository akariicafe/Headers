@interface SiriAnalyticsLocalStorageDispatcher : NSObject <SiriAnalyticsMessageStorage> {
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ messageStore;
    void /* unknown type, empty encoding */ legacyStorage;
}

- (id)init;
- (id)initWithQueue:(id)a0 messageStore:(id)a1 legacyStorage:(id)a2;
- (void)storeMessages:(id)a0;
- (void).cxx_destruct;

@end
