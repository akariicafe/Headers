@interface SiriAnalyticsPreprocessor : NSObject {
    void /* unknown type, empty encoding */ metastore;
    void /* unknown type, empty encoding */ prefs;
    void /* unknown type, empty encoding */ messageStore;
    void /* unknown type, empty encoding */ fbf;
    void /* unknown type, empty encoding */ telemetry;
    void /* unknown type, empty encoding */ queue;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithMetastore:(id)a0 prefs:(id)a1 messageStore:(id)a2 fbf:(id)a3 telemetry:(id)a4;
- (void)processWithReason:(long long)a0 completion:(id /* block */)a1;

@end
