@class NSCache;

@interface _MKMapItemAttributionProviderLogoImageCache : NSObject {
    NSCache *_cache;
}

+ (id)sharedInstance;

- (id)init;
- (id)imageForKey:(id)a0;
- (void).cxx_destruct;
- (void)setImage:(id)a0 forKey:(id)a1;

@end
