@class NSString, ARImageData;

@interface ARMLIntermediateDownScalingResultData : NSObject <ARResultData>

@property (readonly, nonatomic) double timestamp;
@property (readonly, nonatomic) struct __CVBuffer { } *pixelBuffer;
@property (readonly, nonatomic) ARImageData *originalImageData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
