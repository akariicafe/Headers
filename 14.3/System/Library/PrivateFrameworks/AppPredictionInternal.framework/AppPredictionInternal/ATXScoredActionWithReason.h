@class ATXScoredPrediction, NSString;

@interface ATXScoredActionWithReason : NSObject

@property (readonly, nonatomic) ATXScoredPrediction *scoredAction;
@property (readonly, nonatomic) NSString *reason;

- (id)init;
- (void).cxx_destruct;
- (id)initWithScoredAction:(id)a0 predictionReason:(id)a1;

@end
