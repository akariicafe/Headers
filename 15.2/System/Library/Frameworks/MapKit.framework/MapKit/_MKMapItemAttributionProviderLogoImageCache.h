@class NSCache;

@interface _MKMapItemAttributionProviderLogoImageCache : NSObject {
    NSCache *_cache;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)setImage:(id)a0 forKey:(id)a1;
- (id)init;
- (id)imageForKey:(id)a0;

@end
