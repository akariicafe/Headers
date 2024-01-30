@class NSArray, NSIndexSet;

@interface ATXDisplayCacheIntermediateFormat : NSObject

@property (readonly, nonatomic) NSArray *actions;
@property (readonly, nonatomic) NSArray *predictionChunks;
@property (readonly, nonatomic) NSIndexSet *lockscreenPredictionIndices;

+ (id)fromActions:(id)a0;

- (void).cxx_destruct;

@end
