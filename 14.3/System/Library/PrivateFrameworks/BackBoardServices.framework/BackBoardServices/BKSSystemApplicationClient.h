@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore, BKSSystemApplicationClientDelegate;

@interface BKSSystemApplicationClient : BSBaseXPCClient {
    NSObject<OS_dispatch_queue> *_callOutQueue;
    BOOL _pendingCheckIn;
    BOOL _sentConnect;
    BOOL _waitingForPing;
    NSObject<OS_dispatch_semaphore> *_checkinSemaphore;
    NSObject<OS_dispatch_semaphore> *_pingSemaphore;
}

@property (weak, nonatomic) id<BKSSystemApplicationClientDelegate> delegate;
@property (nonatomic) double systemIdleSleepInterval;

- (void)connect;
- (BOOL)ping;
- (void)_queue_handleWatchdogPing:(id)a0;
- (void)queue_connectionWasResumed;
- (void).cxx_destruct;
- (void)sendActions:(id)a0;
- (id)initWithCalloutQueue:(id)a0;
- (void)finishBooting;
- (void)_connect;
- (void)_sendMessageOfType:(long long)a0 packer:(id /* block */)a1 replyHandler:(id /* block */)a2;
- (void)checkInAndWaitForDataMigration:(BOOL)a0;
- (void)_sendMessageOfType:(long long)a0 packer:(id /* block */)a1;
- (void)queue_handleMessage:(id)a0;
- (void)queue_connectionWasInterrupted;
- (void)_sendMessageOfType:(long long)a0 packer:(id /* block */)a1 replyHandler:(id /* block */)a2 waitForReply:(BOOL)a3 waitDuration:(unsigned long long)a4;
- (void)queue_connectionWasInvalidated;

@end
