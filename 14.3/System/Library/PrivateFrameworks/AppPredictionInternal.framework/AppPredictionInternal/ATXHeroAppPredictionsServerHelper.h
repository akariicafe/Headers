@interface ATXHeroAppPredictionsServerHelper : NSObject

+ (id)inRadiusPredictionsFrom:(id)a0 currentLocation:(id)a1;
+ (id)heroAppPredictionsSortedByDistance:(id)a0 currentLocation:(id)a1;
+ (BOOL)isPredictionInRadius:(id)a0 currentLocation:(id)a1;
+ (id)bundleIdForPrediction:(id)a0;
+ (BOOL)canPredictClipsGivenRecentMotion;

- (id)init;

@end
