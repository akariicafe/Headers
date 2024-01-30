@class NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface SiriAnalyticsSensitiveConditionsObservers : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_observers;
}

- (void)addSensitiveConditionsObserver:(id)a0;
- (void)pollAllObserversWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;

@end
