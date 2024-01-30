@class ABPKImagePreProcessingParams;

@interface ABPKMLImageData : NSObject

@property (nonatomic) struct __CVBuffer { } *pixelBuffer;
@property (nonatomic) double timestamp;
@property (retain, nonatomic) ABPKImagePreProcessingParams *preprocessingParams;
@property (nonatomic) long long deviceOrientation;
@property (nonatomic) long long abpkDeviceOrientation;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithPixelBuffer:(struct __CVBuffer { } *)a0 timestamp:(double)a1 abpkDeviceOrientation:(long long)a2 preprocessingParameters:(id)a3;
- (id)initWithPixelBuffer:(struct __CVBuffer { } *)a0 timestamp:(double)a1 deviceOrientation:(long long)a2 preprocessingParameters:(id)a3;

@end
