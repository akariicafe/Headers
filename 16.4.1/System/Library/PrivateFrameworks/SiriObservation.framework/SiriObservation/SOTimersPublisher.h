@class SOTimersSnapshot, NSString, NSHashTable, NSObject, MTTimerManager;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface SOTimersPublisher : NSObject {
    NSObject<OS_dispatch_queue> *_timersPublisherQueue;
    NSObject<OS_dispatch_group> *_timersPublisherDispatchGroup;
    NSHashTable *_subscribers;
    MTTimerManager *_timerManager;
    SOTimersSnapshot *_timerSnapshot;
}

@property (readonly, nonatomic) NSString *typeName;

- (void)timerFired:(id)a0;
- (void)timersAdded:(id)a0;
- (void)firingTimerDismissed:(id)a0;
- (void)_startObserving;
- (void)timersRemoved:(id)a0;
- (void)timersUpdated:(id)a0;
- (void)stateReset:(id)a0;
- (void)dealloc;
- (id)init;
- (void)firingTimerChanged:(id)a0;
- (void).cxx_destruct;
- (void)addSubscriber:(id)a0;
- (void)removeSubscriber:(id)a0;
- (void)_createNewSnapshotWithCompletion:(id /* block */)a0;
- (void)_notifySubscribersOfEvent:(long long)a0;
- (void)getCurrentSnapshotWithCompletion:(id /* block */)a0;

@end
