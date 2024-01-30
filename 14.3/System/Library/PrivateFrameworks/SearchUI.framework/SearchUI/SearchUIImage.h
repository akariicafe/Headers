@class UIImage, SFImage;

@interface SearchUIImage : SFImage

@property (retain, nonatomic) UIImage *uiImage;
@property (readonly, nonatomic) SFImage *sfImage;
@property (nonatomic) BOOL useFastPathShadow;
@property (nonatomic) BOOL needsTinting;
@property (readonly, nonatomic) int defaultCornerRoundingStyle;

+ (id)imageWithSFImage:(id)a0;
+ (id)imageWithSFImage:(id)a0 variantForAppIcon:(unsigned long long)a1;

- (id)loadImage;
- (id)imageData;
- (id)initWithImage:(id)a0;
- (double)scale;
- (void).cxx_destruct;
- (double)cornerRadius;
- (struct CGSize { double x0; double x1; })size;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (BOOL)shouldCropToCircle;
- (int)cornerRoundingStyle;
- (BOOL)isTemplate;
- (id)initWithSFImage:(id)a0;
- (void)loadImageWithCompletionHandler:(id /* block */)a0;

@end
