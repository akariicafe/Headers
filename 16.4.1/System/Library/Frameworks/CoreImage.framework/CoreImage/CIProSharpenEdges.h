@class CIImage, NSNumber;

@interface CIProSharpenEdges : CIFilter {
    CIImage *inputImage;
    NSNumber *inputFalloff;
    NSNumber *inputSharpness;
    NSNumber *inputEdgeScale;
}

+ (id)customAttributes;

- (id)outputImage;
- (id)_CIBlur1;
- (id)_CIBlur2;
- (id)_CIBlur4;
- (id)_CIConvertRGBtoY;
- (id)_CIEdgesPrep;
- (id)_CIFindEdges;
- (id)_CISharpenCombineEdges;

@end
