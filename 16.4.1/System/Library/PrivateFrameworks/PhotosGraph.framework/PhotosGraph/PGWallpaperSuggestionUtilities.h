@interface PGWallpaperSuggestionUtilities : NSObject

+ (id)assetFetchPropertySetsIncludingGating:(BOOL)a0;
+ (double)cropScoreWithAsset:(id)a0 classification:(unsigned long long)a1 passesClockOverlap:(BOOL *)a2 cropZoomRatio:(double *)a3;
+ (BOOL)foundDominantPeopleSceneInAsset:(id)a0 withConfidenceThresholdHelper:(id)a1;
+ (id)peopleSceneConfidenceThresholdHelper;
+ (id)peopleShuffleDescriptorTitleWithCount:(unsigned long long)a0;

@end
