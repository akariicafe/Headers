@class NSMutableDictionary;

@interface _LocalizedImageCache : NSObject {
    NSMutableDictionary *_cache;
}

- (void)removeAllObjects;
- (void)_localeChanged;
- (void).cxx_destruct;
- (void)setImage:(id)a0 forKey:(id)a1;
- (id)init;
- (void)dealloc;
- (id)imageForKey:(id)a0;

@end
