@interface INModifyNicknameResolutionResult : INIntentResolutionResult

+ (id)successWithResolvedModifyNickname:(id)a0;
+ (id)disambiguationWithModifyNicknamesToDisambiguate:(id)a0;
+ (id)confirmationRequiredWithModifyNicknameToConfirm:(id)a0;

- (id)_intentSlotValueForObject:(id)a0 slotDescription:(id)a1;
- (id)_vocabularyValueForObject:(id)a0 slotDescription:(id)a1;

@end
