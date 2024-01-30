@class UIImage, SFImage;

@interface SearchUIImage : SFImage

@property (retain, nonatomic) UIImage *uiImage;
@property (readonly, nonatomic) SFImage *sfImage;
@property (nonatomic) BOOL useFastPathShadow;
@property (nonatomic) BOOL needsTinting;
@property (readonly, nonatomic) int defaultCornerRoundingStyle;
@property (readonly) double aspectRatio;

+ (id)imageWithSFImage:(id)a0;
+ (id)imageWithSFImage:(id)a0 variantForAppIcon:(unsigned long long)a1;

- (id)initWithImage:(id)a0;
- (id)imageData;
- (id)loadImageWithScale:(double)a0 isDarkStyle:(BOOL)a1;
- (BOOL)isTemplate;
- (void)loadImageWithScale:(double)a0 isDarkStyle:(BOOL)a1 completionHandler:(id /* block */)a2;
- (struct CGSize { double x0; double x1; })size;
- (double)scale;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (double)cornerRadius;
- (unsigned long long)hash;
- (id)initWithSFImage:(id)a0;
- (BOOL)shouldCropToCircle;
- (int)cornerRoundingStyle;
- (id)loadImageWithImageData:(id)a0 scale:(double)a1 isDarkStyle:(BOOL)a2;
- (void)decodeImageData:(id)a0 scale:(double)a1 isDarkStyle:(BOOL)a2 completionHandler:(id /* block */)a3;

@end
