@class CIImage;

@interface PISegmentationInfillFilter : CIFilter

@property (class, readonly) BOOL isMLInpaintingAvailable;

@property (nonatomic) long long infillAlgorithm;
@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIImage *inputMatteImage;

+ (id)blackInfillImage:(id)a0 matte:(id)a1;
+ (id)fastInfillImage:(id)a0 matte:(id)a1;
+ (id)inpaintingInfillImage:(id)a0 matte:(id)a1;
+ (id)watchInfillImage:(id)a0 matte:(id)a1;

- (id)outputImage;
- (void).cxx_destruct;

@end
