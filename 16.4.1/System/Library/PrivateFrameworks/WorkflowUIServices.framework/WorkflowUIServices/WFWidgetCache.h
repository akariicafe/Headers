@class NSMutableDictionary, NSString, WFWidgetWorkflowRequestQueue, NSObject;
@protocol OS_dispatch_queue, OS_os_log;

@interface WFWidgetCache : NSObject <WFObservableResultObserver>

@property (class, readonly, nonatomic) WFWidgetCache *sharedCache;

@property (readonly, nonatomic) NSMutableDictionary *resultsByIdentifier;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) WFWidgetWorkflowRequestQueue *requestQueue;
@property (readonly, nonatomic) NSObject<OS_os_log> *log;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)observableResultDidChange:(id)a0;
- (void)addDefaultShortcutsIfNecessary:(id /* block */)a0;
- (void)queue_getWidgetWorkflowWithIdentifier:(id)a0;
- (void)queue_getWidgetWorkflowsInCollectionWithIdentifier:(id)a0 limit:(unsigned long long)a1;
- (void)queue_notifyObserversOfChange:(id)a0 forIdentifier:(id)a1;
- (void)queue_storeAndNotifyWithResult:(id)a0 forIdentifier:(id)a1 resultsLimit:(unsigned long long)a2;
- (id)widgetWorkflowWithIdentifier:(id)a0;
- (id)widgetWorkflowsInCollectionWithIdentifier:(id)a0 limit:(unsigned long long)a1;

@end
