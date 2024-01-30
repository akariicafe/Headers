@class NSXPCListener, NSString;

@interface ADPersonalizedAdsService : ADSingleton <NSXPCListenerDelegate, ADPersonalizedAds_XPC>

@property (retain) NSXPCListener *listener;
@property (nonatomic) BOOL requestInFlight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)setPersonalizedAds:(BOOL)a0 withCompletionHandler:(id /* block */)a1;
- (void)reconcileDataForRecord:(id)a0;
- (void)sendPersonalizedAdsAndReconcileDataForRecord:(id)a0;

@end
