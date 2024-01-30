@class SFSession, SFService, SFDevice, NSObject, NSData;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_transaction;

@interface SFPINPairSession : NSObject {
    BOOL _activateCalled;
    BOOL _clientStarted;
    NSData *_clientSessionUUID;
    BOOL _invalidateCalled;
    unsigned long long _heartbeatLastTicks;
    NSObject<OS_dispatch_source> *_heartbeatTimer;
    BOOL _heartbeatSending;
    BOOL _pairSetupDone;
    struct PairingSessionPrivate { } *_pairSetupSession;
    BOOL _pairSetupWaitingForUser;
    BOOL _pairVerifyDone;
    struct PairingSessionPrivate { } *_pairVerifySession;
    SFSession *_sfSession;
    BOOL _sfSessionActivated;
    unsigned long long _startTicks;
    NSObject<OS_os_transaction> *_transaction;
}

@property (copy, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (retain, nonatomic) SFDevice *peerDevice;
@property (retain, nonatomic) SFService *sfService;
@property (copy, nonatomic) id /* block */ promptForPINHandler;
@property (copy, nonatomic) id /* block */ showPINHandler;
@property (copy, nonatomic) id /* block */ hidePINHandler;

- (void)_cleanup;
- (void)_completed:(int)a0;
- (void)_activate;
- (void)dealloc;
- (id)init;
- (void)activate;
- (void)invalidate;
- (void)_invalidate;
- (void).cxx_destruct;
- (void)_clientHeartbeatSend;
- (void)_clientPairSetup:(id)a0 start:(BOOL)a1;
- (void)_clientPairVerify:(id)a0 start:(BOOL)a1;
- (void)_clientRun;
- (void)_clientSFSessionStart;
- (void)_clientTryPIN:(id)a0;
- (void)_handleServerRequest:(id)a0;
- (void)_hearbeatTimer;
- (void)clientTryPIN:(id)a0;
- (void)handleServerHeartbeat:(id)a0;
- (void)handleServerPairSetup:(id)a0 reset:(BOOL)a1;
- (void)handleServerPairVerify:(id)a0 reset:(BOOL)a1;
- (void)handleServerRequest:(id)a0;

@end
