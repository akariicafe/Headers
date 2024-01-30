@interface INNoteContentResolutionResult : INIntentResolutionResult

+ (id)successWithResolvedNoteContent:(id)a0;
+ (id)confirmationRequiredWithNoteContentToConfirm:(id)a0;
+ (id)disambiguationWithNoteContentsToDisambiguate:(id)a0;

- (id)_intentSlotValueForObject:(id)a0 slotDescription:(id)a1;
- (id)_vocabularyValueForObject:(id)a0 slotDescription:(id)a1;

@end
