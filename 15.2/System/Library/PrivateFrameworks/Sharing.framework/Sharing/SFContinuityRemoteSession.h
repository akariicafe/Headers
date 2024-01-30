@class SFSession, SFDevice, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface SFContinuityRemoteSession : NSObject {
    BOOL _activateCalled;
    id /* block */ _activateHandler;
    BOOL _invalidateCalled;
    NSMutableArray *_messageQueue;
    BOOL _pairVerifyDone;
    BOOL _pairVerifyRunning;
    SFSession *_sfSession;
    BOOL _sfSessionActivated;
    BOOL _started;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ interruptionHandler;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (retain, nonatomic) SFDevice *peerDevice;

- (void)_cleanup;
- (void)activateWithCompletion:(id /* block */)a0;
- (void)sendCommand:(int)a0;
- (void)_sfSessionStart;
- (void)_sendQueuedMesssages;
- (void)_sendCommand:(int)a0 options:(id)a1;
- (void)sendCommand:(int)a0 options:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)invalidate;
- (void)_run;
- (void)dealloc;

@end
