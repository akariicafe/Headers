@interface MSIntentMailResolutionResult : INObjectResolutionResult

+ (id)successWithResolvedMail:(id)a0;
+ (id)disambiguationWithMailsToDisambiguate:(id)a0;
+ (id)confirmationRequiredWithMailToConfirm:(id)a0;

@end
