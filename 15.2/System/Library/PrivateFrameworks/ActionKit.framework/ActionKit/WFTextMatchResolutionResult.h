@interface WFTextMatchResolutionResult : INObjectResolutionResult

+ (id)successWithResolvedTextMatch:(id)a0;
+ (id)disambiguationWithTextMatchsToDisambiguate:(id)a0;
+ (id)confirmationRequiredWithTextMatchToConfirm:(id)a0;

@end
