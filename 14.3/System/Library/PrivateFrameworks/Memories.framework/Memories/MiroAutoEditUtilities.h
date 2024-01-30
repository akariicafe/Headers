@interface MiroAutoEditUtilities : NSObject

+ (BOOL)hasRangeOfType:(unsigned long long)a0 within:(int)a1 ofEdge:(int)a2 onClip:(id)a3 frameRate:(int)a4;
+ (BOOL)hasVoiceOrFaceRangeNearEndForClip:(id)a0 projectFrameRate:(int)a1;
+ (BOOL)hasVoiceOrFaceRangeNearStartForClip:(id)a0 projectFrameRate:(int)a1;
+ (id)paddedRangeModelsOfType:(unsigned long long)a0 clip:(id)a1 projectFrameRate:(int)a2;
+ (int)endTimeForClip:(id)a0;
+ (BOOL)hasRangeOfType:(unsigned long long)a0 overlappingRange:(id)a1 clip:(id)a2 frameRate:(int)a3;
+ (int)distanceToRange:(id)a0 fromEdge:(int)a1 onClip:(id)a2 frameRate:(int)a3;
+ (double)correctDuration:(double)a0 toBlueprint:(id)a1 videoIdeal:(double)a2 videoMin:(double)a3 videoMax:(double)a4;
+ (int)maxDurationRespectingTrimmingForClip:(id)a0 projectFrameRate:(int)a1 blueprint:(id)a2;
+ (int)distanceToRangeOfType:(unsigned long long)a0 fromEdge:(int)a1 onClip:(id)a2 frameRate:(int)a3;
+ (id)imageForVideoPHAsset:(id)a0 startTime:(int)a1 duration:(int)a2;
+ (id)imageForImagePHAsset:(id)a0;
+ (id)avAssetForPHAsset:(id)a0;
+ (int)minutesBetween:(id)a0 and:(id)a1;
+ (BOOL)rangeModel:(id)a0 isNearEdgeOfClip:(id)a1 frameRate:(int)a2;
+ (id)correctRangeModelDuration:(id)a0 forClip:(id)a1 toBlueprint:(id)a2 projectFrameRate:(int)a3 videoIdeal:(double)a4 videoMin:(double)a5 videoMax:(double)a6;
+ (BOOL)titleClipDurationIsShort:(id)a0 forFrameRate:(int)a1;

@end
