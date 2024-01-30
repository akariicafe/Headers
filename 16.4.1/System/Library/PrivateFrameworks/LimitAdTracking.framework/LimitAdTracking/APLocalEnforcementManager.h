@interface APLocalEnforcementManager : APEnforcementManager

- (id)disabledReasons;
- (id)appTrackingServiceProxy:(id)a0;
- (id)appTrackingXPCConnection:(id /* block */)a0 withInvalidation:(id /* block */)a1;
- (BOOL)loggingEnabled;
- (id)accountStorefront;
- (BOOL)adServicesEnabled:(id /* block */)a0;
- (BOOL)deviceRegionStorefrontEnabled;
- (BOOL)isU13MAIDEDU;
- (BOOL)shouldShowTCCWithAds;

@end
