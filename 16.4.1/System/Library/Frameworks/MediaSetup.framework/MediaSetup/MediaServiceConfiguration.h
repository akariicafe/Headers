@class NSString, NSXPCConnection, NSObject;
@protocol OS_dispatch_queue, MSAccountsImplementer, MediaServiceUpdatedDelegate;

@interface MediaServiceConfiguration : NSObject <MediaServiceUpdatedServiceInterfaceDelegate> {
    NSXPCConnection *_connection;
    id<MSAccountsImplementer> _accountsImplementer;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (weak, nonatomic) id<MediaServiceUpdatedDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)_performBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;
- (void)getAvailableServices:(id)a0 completion:(id /* block */)a1;
- (void)getDefaultMediaService:(id)a0 completion:(id /* block */)a1;
- (void)removeServiceFromHome:(id)a0 fromHome:(id)a1 completion:(id /* block */)a2;
- (void)updateDefaultMediaService:(id)a0 forHome:(id)a1 completion:(id /* block */)a2;
- (void)updateProperty:(id)a0 forHome:(id)a1 withOptions:(id)a2 completion:(id /* block */)a3;
- (void)activeServiceApplicationInformationForSharedUserID:(id)a0 completionHandler:(id /* block */)a1;
- (void)addMediaServiceToHome:(id)a0 home:(id)a1 completion:(id /* block */)a2;
- (void)getCachedAvailableServices:(id)a0 completion:(id /* block */)a1;
- (void)getCachedServiceInfo:(id)a0 homeUserID:(id)a1 completion:(id /* block */)a2;
- (void)getCachedServiceInfo:(id)a0 homeUserID:(id)a1 endpointID:(id)a2 completion:(id /* block */)a3;
- (void)getDefaultMediaServiceForAllUsers:(id /* block */)a0;
- (void)getMediaServiceChoicesForAllUsers:(id /* block */)a0;
- (void)getPublicInfoForBundleID:(id)a0 completion:(id /* block */)a1;
- (void)getResolvedServiceAndUser:(id)a0 sharedUserID:(id)a1 completion:(id /* block */)a2;
- (void)getResolvedServiceInfo:(id)a0 completion:(id /* block */)a1;
- (void)getResolvedServiceInfo:(id)a0 sharedUserID:(id)a1 completion:(id /* block */)a2;
- (void)getServiceConfigurationInfo:(id)a0 completion:(id /* block */)a1;
- (void)getServiceConfigurationInfo:(id)a0 serviceID:(id)a1 completion:(id /* block */)a2;
- (void)overrideAppleMusicSubscriptionStatus:(BOOL)a0 homeUserIDS:(id)a1 completion:(id /* block */)a2;
- (void)requestAuthRenewalForMediaService:(id)a0 homeUserID:(id)a1 parentNetworkActivity:(id)a2 completion:(id /* block */)a3;
- (void)serviceSettingDidUpdate:(id)a0 homeUserID:(id)a1;
- (void)setVersion:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)switchUserAccountInfo:(id)a0 home:(id)a1 completion:(id /* block */)a2;
- (BOOL)thirdPartyMusicAvailable:(id)a0;
- (void)userDidRemoveService:(id)a0 homeUserID:(id)a1;
- (void)userDidUpdateDefaultService:(id)a0 homeUserID:(id)a1;

@end
