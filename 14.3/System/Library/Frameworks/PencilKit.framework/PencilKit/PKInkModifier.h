@interface PKInkModifier : NSObject

+ (id)dictionaryForInk:(id)a0 name:(id)a1;
+ (void)addFunction:(id)a0 forInk:(id)a1;
+ (void)removeFunction:(id)a0 forInk:(id)a1;
+ (void)functionDidChange:(id)a0 forInk:(id)a1;
+ (void)modifyInk:(id)a0 withValue:(double)a1 forProperty:(id)a2;
+ (void)clearInkManagerCache;

@end
