@class NSDictionary;

@interface PHAHighlightCollectionEnrichmentTask : PHAEnrichmentTask {
    NSDictionary *_options;
}

- (double)period;
- (BOOL)currentPlatformIsSupported;
- (id)initWithOptions:(id)a0;
- (void).cxx_destruct;
- (id)enrichmentProcessor;

@end
