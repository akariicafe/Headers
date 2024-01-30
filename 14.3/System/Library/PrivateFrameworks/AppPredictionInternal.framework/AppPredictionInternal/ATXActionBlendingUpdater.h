@interface ATXActionBlendingUpdater : NSObject

+ (id)clientModelIdForConsumerSubType:(unsigned char)a0;
+ (void)updateBlendingLayerWithFallbackActions;
+ (double)generateScoreForFallbackActionKey:(id)a0 fallbackAction:(id)a1 penalizedFallbackActions:(id)a2;
+ (void)updateBlendingLayerWithHeuristicPredictions:(id)a0;
+ (void)updateBlendingLayerWithBehavioralPredictions:(id)a0 feedbackMetadata:(id)a1 consumerSubType:(unsigned char)a2;
+ (void)updateBlendingLayerWithRecentShortcuts:(id)a0;

@end
