@class NSString, NSMutableDictionary, BMStoreEvent, NSObject, DNDSAppForegroundTriggerConfiguration;
@protocol DNDSBiomeTriggerManagerDataSource, OS_os_transaction, OS_dispatch_source, OS_dispatch_queue, DNDSAppForegroundTriggerManagerDataSource;

@interface DNDSAppForegroundTriggerManager : NSObject <DNDSBiomeTriggerManager> {
    NSObject<OS_dispatch_queue> *_biomeQueue;
    NSObject<OS_dispatch_source> *_coalescingTimer;
    NSObject<OS_dispatch_queue> *_coalescingQueue;
    NSMutableDictionary *_sinks;
    DNDSAppForegroundTriggerConfiguration *_currentTriggerConfiguration;
    BMStoreEvent *_latestEvent;
    NSObject<OS_os_transaction> *_eventCoalescingTransaction;
}

@property (weak, nonatomic) id<DNDSAppForegroundTriggerManagerDataSource, DNDSBiomeTriggerManagerDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_coalescingQueue_refreshWithTriggerConfiguration:(id)a0;
- (void)_refreshWithTriggerConfiguration:(id)a0 event:(id)a1;
- (void)_configureAppForegroundTriggerWithConfiguration:(id)a0;
- (void)_coalescingQueue_coalesceWithTriggerConfiguration:(id)a0 event:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)_coalescingQueue_resetCoalescingTimer;
- (void)refresh;
- (void)_refreshIfNeccessaryForEvent:(id)a0;

@end
