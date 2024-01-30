@interface NUJSValueUtils : NSObject

+ (id)nujs_callWithArguments:(id)a0 thisObject:(id)a1 jsValue:(id)a2;
+ (id)nujs_functionSource:(id)a0;
+ (BOOL)nujs_isFunction:(id)a0;
+ (BOOL)nujs_isString:(id)a0;
+ (id)nujs_properties:(id)a0;
+ (id)nujs_toArray:(id)a0;
+ (id)nujs_toDictionary:(id)a0;
+ (id)nujs_toObject:(id)a0;
+ (id)nujs_valueWithFunction:(id)a0 params:(id)a1 body:(id)a2 sourceURL:(id)a3 inContext:(id)a4;

@end
