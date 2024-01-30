@class NSString, NSXPCConnection, NSMutableSet, DIVerificationSessionContext;
@protocol DIVerificationServerSideProtocol;

@interface DIVClient : NSObject <DIVerificationClientSideProtocol> {
    unsigned long long _state;
    NSXPCConnection *_serverConnection;
    DIVerificationSessionContext *_context;
    id<DIVerificationServerSideProtocol> _remoteObjectProxy;
    NSMutableSet *_disconnectionCallbacks;
    BOOL _isDisconnected;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (void)invalidate;
- (void)dealloc;
- (void)performVerificationWithAttributes:(id)a0 completion:(id /* block */)a1;
- (void)shareVerificationResultWithOptions:(id)a0 completion:(id /* block */)a1;
- (void)configure:(id)a0 completion:(id /* block */)a1;
- (void)getVerificationResultWithOptions:(id)a0 completion:(id /* block */)a1;
- (void)concludeVerification:(id)a0;
- (void)confirmVerificationCompletedWithFeedback:(id)a0;
- (id)createDaemonDisconnectedError;

@end
