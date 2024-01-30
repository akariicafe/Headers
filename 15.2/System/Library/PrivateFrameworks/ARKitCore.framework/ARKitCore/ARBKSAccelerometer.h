@class BKSAccelerometer;

@interface ARBKSAccelerometer : NSObject {
    BKSAccelerometer *_accelerometer;
}

+ (id)sharedWeakAccelerometerHandle;
+ (id)sharedAccelerometerHandle;

- (id)initPrivate;
- (void).cxx_destruct;
- (long long)currentOrientation;
- (void)dealloc;
- (long long)rawOrientation;

@end
