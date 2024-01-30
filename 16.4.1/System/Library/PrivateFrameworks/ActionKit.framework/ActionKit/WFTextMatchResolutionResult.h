@interface WFTextMatchResolutionResult : INObjectResolutionResult

+ (BOOL)supportsSecureCoding;
+ (id)confirmationRequiredWithTextMatchToConfirm:(id)a0;
+ (id)disambiguationWithTextMatchsToDisambiguate:(id)a0;
+ (id)successWithResolvedTextMatch:(id)a0;

@end
