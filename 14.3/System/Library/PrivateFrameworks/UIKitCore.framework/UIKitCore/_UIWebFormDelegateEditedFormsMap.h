@class NSMutableDictionary, NSMutableArray;

@interface _UIWebFormDelegateEditedFormsMap : NSObject {
    NSMutableDictionary *_map;
    NSMutableArray *_lifetimeHelper;
}

- (id)objectForKey:(id)a0;
- (id)init;
- (void)dealloc;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)allValues;
- (id)_keyForWebFrame:(id)a0;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)a0;

@end
