@class REMLPrediction, NSDictionary;

@interface REMLPredictionSet : NSObject {
    NSDictionary *_predictionsByKey;
}

@property (readonly, nonatomic) REMLPrediction *prediction;

- (id)initWithPrediction:(id)a0 predictionMap:(id)a1;
- (void).cxx_destruct;
- (id)predictionForKey:(id)a0;
- (id)initWithPrediction:(id)a0;

@end
