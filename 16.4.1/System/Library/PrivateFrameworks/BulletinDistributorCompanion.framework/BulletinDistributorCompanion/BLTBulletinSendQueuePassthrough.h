@protocol BLTBulletinSendQueueDelegate;

@interface BLTBulletinSendQueuePassthrough : NSObject

@property (weak, nonatomic) id<BLTBulletinSendQueueDelegate> delegate;

- (void).cxx_destruct;
- (void)sendNow;
- (BOOL)handleFileURL:(id)a0;
- (void)queuePending;
- (void)sendRequest:(id)a0 type:(unsigned short)a1 didSend:(id /* block */)a2 didQueue:(id /* block */)a3;
- (void)sendRequest:(id)a0 withTimeout:(id)a1 isTrafficRestricted:(BOOL)a2 didSend:(id /* block */)a3;

@end
