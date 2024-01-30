@class NSArray, CUIThemeRendition;

@interface CUINamedLayerStack : CUINamedLookup {
    CUIThemeRendition *_flattenedImageRendition;
    CUIThemeRendition *_radiosityImageRendition;
}

@property (retain, nonatomic) NSArray *layers;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } size;
@property (readonly, nonatomic) struct CGImage { } *flattenedImage;
@property (readonly, nonatomic) struct CGImage { } *radiosityImage;

+ (struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; })_doRadiosityBlurOnPixelBuffer:(void *)a0 bytesPerRow:(unsigned long long)a1 bitsPerPixel:(unsigned long long)a2 width:(unsigned long long)a3 height:(unsigned long long)a4 scaleFactor:(unsigned long long)a5 usesGaussianBlur:(BOOL *)a6 adjustedSize:(struct CGSize { double x0; double x1; } *)a7;
+ (struct CGImage { } *)createRadiosityImageWithImage:(struct CGImage { } *)a0 displayScale:(long long)a1;
+ (void)radiosityImageWithImage:(struct CGImage { } *)a0 displayScale:(long long)a1 completionHandler:(id /* block */)a2;

- (id)initWithName:(id)a0 usingRenditionKey:(id)a1 fromTheme:(unsigned long long)a2 resolvingWithBlock:(id /* block */)a3;
- (id)layerImageAtIndex:(unsigned long long)a0;
- (void)dealloc;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
