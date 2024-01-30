@class CIImage, CIContext;

@interface HMIAverageImage : HMFObject <HMIAggregateImage>

@property (retain) CIImage *currentAverage;
@property long long numImages;
@property float decay;
@property (readonly) CIContext *context;
@property (readonly) unsigned long long imageCount;

- (id)outputImage;
- (void).cxx_destruct;
- (void)addImage:(id)a0;
- (id)init;
- (void)reset;
- (id)initWithDecay:(float)a0;

@end
