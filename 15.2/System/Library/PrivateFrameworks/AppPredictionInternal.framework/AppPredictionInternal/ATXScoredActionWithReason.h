@class ATXScoredPrediction, NSString;

@interface ATXScoredActionWithReason : NSObject

@property (readonly, nonatomic) ATXScoredPrediction *scoredAction;
@property (readonly, nonatomic) NSString *reason;

- (void).cxx_destruct;
- (id)init;
- (id)initWithScoredAction:(id)a0 predictionReason:(id)a1;

@end
