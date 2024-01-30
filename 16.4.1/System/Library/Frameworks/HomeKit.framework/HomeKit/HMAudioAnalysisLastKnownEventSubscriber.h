@class NSUUID, _HMContext, NSString, NSObject;
@protocol HMESubscriptionProviding, HMAudioAnalysisLastKnownEventSubscriberDelegate, HMAudioAnalysisLastKnownEventSubscriberDataSource, OS_dispatch_queue;

@interface HMAudioAnalysisLastKnownEventSubscriber : NSObject <HMEEventConsumer>

@property (readonly) _HMContext *context;
@property (readonly, weak) id<HMESubscriptionProviding> subscriptionProvider;
@property (readonly, copy) id<HMAudioAnalysisLastKnownEventSubscriberDataSource> dataSource;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, copy) NSUUID *homeIdentifier;
@property (weak) id<HMAudioAnalysisLastKnownEventSubscriberDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didReceiveCachedEvent:(id)a0 topic:(id)a1 source:(id)a2;
- (void)didReceiveEvent:(id)a0 topic:(id)a1;
- (void).cxx_destruct;
- (void)_didReceiveEvent:(id)a0;
- (id)initWithContext:(id)a0 subscriptionProvider:(id)a1 dataSource:(id)a2 workQueue:(id)a3;
- (void)subscribeLastKnownEventsForAccessory:(id)a0 completion:(id /* block */)a1;

@end
