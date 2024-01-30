@interface IMRuntimeUtil : NSObject

+ (id)associatedValueForKey:(id)a0 onObject:(id)a1;
+ (void)associateValue:(id)a0 forKey:(id)a1 onObject:(id)a2;
+ (void)associateBoolValue:(BOOL)a0 forKey:(id)a1 onObject:(id)a2;
+ (void)associateBoolValue:(BOOL)a0 forKey:(id)a1 onObject:(id)a2 withPolicy:(unsigned long long)a3;
+ (void)associateDoubleValue:(double)a0 forKey:(id)a1 onObject:(id)a2;
+ (void)associateDoubleValue:(double)a0 forKey:(id)a1 onObject:(id)a2 withPolicy:(unsigned long long)a3;
+ (void)associateFloatValue:(float)a0 forKey:(id)a1 onObject:(id)a2;
+ (void)associateFloatValue:(float)a0 forKey:(id)a1 onObject:(id)a2 withPolicy:(unsigned long long)a3;
+ (void)associateIntValue:(long long)a0 forKey:(id)a1 onObject:(id)a2;
+ (void)associateIntValue:(long long)a0 forKey:(id)a1 onObject:(id)a2 withPolicy:(unsigned long long)a3;
+ (void)associateValue:(id)a0 forKey:(id)a1 onObject:(id)a2 withPolicy:(unsigned long long)a3;
+ (BOOL)associatedBoolValueForKey:(id)a0 onObject:(id)a1;
+ (BOOL)associatedBoolValueForKey:(id)a0 onObject:(id)a1 withDefault:(BOOL)a2;
+ (double)associatedDoubleValueForKey:(id)a0 onObject:(id)a1;
+ (double)associatedDoubleValueForKey:(id)a0 onObject:(id)a1 withDefault:(double)a2;
+ (float)associatedFloatValueForKey:(id)a0 onObject:(id)a1;
+ (float)associatedFloatValueForKey:(id)a0 onObject:(id)a1 withDefault:(float)a2;
+ (long long)associatedIntValueForKey:(id)a0 onObject:(id)a1;
+ (long long)associatedIntValueForKey:(id)a0 onObject:(id)a1 withDefault:(long long)a2;
+ (id)associatedValueForKey:(id)a0 onObject:(id)a1 withDefault:(id)a2;
+ (void)swizzleClassMethod:(SEL)a0 onClass:(Class)a1 withReplacementBlock:(id /* block */)a2;
+ (void)swizzleMethod:(SEL)a0 onClass:(Class)a1 withReplacementBlock:(id /* block */)a2;

@end
