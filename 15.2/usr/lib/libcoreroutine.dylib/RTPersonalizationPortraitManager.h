@interface RTPersonalizationPortraitManager : RTService

- (void)fetchLocationNamesStartDate:(id)a0 endDate:(id)a1 handler:(id /* block */)a2;
- (void)_shutdownWithHandler:(id /* block */)a0;
- (void)_fetchRecentLocationDonationsSince:(id)a0 handler:(id /* block */)a1;
- (id)init;
- (void)feedbackUsedNamedEntities:(id)a0;
- (void)fetchRecentLocationDonationsSince:(id)a0 handler:(id /* block */)a1;

@end
