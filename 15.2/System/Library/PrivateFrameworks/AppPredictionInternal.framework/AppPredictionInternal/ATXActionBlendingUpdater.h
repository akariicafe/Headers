@interface ATXActionBlendingUpdater : NSObject

+ (void)updateBlendingLayerWithRecentShortcuts:(id)a0;
+ (void)updateBlendingLayerWithLockscreenActions:(id)a0 feedbackMetadata:(id)a1;
+ (id)clientModelIdForConsumerSubType:(unsigned char)a0;
+ (void)updateBlendingLayerWithFallbackActions;
+ (void)updateBlendingLayerWithHeuristicPredictions:(id)a0;
+ (void)updateBlendingLayerWithBehavioralPredictions:(id)a0 feedbackMetadata:(id)a1 consumerSubType:(unsigned char)a2;
+ (double)generateScoreForFallbackActionKey:(id)a0 fallbackAction:(id)a1 penalizedFallbackActions:(id)a2;

@end
