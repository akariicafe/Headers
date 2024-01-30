@class NSString, NSHashTable, NSObject;
@protocol OS_dispatch_queue;

@interface SiriAnalyticsMessageObserverStream : NSObject <SiriAnalyticsMessageProducer, SiriAnalyticsObservableMessages> {
    NSObject<OS_dispatch_queue> *_queue;
    NSHashTable *_messageObservers;
    NSHashTable *_messageObserverDelegates;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_publishMessagesToAllObservers:(id)a0;
- (id)subscribeWithMessagesProduced:(id /* block */)a0;
- (void)_removeObserverHandle:(id)a0;
- (void)produceMessages:(id)a0 completion:(id /* block */)a1;
- (void)removeObserverDelegate:(id)a0;
- (void)addObserverDelegate:(id)a0;
- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;

@end
