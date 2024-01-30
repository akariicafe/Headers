@interface INStartCallContactResolutionResult : INPersonResolutionResult

+ (id)unsupportedForReason:(long long)a0;
+ (id)confirmationRequiredWithPersonToConfirm:(id)a0 forReason:(long long)a1;

- (id)_initWithIntentSlotResolutionResult:(id)a0 slotDescription:(id)a1;
- (id)_buildIntentSlotResolutionResultWithIntentSlotDescription:(id)a0;
- (id)initWithPersonResolutionResult:(id)a0;

@end
