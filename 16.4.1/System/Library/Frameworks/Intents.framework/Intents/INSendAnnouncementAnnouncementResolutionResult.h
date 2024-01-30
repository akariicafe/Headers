@interface INSendAnnouncementAnnouncementResolutionResult : INAnnouncementResolutionResult

+ (id)confirmationRequiredWithAnnouncementToConfirm:(id)a0 forReason:(long long)a1;
+ (id)unsupportedForReason:(long long)a0;

- (id)_buildIntentSlotResolutionResultWithIntentSlotDescription:(id)a0;
- (id)_initWithIntentSlotResolutionResult:(id)a0 slotDescription:(id)a1;
- (id)initWithAnnouncementResolutionResult:(id)a0;

@end
