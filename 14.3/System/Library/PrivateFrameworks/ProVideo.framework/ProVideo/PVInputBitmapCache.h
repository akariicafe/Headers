@class NSMutableDictionary;

@interface PVInputBitmapCache : NSObject {
    NSMutableDictionary *_cache;
    unsigned long long _countLimit;
}

- (void)setCountLimit:(unsigned long long)a0;
- (id)objectForKey:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)purge:(BOOL)a0;
- (void)didRecieveMemoryWarning:(id)a0;

@end
