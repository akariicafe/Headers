@class NSMutableData;

@interface ATXPredictionSetBuilder : NSObject {
    NSMutableData *_data;
    int _predictionCount;
    BOOL _finished;
}

- (id)finish;
- (void)recordPrediction:(id)a0 score:(float)a1;
- (id)init;
- (void).cxx_destruct;

@end
