@class NSMutableDictionary;

@interface PLCoreOperator : NSObject

@property (retain) NSMutableDictionary *operators;

+ (id)registeredOperatorsOfSuperClassType:(Class)a0;
+ (void)registerOperator:(Class)a0;
+ (id)registeredOperators;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)log;
- (void)initTaskOperatorDependancies;
- (void)initOperatorDependancies;
- (void)initOperatorDependanciesWithBlock:(id /* block */)a0;
- (void)startOperatorsOfSuperClassType:(Class)a0;
- (id)tablesToTrimConditionsForTrimDate:(id)a0;

@end
