@interface ATXHeroAppBlendingUpdater : NSObject

+ (id)nonBlacklistedPredictionsFrom:(id)a0;
+ (id)clientModelSpecForHeroAppPredictions;
+ (id)clientModelForHeroAppPredictions;
+ (void)updateBlendingLayerWithHeroAppPredictions:(id)a0 currentLocation:(id)a1;

@end
