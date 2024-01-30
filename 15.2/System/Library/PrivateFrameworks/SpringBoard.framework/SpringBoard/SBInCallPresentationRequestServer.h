@class NSObject, NSString, FBServiceClientAuthenticator, NSMutableArray, BSServiceConnectionListener;
@protocol SBInCallPresentationRequestServerDelegate, OS_dispatch_queue;

@interface SBInCallPresentationRequestServer : NSObject <BSServiceConnectionListenerDelegate, SBSInCallPresentationClientToServerInterface, BSInvalidatable> {
    NSMutableArray *_targets;
    FBServiceClientAuthenticator *_clientAuthenticator;
    BSServiceConnectionListener *_connectionListener;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (weak, nonatomic) id<SBInCallPresentationRequestServerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)listener:(id)a0 didReceiveConnection:(id)a1 withContext:(id)a2;
- (void).cxx_destruct;
- (void)activate;
- (id)init;
- (void)invalidate;
- (oneway void)presentWithConfiguration:(id)a0 completion:(id /* block */)a1;

@end
