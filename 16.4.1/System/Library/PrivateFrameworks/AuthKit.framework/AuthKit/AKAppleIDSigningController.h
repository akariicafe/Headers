@class NSXPCListenerEndpoint, NSString, NSXPCConnection, NSObject, AKAppleIDAuthenticationController;
@protocol OS_dispatch_queue;

@interface AKAppleIDSigningController : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _signerLock;
    NSObject<OS_dispatch_queue> *_signingQueue;
    NSXPCListenerEndpoint *_listenerEndpoint;
    NSXPCConnection *_connection;
}

@property (retain, nonatomic) AKAppleIDAuthenticationController *authenticationController;
@property (nonatomic) BOOL shouldSendAbsintheHeader;
@property (nonatomic) BOOL isProxy;
@property (retain, nonatomic) NSString *initialURLKey;

- (void)_connectionInterrupted;
- (id)initWithDaemonXPCEndpoint:(id)a0;
- (void)dealloc;
- (id)init;
- (void)_connectionInvalidated;
- (id)_connection;
- (void).cxx_destruct;
- (void)_additionalAbsintheHeadersForRequest:(id)a0 completion:(id /* block */)a1;
- (void)_additionalAttestationHeadersForRequest:(id)a0 options:(id)a1 completion:(id /* block */)a2;
- (void)absintheSignatureForData:(id)a0 completion:(id /* block */)a1;
- (void)attestationDataForRequest:(id)a0 completion:(id /* block */)a1;
- (void)signWithBAAHeaders:(id)a0 completion:(id /* block */)a1;
- (void)signaturesForData:(id)a0 options:(id)a1 completion:(id /* block */)a2;
- (void)signingHeadersForRequest:(id)a0 completion:(id /* block */)a1;

@end
