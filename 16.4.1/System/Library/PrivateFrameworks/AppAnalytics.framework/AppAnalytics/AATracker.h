@class NSArray, NSString;

@interface AATracker : NSObject {
    void /* unknown type, empty encoding */ name;
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ tracker;
    void /* unknown type, empty encoding */ eventMirrorStore;
}

@property (nonatomic, readonly) NSArray *path;
@property (nonatomic, readonly) NSArray *debugPath;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *identifier;

- (void)suspend;
- (void)resume;
- (void)enterGroup;
- (void)leaveGroup;
- (void)enterGroupWithName:(id)a0 contentType:(long long)a1;
- (void)pushDataEvent:(id)a0 traits:(id)a1 file:(id)a2 line:(long long)a3;
- (id)chainWithName:(id)a0;
- (void)clearStackEventType:(Class)a0 includeParentTrackers:(BOOL)a1;
- (void)explicitSubmitEvent:(Class)a0 submitTime:(id)a1;
- (id)chainWithName:(id)a0 identifier:(id)a1;
- (void)clearStack:(Class)a0;
- (void)submitRawEvent:(id)a0;
- (id)delayedSubmitEventType:(Class)a0;
- (id)delayedSubmitEventType:(Class)a0 completion:(id /* block */)a1;
- (id)delayedSubmitEventType:(Class)a0 onlyIfTimed:(BOOL)a1;
- (id)delayedSubmitEventType:(Class)a0 onlyIfTimed:(BOOL)a1 completion:(id /* block */)a2;
- (id)delayedSubmitRawEvent:(id)a0;
- (id)delayedSubmitRawEvent:(id)a0 completion:(id /* block */)a1;
- (id)delayedSubmitRawEvent:(id)a0 onlyIfTimed:(BOOL)a1;
- (id)delayedSubmitRawEvent:(id)a0 onlyIfTimed:(BOOL)a1 completion:(id /* block */)a2;
- (void)dynamicTransactionWithIdentifier:(id)a0 block:(id /* block */)a1;
- (void)enterGroupWithName:(id)a0;
- (void)explicitSubmitEvent:(Class)a0 onlyIfTimed:(BOOL)a1 submitTime:(id)a2;
- (void)explicitSubmitEvent:(Class)a0 onlyIfTimed:(BOOL)a1 submitTime:(id)a2 completion:(id /* block */)a3;
- (void)explicitSubmitEvent:(Class)a0 submitTime:(id)a1 completion:(id /* block */)a2;
- (void)explicitSubmitRawEvent:(id)a0 onlyIfTimed:(BOOL)a1 submitTime:(id)a2;
- (void)explicitSubmitRawEvent:(id)a0 onlyIfTimed:(BOOL)a1 submitTime:(id)a2 completion:(id /* block */)a3;
- (void)explicitSubmitRawEvent:(id)a0 submitTime:(id)a1;
- (void)explicitSubmitRawEvent:(id)a0 submitTime:(id)a1 completion:(id /* block */)a2;
- (void)ifSession:(id /* block */)a0;
- (id)onSessionChangeWithBlock:(id /* block */)a0;
- (void)popDataEventByName:(id)a0;
- (void)popDataEventType:(Class)a0;
- (void)registerDataEventType:(Class)a0 block:(id /* block */)a1;
- (void)removeSessionObserversForObject:(id)a0;
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
- (void)transactionWithBlock:(id /* block */)a0;
- (void)whenSession:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;

@end
