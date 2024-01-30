@class NSMutableDictionary, NSMutableArray;

@interface _UIWebFormDelegateEditedFormsMap : NSObject {
    NSMutableDictionary *_map;
    NSMutableArray *_lifetimeHelper;
}

- (void)setObject:(id)a0 forKey:(id)a1;
- (void)removeObjectForKey:(id)a0;
- (id)objectForKey:(id)a0;
- (void)removeAllObjects;
- (void)dealloc;
- (id)allValues;
- (id)init;
- (id)_keyForWebFrame:(id)a0;

@end
