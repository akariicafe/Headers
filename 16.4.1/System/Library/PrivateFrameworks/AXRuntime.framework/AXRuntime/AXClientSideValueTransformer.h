@interface AXClientSideValueTransformer : NSObject

+ (Class)transformer;
+ (id)_transformArrayWithUserStrings:(id)a0;
+ (id)_transformAutomationDictionary:(id)a0;
+ (id)_transformUserString:(id)a0;
+ (BOOL)canTransformAttribute:(long long)a0;
+ (id)transformValue:(id)a0 forAttribute:(long long)a1 withElement:(struct __AXUIElement { } *)a2;

@end
