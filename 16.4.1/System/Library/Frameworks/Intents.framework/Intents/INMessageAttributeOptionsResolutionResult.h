@interface INMessageAttributeOptionsResolutionResult : INIntentResolutionResult

+ (id)confirmationRequiredWithMessageAttributeOptionsToConfirm:(unsigned long long)a0;
+ (id)confirmationRequiredWithValueToConfirm:(unsigned long long)a0;
+ (id)successWithResolvedMessageAttributeOptions:(unsigned long long)a0;
+ (id)successWithResolvedValue:(unsigned long long)a0;

- (id)_intentSlotValueForObject:(id)a0 slotDescription:(id)a1;
- (id)_vocabularyValueForObject:(id)a0 slotDescription:(id)a1;

@end
