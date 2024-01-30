@interface PGTitleGeneratorTypeMatching : NSObject

@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) id /* block */ eventEvaluationBlock;

+ (id)typeMatchingWithType:(long long)a0 eventEvaluationBlock:(id /* block */)a1;

- (void).cxx_destruct;
- (id)initWithType:(long long)a0 eventEvaluationBlock:(id /* block */)a1;

@end
