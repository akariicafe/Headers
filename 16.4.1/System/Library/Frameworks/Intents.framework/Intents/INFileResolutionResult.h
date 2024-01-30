@interface INFileResolutionResult : INIntentResolutionResult

+ (id)confirmationRequiredWithFileToConfirm:(id)a0;
+ (id)disambiguationWithFilesToDisambiguate:(id)a0;
+ (id)successWithResolvedFile:(id)a0;

- (id)_intentSlotValueForObject:(id)a0 slotDescription:(id)a1;
- (id)_vocabularyValueForObject:(id)a0 slotDescription:(id)a1;

@end
