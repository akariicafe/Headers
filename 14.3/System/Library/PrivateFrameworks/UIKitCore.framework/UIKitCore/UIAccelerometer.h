@class CMMotionManager;
@protocol UIAccelerometerDelegate;

@interface UIAccelerometer : NSObject {
    struct { unsigned char delegateDidAccelerate : 1; unsigned int reserved : 31; } _accelerometerFlags;
    CMMotionManager *_motionManager;
}

@property (nonatomic) double updateInterval;
@property (weak, nonatomic) id<UIAccelerometerDelegate> delegate;

+ (id)sharedAccelerometer;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)_motionManager;
- (void)_startAccelerometerIfNecessary;
- (void)_stopAccelerometer;
- (void)_acceleratedInX:(double)a0 y:(double)a1 z:(double)a2 timestamp:(double)a3;
- (void)_willResume:(id)a0;
- (void)_didSuspend:(id)a0;

@end
