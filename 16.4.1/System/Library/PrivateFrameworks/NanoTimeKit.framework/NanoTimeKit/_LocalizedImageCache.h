@class NSMutableDictionary;

@interface _LocalizedImageCache : NSObject {
    NSMutableDictionary *_cache;
}

- (void)removeAllObjects;
- (void)dealloc;
- (id)init;
- (void)_localeChanged;
- (id)imageForKey:(id)a0;
- (void).cxx_destruct;
- (void)setImage:(id)a0 forKey:(id)a1;

@end
