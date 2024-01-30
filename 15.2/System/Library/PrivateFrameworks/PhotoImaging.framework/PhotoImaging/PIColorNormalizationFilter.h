@class CIImage, PFStoryRecipeDisplayAssetNormalization;

@interface PIColorNormalizationFilter : CIFilter

@property (class, readonly, nonatomic, getter=isAnalysisAvailable) BOOL analysisAvailable;

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) PFStoryRecipeDisplayAssetNormalization *inputNormalization;
@property (readonly, nonatomic) PFStoryRecipeDisplayAssetNormalization *outputNormalization;

+ (id)logger;
+ (id)colorCubeForNormalization:(id)a0 dimension:(long long)a1 targetColorSpace:(struct CGColorSpace { } *)a2;

- (id)outputImage;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
