@class NSObject;
@protocol OS_dispatch_queue;

@interface BRCFileProviderDaemonUtils : NSObject {
    NSObject<OS_dispatch_queue> *_timerQueue;
    BOOL _inSyncBubble;
    BOOL _isFPFS;
}

- (void).cxx_destruct;
- (void)_waitForFPToBeReadyToAcceptXPCAndExecuteBlock:(id /* block */)a0 checkIntervalInSec:(unsigned char)a1 retries:(int)a2;
- (id)initWithSyncBubble:(BOOL)a0 isFPFS:(BOOL)a1;
- (void)waitForFPToBeReadyToAcceptXPCAndExecuteBlock:(id /* block */)a0;

@end
