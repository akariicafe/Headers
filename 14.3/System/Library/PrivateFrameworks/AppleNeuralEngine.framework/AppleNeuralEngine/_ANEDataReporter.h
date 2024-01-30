@interface _ANEDataReporter : NSObject

+ (void)setValue:(long long)a0 forScalarKey:(id)a1;
+ (void)clearScalarKey:(id)a0;
+ (void)addValue:(long long)a0 forScalarKey:(id)a1;
+ (id)aggdKey:(id)a0;
+ (id)reportClient:(id)a0 modelName:(id)a1;

@end
