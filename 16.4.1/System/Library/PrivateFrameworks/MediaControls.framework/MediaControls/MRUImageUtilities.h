@class MSVLRUDictionary;

@interface MRUImageUtilities : NSObject

@property (class, readonly, nonatomic) MSVLRUDictionary *cache;

+ (void)clearCache;
+ (struct CGSize { double x0; double x1; })sizeFromSource:(struct CGImageSource { } *)a0;
+ (id)derivedSourceImageForImage:(id)a0;
+ (id)formatImage:(id)a0 forDisplayAtSize:(struct CGSize { double x0; double x1; })a1;
+ (id)formatImage:(id)a0 withIdentifier:(id)a1 forDisplayAtSize:(struct CGSize { double x0; double x1; })a2;
+ (id)formatImage:(id)a0 withIdentifier:(id)a1 forDisplayAtSize:(struct CGSize { double x0; double x1; })a2 useCache:(BOOL)a3;
+ (id)formattedImageForIdentifier:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
+ (BOOL)imageIsJPEG:(id)a0;
+ (id)jpegDataForImage:(id)a0;
+ (id)resizedImage:(id)a0 forFittingSize:(struct CGSize { double x0; double x1; })a1;
+ (BOOL)shouldResizeImage:(id)a0 forFittingSize:(struct CGSize { double x0; double x1; })a1;
+ (BOOL)shouldTranscodeImage:(id)a0;
+ (id)sourceDataForImage:(id)a0;
+ (long long)subsampleFactorForMaxPixelSize:(long long)a0 imageSize:(struct CGSize { double x0; double x1; })a1;

@end
