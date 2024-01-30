@interface ATXHeroAppBlendingUpdater : NSObject

+ (void)updateBlendingLayerWithHeroAppPredictions:(id)a0 currentLocation:(id)a1;
+ (id)clientModelSpecForHeroAppPredictions;
+ (id)nonBlacklistedPredictionsFrom:(id)a0;
+ (id)clientModelForHeroAppPredictions;

@end
