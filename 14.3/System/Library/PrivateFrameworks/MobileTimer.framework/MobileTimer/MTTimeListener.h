@class MTObserverStore, NSString, NSObject;
@protocol OS_dispatch_queue, NAScheduler;

@interface MTTimeListener : NSObject <MTAgentNotificationListener>

@property (retain, nonatomic) id<NAScheduler> serializer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) MTObserverStore *observers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleNotification:(id)a0 ofType:(long long)a1 completion:(id /* block */)a2;
- (BOOL)handlesNotification:(id)a0 ofType:(long long)a1;
- (id)initWithCallbackScheduler:(id)a0;
- (void)registerObserver:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (double)assertionTimeOutForNotification:(id)a0 ofType:(long long)a1;

@end
