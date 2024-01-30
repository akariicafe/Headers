@class NSOperationQueue, VSOptional, VSDevice;

@interface VSSetupFlowPreparationOperation : VSAsyncOperation

@property (retain, nonatomic) VSOptional *result;
@property (retain, nonatomic) NSOperationQueue *privateQueue;
@property (retain, nonatomic) VSDevice *currentDevice;
@property (retain, nonatomic) VSOptional *storage;
@property (retain, nonatomic) VSOptional *preferences;

- (void)_checkPreferences;
- (void)_finishWithError:(id)a0;
- (void)executionDidBegin;
- (void).cxx_destruct;
- (id)init;
- (void)_checkAvailability;
- (void)_finishWithFlow:(id)a0;
- (void)_checkForExistingAccounts;
- (void)_fetchProviderForAccount:(id)a0;
- (void)_fetchAllProvidersIfNeeded;
- (void)_fetchAllProviders;
- (void)_checkForSupportedAppsButton;
- (void)_resolveBundleIDs:(id)a0 forFlow:(id)a1;
- (void)_checkForSupportedAppsButtonWithFlow:(id)a0;
- (void)_loadProviderAppDescriptionWithFlow:(id)a0;
- (void)_getSTBProviderFromAllProviders:(id)a0 completionHandler:(id /* block */)a1;
- (void)prepareSTBSetupForAccount:(id)a0 forProvider:(id)a1;
- (void)_checkForSupportedAppsFromProvider:(id)a0;
- (void)_checkForPersonalizedChannelsWithResponse:(id)a0 identityProvider:(id)a1;

@end
