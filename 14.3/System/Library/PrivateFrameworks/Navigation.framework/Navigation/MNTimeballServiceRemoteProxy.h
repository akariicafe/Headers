@class NSString, MNTimeballSubscriberStore, NSXPCConnection;
@protocol MNTimeballServiceProxyDelegate;

@interface MNTimeballServiceRemoteProxy : NSObject <MNTimeballServiceProxyInterface, MNTimeballServiceProxyDelegate> {
    NSXPCConnection *_connection;
    MNTimeballSubscriberStore *_subscriberStore;
    BOOL _requestLeeching;
}

@property (nonatomic) id<MNTimeballServiceProxyDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)_closeConnection;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_openConnection;
- (id)_remoteObjectProxy;
- (void)invokeHandlerWithID:(id)a0 forDestination:(id)a1 update:(id)a2 error:(id)a3;
- (void)completedUpdateForHandlerID:(id)a0;
- (void)didReceiveError:(id)a0 forDestination:(id)a1;
- (void)didReceiveUpdate:(id)a0 forDestination:(id)a1;
- (void)requestRoutingOptions:(long long)a0 forDestinations:(id)a1 freshness:(id)a2 handlerID:(id)a3;
- (void)subscribeToDestination:(id)a0 options:(long long)a1 refreshPolicy:(unsigned long long)a2;
- (void)unsubscribeFromDestination:(id)a0;
- (void)subscribeToAllDestinations;
- (void)unsubscribeFromAllDestinations;
- (void)_registerForNavdRestart;

@end
