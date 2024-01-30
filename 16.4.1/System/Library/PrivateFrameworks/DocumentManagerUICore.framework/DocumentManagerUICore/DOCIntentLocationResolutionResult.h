@interface DOCIntentLocationResolutionResult : INObjectResolutionResult

+ (BOOL)supportsSecureCoding;
+ (id)confirmationRequiredWithDOCIntentLocationToConfirm:(id)a0;
+ (id)disambiguationWithDOCIntentLocationsToDisambiguate:(id)a0;
+ (id)successWithResolvedDOCIntentLocation:(id)a0;

@end
