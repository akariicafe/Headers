@class NSDictionary;

@interface ETOptimizerDefinition : NSObject

@property (readonly) long long type;
@property (readonly, nonatomic) NSDictionary *optimizationParameters;

- (id)initWithOptimizationAlgorithm:(long long)a0 parameters:(id)a1 error:(id *)a2;
- (void).cxx_destruct;

@end
