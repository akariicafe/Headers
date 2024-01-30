@interface LiveServiceResolutionResult : INObjectResolutionResult

+ (id)successWithResolvedLiveService:(id)a0;
+ (id)disambiguationWithLiveServicesToDisambiguate:(id)a0;
+ (id)confirmationRequiredWithLiveServiceToConfirm:(id)a0;

@end
