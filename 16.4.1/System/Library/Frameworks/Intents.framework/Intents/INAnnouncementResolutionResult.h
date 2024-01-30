@interface INAnnouncementResolutionResult : INIntentResolutionResult

+ (id)confirmationRequiredWithAnnouncementToConfirm:(id)a0;
+ (id)disambiguationWithAnnouncementsToDisambiguate:(id)a0;
+ (id)successWithResolvedAnnouncement:(id)a0;

- (id)_intentSlotValueForObject:(id)a0 slotDescription:(id)a1;
- (id)_vocabularyValueForObject:(id)a0 slotDescription:(id)a1;

@end
