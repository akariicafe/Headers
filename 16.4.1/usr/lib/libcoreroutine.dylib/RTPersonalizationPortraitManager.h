@interface RTPersonalizationPortraitManager : RTService

- (void)fetchRecentLocationDonationsSince:(id)a0 handler:(id /* block */)a1;
- (id)init;
- (void)fetchLocationNamesStartDate:(id)a0 endDate:(id)a1 handler:(id /* block */)a2;
- (void)_fetchRecentLocationDonationsSince:(id)a0 handler:(id /* block */)a1;
- (void)_shutdownWithHandler:(id /* block */)a0;
- (void)feedbackUsedNamedEntities:(id)a0;

@end
