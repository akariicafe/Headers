@interface ARFrameLuminanceManager : NSObject

@property double lastComputedLuminance;
@property unsigned long long currentFrameId;

- (id)init;
- (double)computeLuminanceFromPixelBuffer:(struct __CVBuffer { } *)a0;

@end
