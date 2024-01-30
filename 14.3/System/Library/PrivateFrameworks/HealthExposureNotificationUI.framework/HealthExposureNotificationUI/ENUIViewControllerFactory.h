@interface ENUIViewControllerFactory : NSObject

@property (class, nonatomic, readonly) ENUIViewControllerFactory *sharedInstance;

@property (nonatomic, weak) void /* unknown type, empty encoding */ inflightOnboardingStack;
@property (nonatomic, weak) void /* unknown type, empty encoding */ inflightVerificationStack;

- (id)init;
- (void).cxx_destruct;
- (id)createOnboardingStackForAgencyModel:(id)a0 exposureManager:(id)a1 fromAvailabilityAlert:(BOOL)a2 completion:(id /* block */)a3;
- (id)createAnalyticsConsentStackForAgencyModel:(id)a0 exposureManager:(id)a1 completion:(id /* block */)a2;
- (id)createVerificationStackForAgencyModel:(id)a0 exposureManager:(id)a1 sessionIdentifier:(id)a2 completion:(id /* block */)a3;
- (id)createKeyReleaseDialogueWithBundleIdentifier:(id)a0 region:(id)a1 completion:(id /* block */)a2;
- (id)createPreApprovalDialogueWithBundleIdentifier:(id)a0 region:(id)a1 completion:(id /* block */)a2;

@end
