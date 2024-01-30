@class NSString, HMDHomeManager, HMDAppleAccountManager;
@protocol HMDFeaturesDataSource;

@interface HMDHH2AutoMigrationEligibilityChecker : HMFObject <HMFLogging> {
    HMDAppleAccountManager *_accountManager;
    id<HMDFeaturesDataSource> _featuresDataSource;
}

@property (copy) id /* block */ isHSA2EnabledDeterminationHandler;
@property (weak) HMDHomeManager *homeManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)initWithHomeManager:(id)a0;
- (void).cxx_destruct;
- (void)fetchIsCurrentUserEligibleForAutoMigrationByHomeOwnerWithCompletion:(id /* block */)a0;
- (void)fetchIsCurrentUserEligibleForAutoMigrationWithCompletion:(id /* block */)a0;
- (id)initWithHomeManager:(id)a0 accountManager:(id)a1 featuresDataSource:(id)a2;

@end
