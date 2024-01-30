@class NSString;

@interface PMObjectCacheEntry : NSObject {
    NSString *_cacheKey;
    unsigned int _hashValue;
    id _item;
    unsigned long long _size;
    unsigned long long _lastAccess;
    float _freq;
    float _value;
    double _cost;
}

- (double)cost;
- (void)setCacheKey:(id)a0;
- (id)cacheKey;
- (unsigned int)hashValue;
- (unsigned long long)lastAccess;
- (void)setLastAccess:(unsigned long long)a0;
- (void)dealloc;
- (unsigned long long)getSize;
- (id)getItem;
- (id)initWithKey:(id)a0 cacheItem:(id)a1 size:(unsigned long long)a2 cost:(double)a3 forCache:(id)a4;
- (void)setValue:(unsigned long long)a0 cost:(double)a1 maxCacheSize:(unsigned long long)a2;
- (void)resetValue:(unsigned long long)a0 responseRate:(float)a1 penalty:(float)a2;
- (float)getValue:(unsigned long long)a0 decayRate:(float)a1;
- (BOOL)canBePurgedFromCache;

@end
