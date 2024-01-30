@class TSUNoCopyDictionary, NSMutableArray;

@interface TSULRUCache : NSObject {
    TSUNoCopyDictionary *mData;
    NSMutableArray *mOrderedKeys;
    id mCallbackTarget;
    SEL mCallback;
}

@property (readonly, nonatomic) unsigned long long maxSize;

- (id)objectForKey:(id)a0;
- (void)dealloc;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)initWithMaxSize:(unsigned long long)a0;
- (id)allValues;
- (id)allKeys;
- (void)removeAllObjects;
- (void)p_removeOldestObject;
- (void)removeObjectForKey:(id)a0;
- (void)setEvictionCallbackTarget:(id)a0 selector:(SEL)a1;
- (void)clearEvictionCallbackTarget;

@end
