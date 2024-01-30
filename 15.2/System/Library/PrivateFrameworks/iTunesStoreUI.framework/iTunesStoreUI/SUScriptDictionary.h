@class NSArray, NSDictionary, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface SUScriptDictionary : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSArray *_stringKeys;
    NSMutableDictionary *_cachedNestedScriptDictionaries;
}

@property (readonly) NSDictionary *dictionary;

+ (void)initialize;
+ (BOOL)isSelectorExcludedFromWebScript:(SEL)a0;
+ (id)webScriptNameForSelector:(SEL)a0;
+ (BOOL)isKeyExcludedFromWebScript:(const char *)a0;

- (id)stringRepresentation;
- (id)valueForKey:(id)a0;
- (void)setValue:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithDictionary:(id)a0;
- (id)attributeKeys;
- (id)valueForNotNativelySupportedKey:(id)a0;

@end
