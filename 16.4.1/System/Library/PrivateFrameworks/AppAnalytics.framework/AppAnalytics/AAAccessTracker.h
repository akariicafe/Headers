@interface AAAccessTracker : NSObject {
    void /* unknown type, empty encoding */ accessTracker;
    void /* unknown type, empty encoding */ eventMirrorStore;
}

- (void)pushDataEvent:(id)a0 traits:(id)a1 file:(id)a2 line:(long long)a3;
- (void)submitRawEvent:(id)a0;
- (void)explicitSubmitEventType:(Class)a0 onlyIfTimed:(BOOL)a1 submitTime:(id)a2;
- (void)explicitSubmitEventType:(Class)a0 onlyIfTimed:(BOOL)a1 submitTime:(id)a2 completion:(id /* block */)a3;
- (void)explicitSubmitEventType:(Class)a0 submitTime:(id)a1;
- (void)explicitSubmitEventType:(Class)a0 submitTime:(id)a1 completion:(id /* block */)a2;
- (void)explicitSubmitRawEvent:(id)a0 onlyIfTimed:(BOOL)a1 submitTime:(id)a2;
- (void)explicitSubmitRawEvent:(id)a0 onlyIfTimed:(BOOL)a1 submitTime:(id)a2 completion:(id /* block */)a3;
- (void)explicitSubmitRawEvent:(id)a0 submitTime:(id)a1;
- (void)explicitSubmitRawEvent:(id)a0 submitTime:(id)a1 completion:(id /* block */)a2;
- (id)peekDataEventByName:(id)a0;
- (void)popDataEventByName:(id)a0;
- (void)popDataEventType:(Class)a0;
- (void)submitEventType:(Class)a0;
- (void)submitEventType:(Class)a0 completion:(id /* block */)a1;
- (void)submitEventType:(Class)a0 onlyIfTimed:(BOOL)a1;
- (void)submitEventType:(Class)a0 onlyIfTimed:(BOOL)a1 completion:(id /* block */)a2;
- (void)submitRawEvent:(id)a0 completion:(id /* block */)a1;
- (void)submitRawEvent:(id)a0 onlyIfTimed:(BOOL)a1;
- (void)submitRawEvent:(id)a0 onlyIfTimed:(BOOL)a1 completion:(id /* block */)a2;
- (void)timeEventType:(Class)a0;
- (void)timeEventType:(Class)a0 startTime:(id)a1;
- (void)timeEventType:(Class)a0 submitAndRestartWithSession:(BOOL)a1;
- (void)timeEventType:(Class)a0 submitAndRestartWithSession:(BOOL)a1 startTime:(id)a2;
- (void)timeRawEvent:(id)a0;
- (void)timeRawEvent:(id)a0 startTime:(id)a1;
- (void)timeRawEvent:(id)a0 submitAndRestartWithSession:(BOOL)a1;
- (void)timeRawEvent:(id)a0 submitAndRestartWithSession:(BOOL)a1 startTime:(id)a2;
- (id)init;
- (void).cxx_destruct;

@end
