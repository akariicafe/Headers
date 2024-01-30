@interface MLParameterUtils : NSObject

+ (void)appendParameterDescriptions:(id)a0 toModelDescription:(id)a1;
+ (id)numberForKey:(id)a0 inDictionary:(id)a1;
+ (id)stringForKey:(id)a0 inDictionary:(id)a1;
+ (id)objectForKey:(id)a0 class:(Class)a1 dictionary:(id)a2;
+ (id)deScopeParameters:(id)a0 byDeletingPrefixingScope:(id)a1;

@end
