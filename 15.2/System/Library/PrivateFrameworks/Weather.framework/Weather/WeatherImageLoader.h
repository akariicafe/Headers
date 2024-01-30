@class NSCache, CPBitmapStore;

@interface WeatherImageLoader : NSObject {
    double _scale;
}

@property (retain, nonatomic) CPBitmapStore *store;
@property (retain, nonatomic) NSCache *conditionImagesCache;

+ (void)preloadImages;
+ (id)conditionImageNamed:(id)a0 style:(long long)a1;
+ (id)conditionImageNameWithConditionIndex:(long long)a0;
+ (id)conditionImageWithConditionIndex:(long long)a0;
+ (id)sharedImageLoader;
+ (id)conditionImageBundle;
+ (id)conditionImageNamed:(id)a0 size:(struct CGSize { double x0; double x1; })a1 cloudAligned:(BOOL)a2 stroke:(BOOL)a3 strokeAlpha:(double)a4 lighterColors:(BOOL)a5;
+ (id)colorForImageColor:(id)a0 lighter:(BOOL)a1;
+ (void)cacheImageIfNecessary:(id)a0;
+ (id)conditionImageWithConditionIndex:(long long)a0 style:(long long)a1;
+ (id)cachedImageNamed:(id)a0 completion:(id /* block */)a1;

- (void).cxx_destruct;
- (void)setImage:(id)a0 forKey:(id)a1;
- (id)init;
- (id)cachedImageForKey:(id)a0;

@end
