@interface INCallRecordTypeOptionsResolutionResult : INIntentResolutionResult

+ (id)confirmationRequiredWithCallRecordTypeOptionsToConfirm:(unsigned long long)a0;
+ (id)confirmationRequiredWithValueToConfirm:(unsigned long long)a0;
+ (id)successWithResolvedCallRecordTypeOptions:(unsigned long long)a0;
+ (id)successWithResolvedValue:(unsigned long long)a0;

- (id)_intentSlotValueForObject:(id)a0 slotDescription:(id)a1;
- (id)_vocabularyValueForObject:(id)a0 slotDescription:(id)a1;

@end
