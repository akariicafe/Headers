@interface VUIAppIconImageService : NSObject

+ (id)_cachePath;
+ (id)_MD5StringForString:(id)a0;
+ (void)_cacheImage:(id)a0 forKey:(id)a1;
+ (id)_cachedImageForKey:(id)a0;
+ (id)_imageURLForInstallable:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
+ (id)_keyForInstallable:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
+ (void)fetchIconForInstallable:(id)a0 size:(struct CGSize { double x0; double x1; })a1 completion:(id /* block */)a2;
+ (double)iconCornerRadiusForSize:(struct CGSize { double x0; double x1; })a0;

@end
