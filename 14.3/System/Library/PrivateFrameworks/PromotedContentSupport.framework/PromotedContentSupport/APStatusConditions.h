@interface APStatusConditions : NSObject

+ (void)setStatusCondition:(id)a0 completionHandler:(id /* block */)a1;
+ (void)clearStatusCondition:(id)a0 completionHandler:(id /* block */)a1;
+ (void)isStatusConditionRegistered:(id)a0 bundleIdentifier:(id)a1 completionHandler:(id /* block */)a2;

@end
