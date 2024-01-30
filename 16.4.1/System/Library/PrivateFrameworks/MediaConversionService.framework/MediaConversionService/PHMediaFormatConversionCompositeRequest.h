@interface PHMediaFormatConversionCompositeRequest : PHMediaFormatConversionRequest

- (void)preflightWithConversionManager:(id)a0;
- (BOOL)areAllSubrequestsPreflighted;
- (id)compositeRequestCommonInitWithError:(id *)a0;
- (void)didFinishProcessing;
- (void)didPreflightSubrequest:(id)a0;
- (void)enqueueSubrequestsOnConversionManager:(id)a0;
- (void)enumerateSubrequests:(id /* block */)a0;
- (BOOL)isCompositeRequest;
- (void)postProcessSuccessfulCompositeRequest;
- (void)propagateRequestOptionsToSubrequests;
- (BOOL)requiresAccessibilityDescriptionMetadataChange;
- (BOOL)requiresCaptionMetadataChange;
- (BOOL)requiresCreationDateMetadataChange;
- (BOOL)requiresFormatConversion;
- (BOOL)requiresLocationMetadataChange;
- (void)setupProgress;

@end
