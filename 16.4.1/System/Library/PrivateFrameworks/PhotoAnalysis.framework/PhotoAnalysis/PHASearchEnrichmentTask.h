@interface PHASearchEnrichmentTask : PHAEnrichmentTask

- (double)period;
- (BOOL)currentPlatformIsSupported;
- (id)enrichmentProcessor;

@end
