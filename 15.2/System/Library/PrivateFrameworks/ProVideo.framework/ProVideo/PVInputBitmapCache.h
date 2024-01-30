@class NSMutableDictionary;

@interface PVInputBitmapCache : NSObject {
    NSMutableDictionary *_cache;
    unsigned long long _countLimit;
}

- (void)setCountLimit:(unsigned long long)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)purge:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;
- (id)objectForKey:(id)a0;
- (void)dealloc;
- (void)didRecieveMemoryWarning:(id)a0;

@end
