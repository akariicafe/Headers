@interface ATXActionFeedbackWeights : NSObject {
    void /* unknown type, blank encoding */ _confirmWeights[8][46];
    void /* unknown type, blank encoding */ _rejectWeights[8][46];
}

+ (id)sharedInstance;

- (float)rejectWeightForFeedbackStage:(unsigned long long)a0 consumerSubType:(unsigned char)a1;
- (id)initWithAssetClass:(Class)a0;
- (id)init;
- (float)confirmWeightForFeedbackStage:(unsigned long long)a0 consumerSubType:(unsigned char)a1;

@end
