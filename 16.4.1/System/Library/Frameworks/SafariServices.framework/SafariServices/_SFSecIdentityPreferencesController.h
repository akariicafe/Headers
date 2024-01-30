@class NSMutableSet;

@interface _SFSecIdentityPreferencesController : NSObject {
    NSMutableSet *_domainsAndPortsToUseOnlyAvailableIdentityWithoutPrompting;
}

+ (id)ephemeralSecIdentityPreferencesController;
+ (id)sharedPersistentSecIdentityPreferencesController;

- (void).cxx_destruct;
- (BOOL)shouldUseOnlyAvailableIdentityWithoutPromptingForDomainAndPort:(id)a0;
- (id)_initUsingEphemeralStorage:(BOOL)a0;
- (void)saveShouldUseOnlyAvailableIdentityWithoutPrompting:(BOOL)a0 forDomainAndPort:(id)a1;

@end
