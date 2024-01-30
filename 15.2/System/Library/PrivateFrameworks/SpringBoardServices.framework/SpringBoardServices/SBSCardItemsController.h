@class NSString, NSXPCConnection;

@interface SBSCardItemsController : NSObject <SBSCardItemsControllerRemoteInterface> {
    NSString *_identifier;
    NSXPCConnection *_connection;
    BOOL _connected;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_remoteInterfaceWithErrorHandler:(id /* block */)a0;
- (void)setCardItems:(id)a0;
- (id)initWithIdentifier:(id)a0;
- (void)_invalidateConnection;
- (void)getCardItemsWithHandler:(id /* block */)a0;
- (void)_connectToServerIfNecessary;
- (void).cxx_destruct;
- (void)_noteConnectionDropped;
- (void)dealloc;

@end
