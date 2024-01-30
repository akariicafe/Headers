@class NSData;

@interface ATXPredictionSetReader : NSObject {
    NSData *_data;
    Class _predictedItemClass;
    const char *_perPredictionDataStart;
    int _predictionCount;
}

+ (id)bundleIdReader:(id)a0;
+ (id)actionReader:(id)a0;

- (id)_scoredPredictionFromData:(id)a0 score:(float)a1;
- (id)readScoredPredictionsWithLimit:(int)a0 filterPredicate:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithData:(id)a0 predictedItemClass:(Class)a1;
- (id)readScoredPredictionsWithLimit:(int)a0;

@end
