@class NSCache, UIImage;

@interface TLKImage : NSObject

@property (retain) NSCache *imageCache;
@property (retain, nonatomic) UIImage *uiImage;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic) double aspectRatio;
@property (nonatomic) BOOL isTemplate;
@property (nonatomic) unsigned long long cornerRoundingStyle;
@property (nonatomic) BOOL supportsFastPathShadow;
@property (nonatomic) double cornerRadius;

+ (id)applyTintColor:(id)a0 toImage:(id)a1;
+ (BOOL)imageIsSymbol:(id)a0;
+ (id)keyForScale:(double)a0 isDarkStyle:(BOOL)a1;
+ (id)templateImageForImage:(id)a0;

- (id)initWithImage:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)cacheImage:(id)a0 forScale:(double)a1 isDarkStyle:(BOOL)a2;
- (id)cachedImageForScale:(double)a0 isDarkStyle:(BOOL)a1;
- (void)loadImageWithScale:(double)a0 isDarkStyle:(BOOL)a1 completionHandler:(id /* block */)a2;

@end
