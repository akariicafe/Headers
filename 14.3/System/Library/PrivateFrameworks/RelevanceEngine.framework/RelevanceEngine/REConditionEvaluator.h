@class RECondition;

@interface REConditionEvaluator : NSObject

@property (readonly, nonatomic) unsigned long long mode;
@property (readonly, nonatomic) RECondition *condition;
@property (readonly, nonatomic) BOOL needsPredictionSet;

- (void).cxx_destruct;
- (id)initWithCondition:(id)a0;
- (BOOL)acceptsFeatureMap:(id)a0 predictionSet:(id)a1 explanation:(id *)a2;
- (BOOL)compareFeatureMap:(id)a0 toFeatureMap:(id)a1;

@end
