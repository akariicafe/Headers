@class CAMetalLayer, CADisplayLink;
@protocol MTLCommandQueue, ARCoachingUpdateManagerDelegate;

@interface ARCoachingUpdateManager : NSObject {
    CAMetalLayer *_metalLayer;
    id<MTLCommandQueue> _commandQueue;
    CADisplayLink *_displayLink;
    double _lastUpdateTime;
}

@property (weak, nonatomic) id<ARCoachingUpdateManagerDelegate> delegate;

- (void)update;
- (void)dealloc;
- (void)stop;
- (void)start;
- (void).cxx_destruct;
- (void)drawWithTimeDelta:(double)a0;
- (id)init:(id)a0 metalLayer:(id)a1;

@end
