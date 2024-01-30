@class NSString, NSMutableSet, NSXPCListener;
@protocol MSAccountsImplementer;

@interface MSServer : NSObject <NSXPCListenerDelegate, MSAccountsImplementer, MediaServiceUpdatedClientDelegate> {
    NSXPCListener *_serverListener;
}

@property (retain) NSMutableSet *clients;
@property (weak, nonatomic) id<MSAccountsImplementer> accountsInterfaceDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)openConnection;
- (void)_handleClientConnectionInvalidated:(id)a0;
- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)initWithDelegate:(id)a0;
- (void)serviceSettingDidUpdate:(id)a0 homeUserID:(id)a1;
- (void)userDidRemoveService:(id)a0 homeUserID:(id)a1;
- (void)userDidUpdateDefaultService:(id)a0 homeUserID:(id)a1;
- (BOOL)_isConnectionEntitled:(id)a0;
- (void)getAvailableServices:(id)a0 userIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)getCachedAvailableServices:(id)a0 userIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)getCachedServiceInfo:(id)a0 homeUserID:(id)a1 completion:(id /* block */)a2;
- (void)requestAuthRenewalForMediaService:(id)a0 homeUserID:(id)a1 parentNetworkActivity:(id)a2 completion:(id /* block */)a3;
- (void)updateDefaultMediaService:(id)a0 homeID:(id)a1 homeUserID:(id)a2 completion:(id /* block */)a3;
- (void)getDefaultMediaService:(id)a0 homeUserID:(id)a1 completion:(id /* block */)a2;
- (void)removeMediaService:(id)a0 homeID:(id)a1 homeUserID:(id)a2 completion:(id /* block */)a3;
- (void)addMediaServiceToHome:(id)a0 homeID:(id)a1 homeUserID:(id)a2 completion:(id /* block */)a3;
- (void)updateProperty:(id)a0 homeID:(id)a1 homeUserID:(id)a2 withOptions:(id)a3 completion:(id /* block */)a4;
- (void)getServiceConfigurationInfo:(id)a0 completion:(id /* block */)a1;
- (void)getResolvedServiceInfo:(id)a0 sharedUserID:(id)a1 completion:(id /* block */)a2;
- (void)getDefaultMediaServiceForAllUsers:(id /* block */)a0;
- (void)getPublicInfoForBundleID:(id)a0 completion:(id /* block */)a1;
- (void)setVersion:(unsigned long long)a0 completion:(id /* block */)a1;

@end
