@class CIImage, NSNumber, NSString;

@interface CIDepthEffectApplyBlurMap : CIFilter

@property (retain) CIImage *inputImage;
@property (retain) CIImage *inputBlurMap;
@property (retain) CIImage *inputMatteImage;
@property (retain) CIImage *inputGainMap;
@property (copy, nonatomic) NSNumber *inputAperture;
@property (copy, nonatomic) NSNumber *inputLumaNoiseScale;
@property (retain, nonatomic) NSNumber *inputScale;
@property (retain, nonatomic) id inputAuxDataMetadata;
@property (retain, nonatomic) NSString *inputShape;
@property (retain, nonatomic) NSNumber *inputDraftMode;

+ (id)customAttributes;

- (id)outputImage;
- (id)unifiedRenderingOutputImage:(struct CGImageMetadata { } *)a0;

@end
