@interface SiriAnalyticsClockInactivityScheduler : NSObject {
    void /* unknown type, empty encoding */ interval;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ expiration;
    void /* unknown type, empty encoding */ inactivityTimer;
    void /* unknown type, empty encoding */ timerLock;
}

- (id)init;
- (void).cxx_destruct;
- (void)clockCreated;
- (void)clockExpiredWithCompletion:(id /* block */)a0;
- (void)clockForcefullyDestroyedWithCompletion:(id /* block */)a0;
- (id)initWithSeconds:(long long)a0 queue:(id)a1 expiration:(id /* block */)a2 creation:(id /* block */)a3;

@end
