@class NSString, CATRemoteConnection, NSMutableDictionary;
@protocol CATRemoteTransportDelegate;

@interface CATRemoteTransport : CATTransport <CATRemoteConnectionDelegate> {
    CATRemoteConnection *mConnection;
    NSMutableDictionary *mOperationByUUID;
    BOOL mConnectionHasOpened;
}

@property (weak, nonatomic) id<CATRemoteTransportDelegate> remoteTransportDelegate;
@property (readonly, nonatomic) struct __SecTrust { } *peerTrust;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;
+ (void)createRemoteTransportPairWithTransport:(id *)a0 andTransport:(id *)a1;

- (void)invalidateConnection;
- (void)resumeConnection;
- (id)operationToSendMessage:(id)a0;
- (void)connection:(id)a0 didFailToSendData:(id)a1 userInfo:(id)a2 error:(id)a3;
- (void)suspendConnection;
- (id)initWithRemoteConnection:(id)a0;
- (void)connectionDidSecure:(id)a0;
- (void)connection:(id)a0 encounteredTrustDecisionWhileTryingToSecure:(id)a1;
- (void)remoteTransportSendMessageOperation:(id)a0 sendData:(id)a1;
- (void)connectionDidClose:(id)a0;
- (void)connectionWillSecure:(id)a0;
- (id)init;
- (void)setName:(id)a0;
- (void)connection:(id)a0 didInterruptWithError:(id)a1;
- (void)connection:(id)a0 didReceiveData:(id)a1;
- (void).cxx_destruct;
- (id)name;
- (void)connection:(id)a0 didSendData:(id)a1 userInfo:(id)a2;

@end
