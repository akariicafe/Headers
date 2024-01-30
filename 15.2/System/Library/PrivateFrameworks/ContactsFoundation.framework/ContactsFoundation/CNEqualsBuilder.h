@interface CNEqualsBuilder : NSObject

+ (BOOL)isInteger:(long long)a0 equalToOther:(long long)a1;
+ (BOOL)evaluateBuilderBlock:(id /* block */)a0 remainingBlocks:(char *)a1;
+ (BOOL)isObject:(id)a0 equalToOther:(id)a1 withBlocks:(id /* block */)a2;
+ (BOOL)isBool:(BOOL)a0 equalToOther:(BOOL)a1;
+ (BOOL)isObject:(id)a0 kindOfClass:(Class)a1 andEqualToObject:(id)a2 withBlocks:(id /* block */)a3;
+ (BOOL)isObject:(id)a0 memberOfClass:(Class)a1 andEqualToObject:(id)a2 withBlocks:(id /* block */)a3;
+ (BOOL)isObject:(id)a0 equalToOther:(id)a1;
+ (BOOL)isDouble:(double)a0 equalToOther:(double)a1 withAccuracy:(double)a2;
+ (BOOL)isObject:(id)a0 memberOfSameClassAndEqualTo:(id)a1 withBlocks:(id /* block */)a2;
+ (BOOL)isString:(id)a0 localizedCaseInsensitiveEqualToOther:(id)a1;

@end
