@class BSServiceConnectionListener, FBServiceClientAuthenticator, NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, SBFocusModesHomeScreenSettingsServerDelegate;

@interface SBFocusModesHomeScreenSettingsServer : NSObject <BSServiceConnectionListenerDelegate, SBSFocusModesHomeScreenSettingsClientToServerInterface>

@property (readonly, nonatomic) FBServiceClientAuthenticator *authenticator;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, copy, nonatomic) NSMutableArray *connections;
@property (readonly, nonatomic) BSServiceConnectionListener *listener;
@property (weak, nonatomic) id<SBFocusModesHomeScreenSettingsServerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (oneway void)homeScreenSnapshotsWithRequest:(id)a0 completion:(id /* block */)a1;
- (oneway void)updateFocusModeHomeScreenSettingsWithRequest:(id)a0;
- (void)listener:(id)a0 didReceiveConnection:(id)a1 withContext:(id)a2;
- (void).cxx_destruct;
- (void)activate;
- (id)init;

@end
