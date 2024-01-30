@interface INCallRecordResolutionResult : INIntentResolutionResult

+ (id)confirmationRequiredWithCallRecordToConfirm:(id)a0;
+ (id)disambiguationWithCallRecordsToDisambiguate:(id)a0;
+ (id)successWithResolvedCallRecord:(id)a0;

- (id)_intentSlotValueForObject:(id)a0 slotDescription:(id)a1;
- (id)_vocabularyValueForObject:(id)a0 slotDescription:(id)a1;

@end
