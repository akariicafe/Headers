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

- (id)initWithRemoteConnection:(id)a0;
- (id)operationToSendMessage:(id)a0;
- (void)setName:(id)a0;
- (void)invalidateConnection;
- (id)init;
- (void).cxx_destruct;
- (void)connection:(id)a0 didInterruptWithError:(id)a1;
- (void)connection:(id)a0 didFailToSendData:(id)a1 userInfo:(id)a2 error:(id)a3;
- (void)connection:(id)a0 didReceiveData:(id)a1;
- (void)resumeConnection;
- (void)connectionDidSecure:(id)a0;
- (void)connection:(id)a0 didSendData:(id)a1 userInfo:(id)a2;
- (void)connectionWillSecure:(id)a0;
- (void)suspendConnection;
- (void)remoteTransportSendMessageOperation:(id)a0 sendData:(id)a1;
- (id)name;
- (void)connectionDidClose:(id)a0;
- (void)connection:(id)a0 encounteredTrustDecisionWhileTryingToSecure:(id)a1;

@end
