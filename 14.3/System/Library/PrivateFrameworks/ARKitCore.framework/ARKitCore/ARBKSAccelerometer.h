@class BKSAccelerometer;

@interface ARBKSAccelerometer : NSObject {
    BKSAccelerometer *_accelerometer;
}

+ (id)sharedWeakAccelerometerHandle;
+ (id)sharedAccelerometerHandle;

- (id)initPrivate;
- (void).cxx_destruct;
- (void)dealloc;
- (long long)currentOrientation;

@end
