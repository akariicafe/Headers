@interface TSMemoryImageCache : NSObject {
    void /* unknown type, empty encoding */ lruCache;
    void /* unknown type, empty encoding */ accessor;
}

- (id)init;
- (void).cxx_destruct;
- (void)cacheImage:(id)a0 forKey:(id)a1 expires:(BOOL)a2;
- (id)initWithMaxSize:(long long)a0 accessor:(id)a1;
- (id)imageForKey:(id)a0;

@end
