@class NSDictionary, CIImage;
@protocol PIParallaxFilterCache;

@interface PIParallaxFilter : CIFilter

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } visibleFrame;
@property (nonatomic) double renderScale;
@property (copy, nonatomic) NSDictionary *localLightData;
@property (retain, nonatomic) id<PIParallaxFilterCache> cache;
@property (retain, nonatomic) CIImage *inputForegroundImage;
@property (retain, nonatomic) CIImage *inputBackgroundImage;
@property (retain, nonatomic) CIImage *inputMatteImage;
@property (retain, nonatomic) CIImage *inputGuideImage;
@property (readonly, nonatomic) CIImage *outputForegroundImage;
@property (readonly, nonatomic) CIImage *outputBackgroundImage;
@property (readonly, nonatomic) CIImage *outputMatteImage;

- (id)outputImage;
- (void).cxx_destruct;

@end
