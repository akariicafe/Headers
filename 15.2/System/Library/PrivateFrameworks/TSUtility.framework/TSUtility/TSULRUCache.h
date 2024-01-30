@class TSUNoCopyDictionary, NSMutableArray;

@interface TSULRUCache : NSObject {
    TSUNoCopyDictionary *mData;
    NSMutableArray *mOrderedKeys;
    id mCallbackTarget;
    SEL mCallback;
}

@property (readonly, nonatomic) unsigned long long maxSize;

- (void)removeObjectForKey:(id)a0;
- (void)removeAllObjects;
- (id)allValues;
- (id)allKeys;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)initWithMaxSize:(unsigned long long)a0;
- (id)objectForKey:(id)a0;
- (void)dealloc;
- (void)p_removeOldestObject;
- (void)setEvictionCallbackTarget:(id)a0 selector:(SEL)a1;
- (void)clearEvictionCallbackTarget;

@end
