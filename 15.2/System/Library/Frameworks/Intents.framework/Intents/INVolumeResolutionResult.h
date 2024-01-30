@interface INVolumeResolutionResult : INIntentResolutionResult

+ (id)successWithResolvedVolume:(id)a0;
+ (id)disambiguationWithVolumeToDisambiguate:(id)a0;
+ (id)confirmationRequiredWithVolumeToConfirm:(id)a0;

- (id)_intentSlotValueForObject:(id)a0 slotDescription:(id)a1;
- (id)_vocabularyValueForObject:(id)a0 slotDescription:(id)a1;

@end
