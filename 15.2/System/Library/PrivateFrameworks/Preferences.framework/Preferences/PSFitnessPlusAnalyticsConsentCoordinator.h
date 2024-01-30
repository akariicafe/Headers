@class AMSAcknowledgePrivacyTask;

@interface PSFitnessPlusAnalyticsConsentCoordinator : NSObject {
    AMSAcknowledgePrivacyTask *_acknowledgePrivacyTask;
}

- (void).cxx_destruct;
- (id)init;
- (BOOL)fetchAnalyticsConsent;
- (void)setAnalyticsConsent:(BOOL)a0 completion:(id /* block */)a1;
- (void)fetchSubscriptionStatusWithCompletion:(id /* block */)a0;

@end
