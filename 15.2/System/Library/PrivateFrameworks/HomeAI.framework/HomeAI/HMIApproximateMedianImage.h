@class CIImage, NSMutableArray, CIContext;

@interface HMIApproximateMedianImage : HMFObject <HMIAggregateImage>

@property (retain) NSMutableArray *images;
@property (retain) CIImage *medianImage;
@property (readonly) CIContext *context;
@property (readonly) unsigned long long imageCount;

- (id)outputImage;
- (void).cxx_destruct;
- (void)addImage:(id)a0;
- (id)init;
- (void)reset;
- (id)approximateMedianWithImages:(id)a0;
- (id)computedMedianImage;

@end
