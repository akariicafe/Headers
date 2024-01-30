@class NSSet;

@interface AXElementVision__generated__Input : NSObject <MLFeatureProvider>

@property (nonatomic) struct __CVBuffer { } *image;
@property (nonatomic) double iouThreshold;
@property (nonatomic) double confidenceThreshold;
@property (readonly, nonatomic) NSSet *featureNames;

- (id)featureValueForName:(id)a0;
- (id)initWithImage:(struct __CVBuffer { } *)a0 iouThreshold:(double)a1 confidenceThreshold:(double)a2;

@end
