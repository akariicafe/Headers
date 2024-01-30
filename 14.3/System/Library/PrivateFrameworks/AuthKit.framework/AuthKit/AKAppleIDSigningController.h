@class NSXPCListenerEndpoint, NSXPCConnection, NSObject, AKAppleIDAuthenticationController;
@protocol OS_dispatch_queue;

@interface AKAppleIDSigningController : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _signerLock;
    NSObject<OS_dispatch_queue> *_signingQueue;
    NSXPCListenerEndpoint *_listenerEndpoint;
    NSXPCConnection *_connection;
}

@property (retain, nonatomic) AKAppleIDAuthenticationController *authenticationController;
@property (nonatomic) BOOL isProxy;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDaemonXPCEndpoint:(id)a0;
- (void)dealloc;
- (id)_connection;
- (void)_connectionInvalidated;
- (void)signaturesForData:(id)a0 options:(id)a1 completion:(id /* block */)a2;
- (void)_connectionInterrupted;
- (void)absintheSignatureForData:(id)a0 completion:(id /* block */)a1;
- (void)_additionalAbsintheHeadersForRequest:(id)a0 completion:(id /* block */)a1;
- (void)_additionalAttestationHeadersForRequest:(id)a0 withInterval:(id)a1 completion:(id /* block */)a2;
- (void)signingHeadersForRequest:(id)a0 completion:(id /* block */)a1;

@end
