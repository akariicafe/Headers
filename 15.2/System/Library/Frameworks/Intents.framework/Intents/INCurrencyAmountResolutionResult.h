@interface INCurrencyAmountResolutionResult : INIntentResolutionResult

+ (id)successWithResolvedCurrencyAmount:(id)a0;
+ (id)disambiguationWithCurrencyAmountsToDisambiguate:(id)a0;
+ (id)confirmationRequiredWithCurrencyAmountToConfirm:(id)a0;

- (id)_intentSlotValueForObject:(id)a0 slotDescription:(id)a1;
- (id)_vocabularyValueForObject:(id)a0 slotDescription:(id)a1;

@end
