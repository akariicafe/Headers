@interface VUIDebugMetricsEventValidator : NSObject

+ (void)validateEvents:(id)a0 forRuleset:(id)a1 withCompletion:(id /* block */)a2;
+ (id)validationResults:(id)a0 fromIndex:(unsigned long long)a1;
+ (id)removeGladiatorPrefix:(id)a0;

@end
