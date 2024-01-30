@interface INLengthResolutionResult : INIntentResolutionResult

+ (id)confirmationRequiredWithLengthToConfirm:(id)a0;
+ (id)disambiguationWithLengthsToDisambiguate:(id)a0;
+ (id)successWithResolvedLength:(id)a0;

- (id)_intentSlotValueForObject:(id)a0 slotDescription:(id)a1;
- (id)_vocabularyValueForObject:(id)a0 slotDescription:(id)a1;

@end
