@class CIRenderTask, NSString, NUImageHistogram, PFParallaxColor, CIImage;
@protocol NUPurgeableStorage;

@interface _PIParallaxRenderResource : NSObject

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) id<NUPurgeableStorage> destination;
@property (retain, nonatomic) CIImage *image;
@property (retain, nonatomic) CIRenderTask *task;
@property (retain, nonatomic) NUImageHistogram *imageHistogram;
@property (nonatomic) struct { float r; float g; float b; float a; } luminanceWeights;
@property (nonatomic) struct { float r; float g; float b; float a; } luminanceThresholds;
@property (readonly, nonatomic) PFParallaxColor *medianColor;
@property (readonly, nonatomic) PFParallaxColor *dominantColor;

- (void).cxx_destruct;

@end
