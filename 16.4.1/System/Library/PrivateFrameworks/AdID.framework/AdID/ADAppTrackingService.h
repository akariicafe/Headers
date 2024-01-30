@class NSXPCListener, NSString;

@interface ADAppTrackingService : ADSingleton <NSXPCListenerDelegate, ADAppTracking_XPC>

@property (retain) NSXPCListener *listener;
@property (nonatomic) BOOL requestInFlight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)reconcileDataForRecord:(id)a0;
- (void)shouldDisplayPersonalizedAdsUI:(id /* block */)a0;
- (void)localAdServicesEnabled:(id /* block */)a0;
- (void)getAccountLevelSwitchDisabledReasonWithHandler:(id /* block */)a0;
- (void)latestPersonalizedAdsConsentVersion:(id /* block */)a0;
- (void)setPersonalizedAds:(BOOL)a0 withCompletionHandler:(id /* block */)a1;
- (void)sendPersonalizedAdsAndReconcileDataForRecord:(id)a0;
- (void)deviceRegionEnabledPerStorefront:(id /* block */)a0;
- (id)init;
- (void)iTunesAccountStorefront:(id /* block */)a0;
- (void).cxx_destruct;
- (void)shouldAppStoreDisplayAdvertisingScreen:(id /* block */)a0;

@end
