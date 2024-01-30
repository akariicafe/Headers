@class CAMetalLayer, CADisplayLink;
@protocol MTLCommandQueue, ARCoachingUpdateManagerDelegate;

@interface ARCoachingUpdateManager : NSObject {
    CAMetalLayer *_metalLayer;
    id<MTLCommandQueue> _commandQueue;
    CADisplayLink *_displayLink;
    double _lastUpdateTime;
}

@property (weak, nonatomic) id<ARCoachingUpdateManagerDelegate> delegate;

- (void)start;
- (void)update;
- (void).cxx_destruct;
- (void)dealloc;
- (void)stop;
- (void)drawWithTimeDelta:(double)a0;
- (id)init:(id)a0 metalLayer:(id)a1;

@end
