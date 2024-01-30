@class NSCache;

@interface PUInMemoryLimitedImageTable : PUTemporaryImageTable {
    NSCache *_memoryCache;
}

- (void).cxx_destruct;
- (void)setImage:(id)a0 forItemAtIndex:(unsigned long long)a1;
- (void)removeItemAtIndex:(unsigned long long)a0;
- (id)imageForItemAtIndex:(unsigned long long)a0;

@end
