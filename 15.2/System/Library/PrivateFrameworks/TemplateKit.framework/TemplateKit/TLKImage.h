@class NSCache, UIImage;

@interface TLKImage : NSObject

@property (retain) NSCache *imageCache;
@property (retain, nonatomic) UIImage *uiImage;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic) double aspectRatio;
@property (nonatomic) BOOL isTemplate;
@property (nonatomic) unsigned long long cornerRoundingStyle;
@property (nonatomic) BOOL useFastPathShadow;
@property (nonatomic) double cornerRadius;

+ (BOOL)imageIsSymbol:(id)a0;
+ (id)templateImageForImage:(id)a0;
+ (id)keyForScale:(double)a0 isDarkStyle:(BOOL)a1;
+ (id)applyTintColor:(id)a0 toImage:(id)a1;

- (id)initWithImage:(id)a0;
- (void)loadImageWithScale:(double)a0 isDarkStyle:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;
- (id)cachedImageForScale:(double)a0 isDarkStyle:(BOOL)a1;
- (void)cacheImage:(id)a0 forScale:(double)a1 isDarkStyle:(BOOL)a2;

@end
