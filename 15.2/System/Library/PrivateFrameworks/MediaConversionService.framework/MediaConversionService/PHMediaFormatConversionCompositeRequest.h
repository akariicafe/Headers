@interface PHMediaFormatConversionCompositeRequest : PHMediaFormatConversionRequest

- (BOOL)requiresFormatConversion;
- (BOOL)isCompositeRequest;
- (void)setupProgress;
- (void)preflightWithConversionManager:(id)a0;
- (BOOL)requiresLocationMetadataChange;
- (BOOL)requiresCreationDateMetadataChange;
- (BOOL)requiresCaptionMetadataChange;
- (BOOL)requiresAccessibilityDescriptionMetadataChange;
- (void)didFinishProcessing;
- (void)didPreflightSubrequest:(id)a0;
- (void)enqueueSubrequestsOnConversionManager:(id)a0;
- (void)enumerateSubrequests:(id /* block */)a0;
- (void)postProcessSuccessfulCompositeRequest;
- (void)propagateRequestOptionsToSubrequests;
- (BOOL)areAllSubrequestsPreflighted;
- (id)compositeRequestCommonInitWithError:(id *)a0;

@end
