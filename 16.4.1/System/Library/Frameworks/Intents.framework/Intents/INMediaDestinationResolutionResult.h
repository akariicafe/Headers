@interface INMediaDestinationResolutionResult : INIntentResolutionResult

+ (id)confirmationRequiredWithMediaDestinationToConfirm:(id)a0;
+ (id)disambiguationWithMediaDestinationsToDisambiguate:(id)a0;
+ (id)successWithResolvedMediaDestination:(id)a0;

- (id)_intentSlotValueForObject:(id)a0 slotDescription:(id)a1;
- (id)_vocabularyValueForObject:(id)a0 slotDescription:(id)a1;

@end
