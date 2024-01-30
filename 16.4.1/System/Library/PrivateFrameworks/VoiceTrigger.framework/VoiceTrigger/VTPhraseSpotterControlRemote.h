@class NSString, VTPeerRemoteConnection, NSObject;
@protocol OS_dispatch_queue, VTPhraseSpotterControlRemoteDelegate;

@interface VTPhraseSpotterControlRemote : NSObject <VTPeerRemoteConnectionDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    VTPeerRemoteConnection *_peerConnection;
    id<VTPhraseSpotterControlRemoteDelegate> _delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (void)remoteConnection:(id)a0 handleMessageType:(unsigned long long)a1 completion:(id /* block */)a2;

@end
