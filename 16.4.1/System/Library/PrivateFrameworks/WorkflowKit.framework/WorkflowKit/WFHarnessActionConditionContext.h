@protocol WFVariableDataSource;

@interface WFHarnessActionConditionContext : NSObject

@property (readonly, nonatomic) id<WFVariableDataSource> variableDataSource;

- (void).cxx_destruct;
- (id)initWithVariableDataSource:(id)a0;

@end
