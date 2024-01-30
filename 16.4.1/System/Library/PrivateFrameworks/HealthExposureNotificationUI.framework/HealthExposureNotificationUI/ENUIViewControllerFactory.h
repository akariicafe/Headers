@interface ENUIViewControllerFactory : NSObject

@property (class, nonatomic, readonly) ENUIViewControllerFactory *sharedInstance;

@property (nonatomic, weak) void /* unknown type, empty encoding */ inflightOnboardingStack;
@property (nonatomic, weak) void /* unknown type, empty encoding */ inflightVerificationStack;
@property (nonatomic, weak) void /* unknown type, empty encoding */ inflightPreAuthorizationStack;

- (id)init;
- (void).cxx_destruct;
- (id)createKeyReleaseDialogueWithBundleIdentifier:(id)a0 region:(id)a1 completion:(id /* block */)a2;
- (id)createAnalyticsConsentStackForAgencyModel:(id)a0 exposureManager:(id)a1 completion:(id /* block */)a2;
- (id)createOnboardingStackForAgencyModel:(id)a0 exposureManager:(id)a1 fromAvailabilityAlert:(BOOL)a2 fromDeepLink:(BOOL)a3 subsequentFlow:(long long)a4 completion:(id /* block */)a5;
- (id)createPreApprovalDialogueWithBundleIdentifier:(id)a0 region:(id)a1 completion:(id /* block */)a2;
- (id)createPreAuthorizationStackForAgencyModel:(id)a0 exposureManager:(id)a1 completion:(id /* block */)a2;
- (id)createTurndownStackWithEnteredFromMainScreen:(BOOL)a0 completion:(id /* block */)a1;
- (id)createVerificationStackForAgencyModel:(id)a0 exposureManager:(id)a1 sessionIdentifier:(id)a2 reportType:(unsigned int)a3 enteredFromMainScreen:(BOOL)a4 completion:(id /* block */)a5;

@end
