@class NSString;

@interface PGGraphHealthRecorder : NSObject <PGGraphHealthRecording>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)recordTimeBetweenGraphRebuildsWithLastRebuildDate:(id)a0 currentRebuildDate:(id)a1;
- (void)recordHighlightEnrichmentsCancellation;
- (void)recordGraphRebuildTimeout;
- (void)recordGraphRebuildsCancellation;
- (void)recordGraphRebuildFailure;
- (void)recordTimeBetweenHighlightEnrichmentsWithLastEnrichmentDate:(id)a0 currentEnrichmentDate:(id)a1;

@end
