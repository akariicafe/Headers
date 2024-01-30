@interface TPSTargetingValidator : NSObject

+ (void)_validateCondition:(id)a0 joinType:(long long)a1 context:(id)a2 cache:(id)a3 completionQueue:(id)a4 completionHandler:(id /* block */)a5;
+ (void)validateConditions:(id)a0 joinType:(long long)a1 context:(id)a2 cache:(id)a3 completionQueue:(id)a4 completionHandler:(id /* block */)a5;
+ (BOOL)validateConditions:(id)a0 joinType:(long long)a1 context:(id)a2 cache:(id)a3 completionQueue:(id)a4 error:(id *)a5;

@end
