@class NSMutableSet;

@interface _SFSecIdentityPreferencesController : NSObject {
    NSMutableSet *_domainsAndPortsToUseOnlyAvailableIdentityWithoutPrompting;
}

+ (id)sharedPersistentSecIdentityPreferencesController;
+ (id)ephemeralSecIdentityPreferencesController;

- (void).cxx_destruct;
- (void)saveShouldUseOnlyAvailableIdentityWithoutPrompting:(BOOL)a0 forDomainAndPort:(id)a1;
- (BOOL)shouldUseOnlyAvailableIdentityWithoutPromptingForDomainAndPort:(id)a0;
- (id)_initUsingEphemeralStorage:(BOOL)a0;

@end
