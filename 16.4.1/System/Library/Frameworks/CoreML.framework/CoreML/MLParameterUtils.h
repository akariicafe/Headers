@interface MLParameterUtils : NSObject

+ (id)deScopeParameters:(id)a0 byDeletingPrefixingScope:(id)a1;
+ (id)stringForKey:(id)a0 inDictionary:(id)a1;
+ (void)appendParameterDescriptions:(id)a0 toModelDescription:(id)a1;
+ (id)objectForKey:(id)a0 class:(Class)a1 dictionary:(id)a2;
+ (id)numberForKey:(id)a0 inDictionary:(id)a1;

@end
