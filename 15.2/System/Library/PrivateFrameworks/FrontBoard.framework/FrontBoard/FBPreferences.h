@interface FBPreferences : BSAbstractDefaultDomain

@property (readonly, nonatomic) BOOL disableXPCServicesEndpointHack;

+ (id)sharedInstance;

- (id)_init;
- (void)_bindAndRegisterDefaults;

@end
