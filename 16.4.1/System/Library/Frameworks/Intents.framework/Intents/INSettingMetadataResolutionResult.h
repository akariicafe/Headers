@interface INSettingMetadataResolutionResult : INIntentResolutionResult

+ (id)confirmationRequiredWithSettingMetadataToConfirm:(id)a0;
+ (id)disambiguationWithSettingMetadatasToDisambiguate:(id)a0;
+ (id)successWithResolvedSettingMetadata:(id)a0;

- (id)_intentSlotValueForObject:(id)a0 slotDescription:(id)a1;
- (id)_vocabularyValueForObject:(id)a0 slotDescription:(id)a1;

@end
