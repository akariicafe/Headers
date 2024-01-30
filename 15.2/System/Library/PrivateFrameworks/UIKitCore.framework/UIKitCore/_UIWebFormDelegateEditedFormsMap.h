@class NSMutableDictionary, NSMutableArray;

@interface _UIWebFormDelegateEditedFormsMap : NSObject {
    NSMutableDictionary *_map;
    NSMutableArray *_lifetimeHelper;
}

- (void)removeObjectForKey:(id)a0;
- (void)removeAllObjects;
- (id)allValues;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)init;
- (id)objectForKey:(id)a0;
- (void)dealloc;
- (id)_keyForWebFrame:(id)a0;

@end
