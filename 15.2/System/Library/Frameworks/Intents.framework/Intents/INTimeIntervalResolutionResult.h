@interface INTimeIntervalResolutionResult : INIntentResolutionResult

+ (id)successWithResolvedTimeInterval:(double)a0;
+ (id)confirmationRequiredWithTimeIntervalToConfirm:(double)a0;

- (id)_intentSlotValueForObject:(id)a0 slotDescription:(id)a1;
- (id)_vocabularyValueForObject:(id)a0 slotDescription:(id)a1;

@end
