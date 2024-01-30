@class CPLRUDictionary;

@interface SUImageCache : NSObject {
    CPLRUDictionary *_dictionary;
}

- (id)initWithMaximumCapacity:(long long)a0;
- (void)dealloc;
- (id)init;
- (void)removeAllCachedImages;
- (void)addImage:(id)a0 forURL:(id)a1 dataProvider:(id)a2;
- (id)imageForURL:(id)a0 dataProvider:(id)a1;

@end
