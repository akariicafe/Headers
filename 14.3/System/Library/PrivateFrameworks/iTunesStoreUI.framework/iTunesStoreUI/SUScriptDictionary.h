@class NSArray, NSDictionary, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface SUScriptDictionary : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSArray *_stringKeys;
    NSMutableDictionary *_cachedNestedScriptDictionaries;
}

@property (readonly) NSDictionary *dictionary;

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)a0;
+ (BOOL)isSelectorExcludedFromWebScript:(SEL)a0;
+ (BOOL)isKeyExcludedFromWebScript:(const char *)a0;

- (id)init;
- (void).cxx_destruct;
- (id)stringRepresentation;
- (id)valueForKey:(id)a0;
- (id)attributeKeys;
- (void)setValue:(id)a0 forKey:(id)a1;
- (id)initWithDictionary:(id)a0;
- (id)valueForNotNativelySupportedKey:(id)a0;

@end
