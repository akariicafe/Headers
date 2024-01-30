@interface INPaymentMethodResolutionResult : INIntentResolutionResult

+ (id)successWithResolvedPaymentMethod:(id)a0;
+ (id)disambiguationWithPaymentMethodsToDisambiguate:(id)a0;
+ (id)confirmationRequiredWithPaymentMethodToConfirm:(id)a0;

- (id)_intentSlotValueForObject:(id)a0 slotDescription:(id)a1;
- (id)_vocabularyValueForObject:(id)a0 slotDescription:(id)a1;

@end
