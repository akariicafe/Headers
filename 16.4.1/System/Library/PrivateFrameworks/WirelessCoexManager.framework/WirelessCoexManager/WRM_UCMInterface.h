@class NSObject;
@protocol OS_xpc_object, OS_dispatch_queue;

@interface WRM_UCMInterface : NSObject {
    id /* block */ mBtConnectedLinksObserver;
    id /* block */ mNotificationBlock;
    NSObject<OS_xpc_object> *mConnection;
    int mProcessId;
    NSObject<OS_dispatch_queue> *mQueue;
}

- (void)reConnect;
- (void)unregisterClient;
- (void)dealloc;
- (void)registerClient:(int)a0 queue:(id)a1;
- (void)handleNotification:(id)a0 :(BOOL)a1;
- (id)init;
- (void)processBTConnectedLinksNotification:(id)a0;
- (void)setCriticalAirPlayEnabled:(BOOL)a0 estimatedDuration:(unsigned int)a1 criticalityPercentage:(unsigned short)a2;
- (void)subscribeBtConnectedLinksNotification:(id /* block */)a0;

@end
