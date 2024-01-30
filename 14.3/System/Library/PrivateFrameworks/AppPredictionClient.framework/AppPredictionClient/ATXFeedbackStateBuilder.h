@class NSMutableData;

@interface ATXFeedbackStateBuilder : NSObject {
    NSMutableData *_data;
    int _predictionCount;
    BOOL _finished;
}

- (id)finish;
- (id)init;
- (void).cxx_destruct;
- (void)recordPrediction:(id)a0 actionHash:(unsigned long long)a1 totalScore:(float)a2 scoreInputs:(const float *)a3 isMediumConfidenceForBlendingLayer:(BOOL)a4 isHighConfidenceForBlendingLayer:(BOOL)a5;
- (id)initWithABGroup:(id)a0 assetVersion:(long long)a1;

@end
