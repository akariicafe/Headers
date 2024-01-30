@interface _TtC28SiriPrivateLearningAnalyticsP33_95987ADD223C83697EEA450CF0CC3A3519ScanTurnsSubscriber : NSObject <BPSSubscriber> {
    void /* unknown type, empty encoding */ downstream;
    void /* unknown type, empty encoding */ turnsStartDateTime;
    void /* unknown type, empty encoding */ innerSubscription;
    void /* unknown type, empty encoding */ eventTables;
    void /* unknown type, empty encoding */ endpointer;
}

- (long long)receiveInput:(id)a0;
- (void)receiveCompletion:(id)a0;
- (void)receiveSubscription:(id)a0;
- (void)cancel;
- (id)init;
- (void).cxx_destruct;

@end
