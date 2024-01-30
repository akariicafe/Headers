@interface ATXHeroAppBlendingUpdater : NSObject

+ (void)updateBlendingLayerWithHeroAppPredictions:(id)a0 currentLocation:(id)a1;
+ (id)clientModelForHeroAppPredictions;
+ (id)clientModelSpecForHeroAppPredictions;
+ (id)nonBlacklistedPredictionsFrom:(id)a0;

@end
