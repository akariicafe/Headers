@class NSDictionary;

@interface MLRTaskParameters : NSObject

@property (readonly, copy, nonatomic) NSDictionary *recipeUserInfo;
@property (readonly, nonatomic) unsigned long long count;

- (long long)integerValueForKey:(id)a0 defaultValue:(long long)a1;
- (BOOL)boolValueForKey:(id)a0 defaultValue:(BOOL)a1;
- (id)description;
- (void).cxx_destruct;
- (id)objectForKeyedSubscript:(id)a0;
- (float)floatValueForKey:(id)a0 defaultValue:(float)a1;
- (id)stringValueForKey:(id)a0 defaultValue:(id)a1;
- (unsigned long long)unsignedIntegerValueForKey:(id)a0 defaultValue:(unsigned long long)a1;
- (id)initWithDESRecipe:(id)a0;
- (id)initWithParametersDict:(id)a0;
- (id)_numberValueForKey:(id)a0;
- (double)doubleValueForKey:(id)a0 defaultValue:(double)a1;

@end
