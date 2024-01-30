@class NSObject;
@protocol OS_dispatch_queue;

@interface TICoreAnalyticsEventController : NSObject {
    NSObject<OS_dispatch_queue> *_workQueue;
}

+ (void)registerScheduledEventsActivity;

- (id)init;
- (void).cxx_destruct;
- (id)adjustValue:(id)a0 forFieldSpec:(id)a1;
- (id)adjustValues:(id)a0 forFieldSpec:(id)a1;
- (void)dispatchEventWithDescriptor:(id)a0 andSpec:(id)a1 withProvider:(id)a2 andContext:(id)a3 andMetrics:(id)a4 completionHandler:(id /* block */)a5;
- (void)dispatchEventWithName:(id)a0 payload:(id)a1 testingParameters:(id)a2 eventSpec:(id)a3 completionHandler:(id /* block */)a4;
- (void)dispatchEventsFromRegistry:(id)a0 withProvider:(id)a1 andContext:(id)a2 andMetrics:(id)a3 completionHandler:(id /* block */)a4;
- (void)dispatchScheduledEventsWithCompletionHandler:(id /* block */)a0;
- (void)queueScheduledEventsWithCompletionHandler:(id /* block */)a0;

@end
