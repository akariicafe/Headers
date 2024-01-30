@class NSString, TCSCall, NSXPCConnection;
@protocol TCSCallCenterDelegate;

@interface TCSCallCenter : NSObject <TCSClientXPC> {
    NSXPCConnection *_connection;
    TCSCall *_call;
}

@property (weak, nonatomic) id<TCSCallCenterDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)applicationWillEnterForeground;
- (void).cxx_destruct;
- (id)init;
- (void)invalidate;
- (void)callStatusChanged:(id)a0;
- (void)disconnectCall:(id)a0;
- (id)activeCall;
- (BOOL)hasValidConnection;
- (id)currentCall;
- (void)sessionViewControllerViewDidAppear;
- (void)setUplinkMuted:(BOOL)a0 for:(id)a1 completion:(id /* block */)a2;
- (void)queryIsTinCannable:(id)a0;
- (void)callConnected:(id)a0;
- (void)remoteUplinkMuteChanged:(id)a0;
- (void)synchronouslyFetchCall;
- (id)_callPassingPredicate:(id /* block */)a0;
- (id)ringingCall;
- (id)endingCall;
- (void)logEntryForCallWithUniqueProxyIdentifier:(id)a0 completion:(id /* block */)a1;

@end
