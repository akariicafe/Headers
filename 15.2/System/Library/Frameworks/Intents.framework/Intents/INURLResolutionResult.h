@interface INURLResolutionResult : INIntentResolutionResult

+ (id)successWithResolvedURL:(id)a0;
+ (id)disambiguationWithURLsToDisambiguate:(id)a0;
+ (id)confirmationRequiredWithURLToConfirm:(id)a0;

- (id)_intentSlotValueForObject:(id)a0 slotDescription:(id)a1;
- (id)_vocabularyValueForObject:(id)a0 slotDescription:(id)a1;

@end
