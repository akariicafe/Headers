@interface CPAccNavUpdate : NSObject

+ (id)description:(id)a0;
+ (id)_dictionaryFormat:(id)a0 resolveEnums:(BOOL)a1;
+ (id)iapDescription:(id)a0;
+ (id)_descriptionArray:(id)a0 resolveEnums:(BOOL)a1 showNils:(BOOL)a2 prefix:(id)a3;
+ (id)_formattedDistanceString:(double)a0;
+ (id)_valueFromCollection:(id)a0 forParamKey:(id)a1;
+ (id)_valueFromMeasurement:(id)a0 forParamKey:(id)a1;
+ (void)configureTypesForUpdateClass:(Class)a0;
+ (id)copyUpdate:(id)a0;
+ (void)decodeUpdate:(id)a0 withCoder:(id)a1;
+ (id)dictionaryIAPFormat:(id)a0;
+ (id)dictionaryStringFormat:(id)a0;
+ (void)encodeUpdate:(id)a0 withCoder:(id)a1;
+ (void)enumerateUpdate:(id)a0 paramKeysAndValuesWithBlock:(id /* block */)a1;
+ (void)enumerateUpdate:(id)a0 paramsAndValuesWithBlock:(id /* block */)a1;
+ (void)enumerateUpdateClass:(Class)a0 paramKeysWithBlock:(id /* block */)a1;
+ (void)enumerateUpdateClass:(Class)a0 paramsWithBlock:(id /* block */)a1;
+ (BOOL)isUpdate:(id)a0 equalTo:(id)a1;
+ (void)resetUpdate:(id)a0;
+ (id)update:(id)a0 valueForKey:(unsigned short)a1;
+ (id)update:(id)a0 valueForParam:(id)a1;
+ (id)update:(id)a0 valueForParamKey:(id)a1;
+ (id)update:(id)a0 valueForProperty:(id)a1;
+ (id)updateClass:(Class)a0 paramForProperty:(id)a1;
+ (id)updateClass:(Class)a0 paramKeyForKey:(unsigned short)a1;

@end
