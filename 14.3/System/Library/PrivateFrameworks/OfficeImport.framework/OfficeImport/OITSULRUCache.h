@class NSArray, OITSUNoCopyDictionary, NSMutableArray;

@interface OITSULRUCache : NSObject {
    OITSUNoCopyDictionary *mData;
    NSMutableArray *mOrderedKeys;
    id mCallbackTarget;
    SEL mCallback;
}

@property (readonly, nonatomic) unsigned long long maxSize;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) NSArray *allValues;
@property (readonly, nonatomic) NSArray *allKeys;

- (id)objectForKey:(id)a0;
- (void)dealloc;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)initWithMaxSize:(unsigned long long)a0;
- (id)description;
- (void)removeAllObjects;
- (void)p_removeOldestObject;
- (void)removeObjectForKey:(id)a0;
- (void)setEvictionCallbackTarget:(id)a0 selector:(SEL)a1;
- (void)clearEvictionCallbackTarget;

@end
