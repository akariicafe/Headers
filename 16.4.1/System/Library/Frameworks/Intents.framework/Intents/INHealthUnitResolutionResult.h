@interface INHealthUnitResolutionResult : INIntentResolutionResult

+ (id)confirmationRequiredWithHealthUnitToConfirm:(id)a0;
+ (id)disambiguationWithHealthUnitsToDisambiguate:(id)a0;
+ (id)successWithResolvedHealthUnit:(id)a0;

- (id)_intentSlotValueForObject:(id)a0 slotDescription:(id)a1;
- (id)_vocabularyValueForObject:(id)a0 slotDescription:(id)a1;

@end
