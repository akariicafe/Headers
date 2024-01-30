@interface INDateComponentsResolutionResult : INIntentResolutionResult

+ (id)confirmationRequiredWithDateComponentsToConfirm:(id)a0;
+ (id)disambiguationWithDateComponentsToDisambiguate:(id)a0;
+ (id)successWithResolvedDateComponents:(id)a0;

- (id)_intentSlotValueForObject:(id)a0 slotDescription:(id)a1;
- (id)_vocabularyValueForObject:(id)a0 slotDescription:(id)a1;

@end
