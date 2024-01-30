@class BSServiceConnection, NSString, NSObject;
@protocol OS_dispatch_queue, BSServiceConnectionClient, _UIOverlayServiceDelegate;

@interface _UIOverlayService : NSObject <_UIOverlayServiceServerToClientInterface>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *connectionQueue;
@property (retain, nonatomic) BSServiceConnection<BSServiceConnectionClient> *serviceConnection;
@property (weak, nonatomic) id<_UIOverlayServiceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_asyncTargetWithHandler:(id /* block */)a0;
- (void)_makeConnectionIfNecessaryWithConnectionHandler:(id /* block */)a0;
- (oneway void)handleOverlayResponse:(id)a0;
- (void)prewarmConnection;
- (void)sendOverlayAction:(id)a0;

@end
