@interface CMAudioAccessoryManager : NSObject {
    id _internal;
}

@property (nonatomic, setter=_setAudioAccessoryAccelerometerUpdateInterval:) double _audioAccessoryAccelerometerUpdateInterval;
@property (readonly, nonatomic, getter=_isAudioAccessoryAccelerometerAvailable) BOOL _audioAccessoryAccelerometerAvailable;
@property (nonatomic, setter=_setAudioAccessoryGyroUpdateInterval:) double _audioAccessoryGyroUpdateInterval;
@property (readonly, nonatomic, getter=_isAudioAccessoryGyroAvailable) BOOL _audioAccessoryGyroAvailable;
@property (readonly, nonatomic, getter=_isAudioAccessoryDeviceMotionAvailable) BOOL _audioAccessoryDeviceMotionAvailable;
@property (nonatomic, setter=_setAudioAccessoryDeviceMotionUpdateInterval:) double _audioAccessoryDeviceMotionUpdateInterval;

+ (BOOL)_selectActiveAudioRouteForAccelerometerWithBTAddress:(id)a0 modelID:(id)a1;
+ (BOOL)_selectActiveAudioRouteForGyroWithBTAddress:(id)a0 modelID:(id)a1;
+ (BOOL)_selectActiveAudioRouteWithBTAddress:(id)a0 modelID:(id)a1;
+ (BOOL)_selectActiveAudioRouteForDeviceMotionWithBTAddress:(id)a0 modelID:(id)a1;
+ (BOOL)_isAvailable;

- (void)onAudioAccessoryAccelerometer:(const struct Sample { double x0; struct { float x0; float x1; float x2; } x1; unsigned long long x2; unsigned short x3; } *)a0;
- (void)onAudioAccessoryGyro:(const struct Sample { double x0; struct { float x0; float x1; float x2; } x1; unsigned long long x2; unsigned short x3; float x4; } *)a0;
- (void)onAudioAccessoryDeviceMotion:(const void *)a0;
- (void)onAudioAccessoryDeviceMotionConfig:(const void *)a0;
- (void)onAudioAccessoryDeviceMotionStatus:(const int *)a0;
- (void)_setAudioAccessoryAccelerometerUpdateIntervalPrivate:(double)a0;
- (void)_isAudioAccessoryAccelerometerAvailablePrivate;
- (void)_startAudioAccessoryAccelerometerUpdatesPrivateToQueue:(id)a0 withHandler:(id /* block */)a1;
- (void)_stopAudioAccessoryAccelerometerUpdatesPrivate;
- (void)_setAudioAccessoryGyroUpdateIntervalPrivate:(double)a0;
- (void)_isAudioAccessoryGyroAvailablePrivate;
- (void)_stopAudioAccessoryGyroUpdatesPrivate;
- (void)_startAudioAccessoryGyroUpdatesPrivateToQueue:(id)a0 withHandler:(id /* block */)a1;
- (void)_isAudioAccessoryDeviceMotionAvailablePrivate;
- (id)_audioAccessoryAccelerometerData;
- (void)_setAudioAccessoryDeviceMotionUpdateIntervalPrivate:(double)a0;
- (void)_startAudioAccessoryDeviceMotionUpdatesPrivate:(id)a0 lowLatencyMode:(BOOL)a1 withHandler:(id /* block */)a2;
- (void)_stopAudioAccessoryDeviceMotionUpdatesPrivate;
- (void)_startAudioAccessoryDeviceMotionStatusUpdatesPrivate:(id)a0 withHandler:(id /* block */)a1;
- (void)_stopAudioAccessoryDeviceMotionStatusUpdatesPrivate;
- (double)_audioAccessoryAccelerometerUpdateInterval;
- (void)_startAudioAccessoryAccelerometerUpdatesToQueue:(id)a0 withHandler:(id /* block */)a1;
- (void)_stopAudioAccessoryAccelerometerUpdates;
- (id)_audioAccessoryGyroData;
- (double)_audioAccessoryGyroUpdateInterval;
- (void)_startAudioAccessoryGyroUpdatesToQueue:(id)a0 withHandler:(id /* block */)a1;
- (void)_stopAudioAccessoryGyroUpdates;
- (double)_audioAccessoryDeviceMotionUpdateInterval;
- (void)_startAudioAccessoryDeviceMotionUpdatesToQueue:(id)a0 lowLatencyMode:(BOOL)a1 withHandler:(id /* block */)a2;
- (void)_stopAudioAccessoryDeviceMotionUpdates;
- (void)_startAudioAccessoryDeviceMotionStatusUpdatesToQueue:(id)a0 withHandler:(id /* block */)a1;
- (void)_stopAudioAccessoryDeviceMotionStatusUpdates;
- (id)initPrivate;
- (id)init;
- (void)deallocPrivate;
- (void)dealloc;

@end
