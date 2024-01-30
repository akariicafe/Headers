@interface TVRUserAccountResolutionResult : INObjectResolutionResult

+ (id)successWithResolvedUserAccount:(id)a0;
+ (id)disambiguationWithUserAccountsToDisambiguate:(id)a0;
+ (id)confirmationRequiredWithUserAccountToConfirm:(id)a0;

@end
