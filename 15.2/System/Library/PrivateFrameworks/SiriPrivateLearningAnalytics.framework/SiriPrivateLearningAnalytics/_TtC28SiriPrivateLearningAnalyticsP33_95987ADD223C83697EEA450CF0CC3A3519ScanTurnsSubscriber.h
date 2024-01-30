@interface _TtC28SiriPrivateLearningAnalyticsP33_95987ADD223C83697EEA450CF0CC3A3519ScanTurnsSubscriber : NSObject <BPSSubscriber> {
    void /* unknown type, empty encoding */ downstream;
    void /* unknown type, empty encoding */ innerSubscription;
    void /* unknown type, empty encoding */ eventTables;
    void /* unknown type, empty encoding */ endpointer;
}

- (void)receiveCompletion:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)receiveSubscription:(id)a0;
- (void)cancel;
- (long long)receiveInput:(id)a0;

@end
