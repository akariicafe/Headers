@class NSString;

@interface PGGraphPhotosHighlightEnrichmentProcessor : NSObject <PGGraphDataModelEnrichmentProcessor, PGGraphDataModelEnrichmentHealthRecording>

@property (class, readonly, nonatomic) BOOL supportsBackgroundJob;
@property (class, readonly, nonatomic) double backgroundJobTimeout;
@property (class, readonly, nonatomic) NSString *backgroundJobName;

@property (nonatomic) unsigned long long highlightTailorOptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initWithHighlightTailorOptions:(unsigned long long)a0;
- (void)recordProcessingWasCancelledWithGraphHealthRecorder:(id)a0;
- (void)recordCurrentProcessingDate:(id)a0 lastProcessingDate:(id)a1 graphHealthRecorder:(id)a2;
- (void)_logFirstTimeExperienceMetricsIfNeededWithManager:(id)a0;
- (void)enrichDataModelWithManager:(id)a0 graphUpdateInventory:(id)a1 progressBlock:(id /* block */)a2;

@end
