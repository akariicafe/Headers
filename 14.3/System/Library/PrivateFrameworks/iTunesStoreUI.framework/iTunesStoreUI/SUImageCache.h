@class CPLRUDictionary;

@interface SUImageCache : NSObject {
    CPLRUDictionary *_dictionary;
}

- (id)init;
- (void)dealloc;
- (id)initWithMaximumCapacity:(long long)a0;
- (void)addImage:(id)a0 forURL:(id)a1 dataProvider:(id)a2;
- (id)imageForURL:(id)a0 dataProvider:(id)a1;
- (void)removeAllCachedImages;

@end
