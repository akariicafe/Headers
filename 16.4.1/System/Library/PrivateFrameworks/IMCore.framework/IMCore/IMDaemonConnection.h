@protocol IMDaemonProtocol;

@interface IMDaemonConnection : NSObject {
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ requestQueue;
    void /* unknown type, empty encoding */ setupQueue;
    void /* unknown type, empty encoding */ unlockedConnection;
    void /* unknown type, empty encoding */ unlockedRemoteProxy;
    void /* unknown type, empty encoding */ unlockedSynchronousRemoteProxy;
    void /* unknown type, empty encoding */ unlockedShouldRequestSetup;
    void /* unknown type, empty encoding */ unlockedCapabilities;
    void /* unknown type, empty encoding */ unlockedContext;
    void /* unknown type, empty encoding */ unlockedOnSetupComplete;
    void /* unknown type, empty encoding */ unlockedPendingSetupInvocation;
    void /* unknown type, empty encoding */ unlockedIsInvokingSetup;
    void /* unknown type, empty encoding */ listener;
}

@property (nonatomic, readonly) BOOL isConnected;
@property (nonatomic, readonly) id<IMDaemonProtocol> remoteObjectProxy;
@property (nonatomic, readonly) id<IMDaemonProtocol> synchronousRemoteObjectProxy;
@property (nonatomic, copy) id /* block */ onSetupComplete;

- (void)requestSetup;
- (void)disconnect;
- (void)waitForSetup;
- (void)connectWithCapabilities:(unsigned long long)a0 context:(id)a1 contextChanged:(BOOL)a2;
- (void)requestSetupIfNeededWithCompletionHandler:(void (^)(void))a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithListener:(id)a0;

@end
