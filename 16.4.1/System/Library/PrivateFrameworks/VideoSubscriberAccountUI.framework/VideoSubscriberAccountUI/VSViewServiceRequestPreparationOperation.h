@class VSOptional, NSArray, NSXPCConnection, NSOperationQueue, VSAuditToken, VSIdentityProviderAvailabilityInfoCenter;

@interface VSViewServiceRequestPreparationOperation : VSAsyncOperation

@property (retain, nonatomic) VSOptional *result;
@property (retain, nonatomic) NSOperationQueue *privateQueue;
@property (retain, nonatomic) NSXPCConnection *privacyServiceConnection;
@property (retain, nonatomic) VSIdentityProviderAvailabilityInfoCenter *availabilityInfoCenter;
@property (nonatomic) struct { unsigned int val[8]; } hostAuditToken;
@property (nonatomic) int hostProcessIdentifier;
@property (copy, nonatomic) VSAuditToken *auditToken;
@property (nonatomic) BOOL requestAllowsPrivacyUI;
@property (nonatomic) BOOL requestRequiresPrivacyUI;
@property (copy, nonatomic) NSArray *supportedIdentityProviderIdentifiers;
@property (copy, nonatomic) NSArray *featuredIdentityProviderIdentifiers;
@property (copy, nonatomic) NSArray *applicationAccountProviders;
@property (nonatomic) BOOL shouldInferFeaturedProviders;
@property (nonatomic) BOOL shouldReturnErrorOnTVProviderFeatureUnsupportedByStorefront;
@property (nonatomic, getter=isAccountModificationAllowed) BOOL accountModificationAllowed;
@property (retain, nonatomic) VSOptional *currentAccount;

- (void)executionDidBegin;
- (void)cancel;
- (void)dealloc;
- (void)_finishWithError:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_checkAvailability;
- (void)_checkEntitlement;
- (void)_checkPrivacy;
- (void)_checkSupportedProviders;
- (void)_continueCheckPrivacyWithAccessStatus:(unsigned long long)a0;
- (void)_determineProviderDisplayNameWithUI:(BOOL)a0;
- (void)_finishWithSupportedProviders:(id)a0;
- (id)_privacyServiceWithErrorHandler:(id /* block */)a0;
- (void)_promptForPrivacyWithDisplayNameIfRequired:(id)a0 providerID:(id)a1 providerIsSupported:(BOOL)a2 allowUI:(BOOL)a3;

@end
