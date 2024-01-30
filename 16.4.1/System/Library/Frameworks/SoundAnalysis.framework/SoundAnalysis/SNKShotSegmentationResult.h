@class MLMultiArray, NSArray, NSNumber;

@interface SNKShotSegmentationResult : NSObject

@property (retain) MLMultiArray *exemplarEmbedding;
@property (copy) NSArray *segments;
@property (copy) NSNumber *exemplarIndex;

- (void).cxx_destruct;

@end
