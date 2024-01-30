@class NSString, HKHealthStore, HKMobileCountryCodeManager, HKMobilityWalkingSteadinessFeatureStatusManager, NSObject;
@protocol OS_dispatch_queue, HKFeatureStatusProviding, HKFeatureAvailabilityProviding;

@interface HKMobilityWalkingSteadinessOnboardingFlowManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) HKHealthStore *healthStore;
@property (retain, nonatomic) id<HKFeatureStatusProviding> classificationsFeatureStatusProvider;
@property (retain, nonatomic) id<HKFeatureAvailabilityProviding> notificationsFeatureAvailabilityStore;
@property (retain, nonatomic) HKMobilityWalkingSteadinessFeatureStatusManager *featureStatusManager;
@property (retain, nonatomic) HKMobileCountryCodeManager *mobileCountryCodeManager;
@property (readonly, nonatomic) NSString *countryCode;

- (id)initWithHealthStore:(id)a0;
- (void).cxx_destruct;
- (BOOL)userCanContinueOnboardingWithDateOfBirthComponents:(id)a0;
- (void)fetchUserCanContinueOnboardingForCountryCode:(id)a0 completion:(id /* block */)a1;
- (void)markOnboardingCompleteForCountryCode:(id)a0 shouldTurnOnNotifications:(BOOL)a1 completion:(id /* block */)a2;
- (id)_findAnyOnboardedCountryCodeWithError:(id *)a0;
- (id)initWithHealthStore:(id)a0 classificationsFeatureStatusProvider:(id)a1 notificationsFeatureAvailabilityStore:(id)a2 featureStatusManager:(id)a3;

@end
