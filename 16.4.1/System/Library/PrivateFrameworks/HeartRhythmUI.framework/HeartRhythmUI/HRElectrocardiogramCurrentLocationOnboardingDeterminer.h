@class HKAnalyticsEventSubmissionManager, HKHealthStore, HKMobileCountryCodeManager;

@interface HRElectrocardiogramCurrentLocationOnboardingDeterminer : NSObject {
    HKHealthStore *_healthStore;
    HKMobileCountryCodeManager *_mobileCountryCodeManager;
    HKAnalyticsEventSubmissionManager *_analyticsEventSubmissionManager;
}

- (id)initWithHealthStore:(id)a0;
- (void).cxx_destruct;
- (void)isElectrocardiogramOnboardingAvailableInCurrentLocationForActiveWatch:(id /* block */)a0;

@end
