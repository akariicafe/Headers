@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, TIAnalyticsServiceProvider;

@interface TIAnalyticsService : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, nonatomic) NSMutableDictionary *eventSpecs;
@property (readonly, nonatomic) id<TIAnalyticsServiceProvider> provider;

+ (id)sharedInstance;
+ (void)setMockInstance:(id)a0;

- (void)dispatchEventWithName:(id)a0 inputMode:(id)a1;
- (void)dispatchEventWithName:(id)a0 withCompletionHandler:(id /* block */)a1;
- (id)init;
- (BOOL)dispatchEventWithName:(id)a0 payload:(id)a1 testingParameters:(id)a2 allowSparsePayload:(BOOL)a3 error:(id *)a4;
- (void)_dispatchEventWithName:(id)a0 payload:(id)a1 values:(id)a2 inputMode:(id)a3 testingParameters:(id)a4 allowSparsePayload:(BOOL)a5 withCompletionHandler:(id /* block */)a6;
- (void)appendToErrors:(id)a0 code:(long long)a1 message:(id)a2;
- (void).cxx_destruct;
- (BOOL)dispatchEventWithName:(id)a0 inputMode:(id)a1 error:(id *)a2;
- (void)dispatchEventWithName:(id)a0 values:(id)a1 withCompletionHandler:(id /* block */)a2;
- (BOOL)dispatchEventWithName:(id)a0 values:(id)a1 error:(id *)a2;
- (id)settingsFromPayload:(id)a0 andValues:(id)a1 eventSpec:(id)a2 allowSparsePayload:(BOOL)a3 errors:(id)a4;
- (void)dispatchEventWithName:(id)a0 payload:(id)a1 testingParameters:(id)a2 allowSparsePayload:(BOOL)a3;
- (void)dispatchEventWithName:(id)a0;
- (BOOL)dispatchEventWithName:(id)a0 error:(id *)a1;
- (BOOL)dispatchEventWithName:(id)a0 values:(id)a1 inputMode:(id)a2 error:(id *)a3;
- (void)dispatchEventWithName:(id)a0 values:(id)a1;
- (void)registerEventSpec:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)dispatchEventWithName:(id)a0 inputMode:(id)a1 withCompletionHandler:(id /* block */)a2;
- (id)initWithProvider:(id)a0;
- (void)registerEventSpec:(id)a0;
- (void)queueCompletionHandler:(id /* block */)a0;
- (void)dispatchEventWithName:(id)a0 values:(id)a1 inputMode:(id)a2 withCompletionHandler:(id /* block */)a3;
- (void)sendCoreAnalyticsEventWithName:(id)a0 payload:(id)a1;
- (void)dispatchEventWithName:(id)a0 values:(id)a1 inputMode:(id)a2;
- (id)settingsFromInputMode:(id)a0 eventSpec:(id)a1 errors:(id)a2;
- (void)_registerEventSpec:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)addSettings:(id)a0 toPayload:(id)a1 errors:(id)a2;
- (void)dispatchEventWithName:(id)a0 payload:(id)a1 testingParameters:(id)a2 allowSparsePayload:(BOOL)a3 withCompletionHandler:(id /* block */)a4;
- (BOOL)registerEventSpec:(id)a0 error:(id *)a1;

@end
