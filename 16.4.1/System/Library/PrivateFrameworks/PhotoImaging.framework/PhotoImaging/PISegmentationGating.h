@interface PISegmentationGating : NSObject

+ (unsigned long long)gatingResultForSegmentationScores:(id)a0;
+ (BOOL)isValidSegmentationScoreForDepth:(struct PISegmentationBimodalScore { float x0; float x1; float x2; })a0;
+ (id)segmentationScoreRanges;

@end
