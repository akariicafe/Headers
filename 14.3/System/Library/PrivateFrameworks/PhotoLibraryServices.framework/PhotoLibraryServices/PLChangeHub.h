@class PLChangeStore, NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface PLChangeHub : NSObject {
    BOOL _didInitializeState;
    NSObject<OS_dispatch_source> *_memoryPressureSource;
    NSObject<OS_dispatch_queue> *_eventsSerializationQueue;
    PLChangeStore *_changeStore;
}

@property (class) unsigned long long currentInMemoryEventIndex;

+ (id)sharedChangeHub;

- (id)init;
- (void).cxx_destruct;
- (void)sendPendingEventsForRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)clearChangeStore:(id /* block */)a0;
- (void)_onEventsQueueAsyncWithTransaction:(id)a0 perform:(id /* block */)a1;
- (void)_startListeningToMemoryPressureEvents;
- (unsigned long long)_inq_currentEventIndex;
- (void)fetchCurrentEventIndexWithCompletionHandler:(id /* block */)a0;
- (void)eventsSinceIndex:(unsigned long long)a0 filteredBy:(id /* block */)a1 onQueue:(id)a2 withBlock:(id /* block */)a3;
- (void)_inq_sendPendingEventsForRequest:(id)a0 completionHandler:(id /* block */)a1;

@end
