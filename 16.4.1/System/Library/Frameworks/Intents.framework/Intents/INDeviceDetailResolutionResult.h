@interface INDeviceDetailResolutionResult : INIntentResolutionResult

+ (id)confirmationRequiredWithDeviceDetailToConfirm:(id)a0;
+ (id)disambiguationWithDeviceDetailsToDisambiguate:(id)a0;
+ (id)successWithResolvedDeviceDetail:(id)a0;

- (id)_intentSlotValueForObject:(id)a0 slotDescription:(id)a1;
- (id)_vocabularyValueForObject:(id)a0 slotDescription:(id)a1;

@end
