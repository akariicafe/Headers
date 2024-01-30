@interface INBillPayeeResolutionResult : INIntentResolutionResult

+ (id)confirmationRequiredWithBillPayeeToConfirm:(id)a0;
+ (id)disambiguationWithBillPayeesToDisambiguate:(id)a0;
+ (id)successWithResolvedBillPayee:(id)a0;

- (id)_intentSlotValueForObject:(id)a0 slotDescription:(id)a1;
- (id)_vocabularyValueForObject:(id)a0 slotDescription:(id)a1;

@end
