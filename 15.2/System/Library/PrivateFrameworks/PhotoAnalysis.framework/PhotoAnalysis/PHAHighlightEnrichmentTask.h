@interface PHAHighlightEnrichmentTask : PHAEnrichmentTask

@property (nonatomic) unsigned long long tailorOptions;

- (double)period;
- (BOOL)runWithGraphManager:(id)a0 progressReporter:(id)a1 error:(id *)a2;

@end
