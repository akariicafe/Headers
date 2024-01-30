@class NSMutableData;

@interface ATXPredictionSetBuilder : NSObject {
    NSMutableData *_data;
    int _predictionCount;
    BOOL _finished;
}

- (id)finish;
- (id)init;
- (void).cxx_destruct;
- (void)recordPrediction:(id)a0 score:(float)a1;

@end
