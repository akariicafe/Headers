@interface APEnforcementManager : NSObject

- (id)disabledReasons;
- (BOOL)loggingEnabled;
- (BOOL)adServicesEnabled:(id /* block */)a0;
- (BOOL)shouldShowTCCWithAds;

@end
