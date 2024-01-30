@interface PSFitnessPlusAnalyticsConsentCoordinator : NSObject

- (void)fetchAnalyticsConsentWithCompletion:(id /* block */)a0;
- (void)setAnalyticsConsent:(BOOL)a0 completion:(id /* block */)a1;
- (void)fetchSubscriptionStatusWithCompletion:(id /* block */)a0;

@end
