@class CPLRUDictionary;

@interface SUImageCache : NSObject {
    CPLRUDictionary *_dictionary;
}

- (id)initWithMaximumCapacity:(long long)a0;
- (id)init;
- (void)dealloc;
- (void)addImage:(id)a0 forURL:(id)a1 dataProvider:(id)a2;
- (id)imageForURL:(id)a0 dataProvider:(id)a1;
- (void)removeAllCachedImages;

@end
