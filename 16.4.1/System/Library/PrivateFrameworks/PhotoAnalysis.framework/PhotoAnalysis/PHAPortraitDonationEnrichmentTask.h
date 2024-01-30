@interface PHAPortraitDonationEnrichmentTask : PHAEnrichmentTask

- (double)period;
- (BOOL)currentPlatformIsSupported;
- (id)enrichmentProcessor;

@end
