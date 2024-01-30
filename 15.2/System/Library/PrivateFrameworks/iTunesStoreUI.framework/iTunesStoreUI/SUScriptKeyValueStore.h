@class NSString, SSKeyValueStore;

@interface SUScriptKeyValueStore : SUScriptObject {
    NSString *_domain;
    SSKeyValueStore *_keyValueStore;
}

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)a0;
+ (id)_checkOutStoreWithDomain:(id)a0;
+ (void)_popStoreWithDomain:(id)a0;

- (id)valueForKey:(id)a0;
- (id)initWithDomain:(id)a0;
- (void)removeAllValues;
- (void)removeValueForKey:(id)a0;
- (id)_className;
- (void)dealloc;
- (void)getValueForKey:(id)a0 usingFunction:(id)a1;
- (void)setValueForKey:(id)a0 value:(id)a1;

@end
