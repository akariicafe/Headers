@class NSData;

@interface ATXPredictionSetReader : NSObject {
    NSData *_data;
    Class _predictedItemClass;
    const char *_perPredictionDataStart;
    int _predictionCount;
}

+ (id)bundleIdReader:(id)a0;
+ (id)actionReader:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithData:(id)a0 predictedItemClass:(Class)a1;
- (id)readScoredPredictionsWithLimit:(int)a0;
- (id)readScoredPredictionsWithLimit:(int)a0 filterPredicate:(id)a1;
- (id)_scoredPredictionFromData:(id)a0 score:(float)a1;

@end
