@class CAMetalLayer, CADisplayLink;
@protocol MTLCommandQueue, ASVAROnboardingUIUpdateManagerDelegate, MTLDevice;

@interface ASVUpdateManager : NSObject {
    id<MTLDevice> _device;
    CAMetalLayer *_metalLayer;
    id<MTLCommandQueue> _commandQueue;
    CADisplayLink *_displayLink;
    double _lastUpdateTime;
}

@property (weak, nonatomic) id<ASVAROnboardingUIUpdateManagerDelegate> delegate;

- (void).cxx_destruct;
- (void)dealloc;
- (void)stop;
- (void)update;
- (void)start;
- (void)drawWithTimeDelta:(double)a0;
- (id)init:(id)a0 metalLayer:(id)a1;

@end
