@class NSMutableDictionary;

@interface PLCoreOperator : NSObject

@property (retain) NSMutableDictionary *operators;

+ (id)registeredOperatorsOfSuperClassType:(Class)a0;
+ (void)registerOperator:(Class)a0;
+ (id)registeredOperators;

- (void)log;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)initTaskOperatorDependancies;
- (void)initOperatorDependancies;
- (void)initOperatorDependanciesWithBlock:(id /* block */)a0;
- (id)allOperators;
- (void)startOperatorsOfSuperClassType:(Class)a0;
- (id)tablesToTrimConditionsForTrimDate:(id)a0;

@end
