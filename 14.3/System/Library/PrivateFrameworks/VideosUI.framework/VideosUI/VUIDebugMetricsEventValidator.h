@interface VUIDebugMetricsEventValidator : NSObject

+ (id)validationResults:(id)a0 fromIndex:(unsigned long long)a1;
+ (void)validateEvents:(id)a0 forRuleset:(id)a1 withCompletion:(id /* block */)a2;
+ (id)removeGladiatorPrefix:(id)a0;

@end
