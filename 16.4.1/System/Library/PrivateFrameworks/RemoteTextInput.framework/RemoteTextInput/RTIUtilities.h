@interface RTIUtilities : NSObject

+ (id)_attributedStringWithoutDefaultAttributes:(id)a0;
+ (void)unregisterCustomInfoType:(id)a0 forClass:(Class)a1;
+ (void)registerCustomInfoClasses:(id)a0 forType:(id)a1 forClass:(Class)a2;
+ (id)customInfoClassesForType:(id)a0 forClass:(Class)a1;
+ (id)customInfoDictionary;
+ (id)_filteredAttributedString:(id)a0 validAttributes:(id)a1;

@end
