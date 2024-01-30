@interface CMAudioAccessoryManager : NSObject {
    id _internal;
}

@property (nonatomic, setter=_setAudioAccessoryAccelerometerUpdateInterval:) double _audioAccessoryAccelerometerUpdateInterval;
@property (readonly, nonatomic, getter=_isAudioAccessoryAccelerometerAvailable) BOOL _audioAccessoryAccelerometerAvailable;
@property (nonatomic, setter=_setAudioAccessoryGyroUpdateInterval:) double _audioAccessoryGyroUpdateInterval;
@property (readonly, nonatomic, getter=_isAudioAccessoryGyroAvailable) BOOL _audioAccessoryGyroAvailable;
@property (nonatomic, setter=_setAudioAccessoryMagnetometerUpdateInterval:) double _audioAccessoryMagnetometerUpdateInterval;
@property (readonly, nonatomic, getter=_isAudioAccessoryMagnetometerAvailable) BOOL _audioAccessoryMagnetometerAvailable;
@property (readonly, nonatomic, getter=_isAudioAccessoryDeviceMotionAvailable) BOOL _audioAccessoryDeviceMotionAvailable;
@property (nonatomic, setter=_setAudioAccessoryDeviceMotionUpdateInterval:) double _audioAccessoryDeviceMotionUpdateInterval;

+ (BOOL)_isAvailable;
+ (BOOL)_selectActiveAudioRouteForAccelerometerWithBTAddress:(id)a0 modelID:(id)a1;
+ (BOOL)_selectActiveAudioRouteForDeviceMotionWithBTAddress:(id)a0 modelID:(id)a1;
+ (BOOL)_selectActiveAudioRouteForGyroWithBTAddress:(id)a0 modelID:(id)a1;
+ (BOOL)_selectActiveAudioRouteForMagnetometerWithBTAddress:(id)a0 modelID:(id)a1;
+ (BOOL)_selectActiveAudioRouteWithBTAddress:(id)a0 modelID:(id)a1;

- (id)initPrivate;
- (void)dealloc;
- (void)deallocPrivate;
- (id)init;
- (id)_audioAccessoryMagnetometerData;
- (id)_audioAccessoryAccelerometerData;
- (double)_audioAccessoryAccelerometerUpdateInterval;
- (double)_audioAccessoryDeviceMotionUpdateInterval;
- (id)_audioAccessoryGyroData;
- (double)_audioAccessoryGyroUpdateInterval;
- (double)_audioAccessoryMagnetometerUpdateInterval;
- (void)_isAudioAccessoryAccelerometerAvailablePrivate;
- (void)_isAudioAccessoryDeviceMotionAvailablePrivate;
- (void)_isAudioAccessoryGyroAvailablePrivate;
- (void)_isAudioAccessoryMagnetometerAvailablePrivate;
- (void)_setAudioAccessoryAccelerometerUpdateIntervalPrivate:(double)a0;
- (void)_setAudioAccessoryDeviceMotionUpdateIntervalPrivate:(double)a0;
- (void)_setAudioAccessoryGyroUpdateIntervalPrivate:(double)a0;
- (void)_setAudioAccessoryMagnetometerUpdateIntervalPrivate:(double)a0;
- (void)_startAudioAccessoryAccelerometerUpdatesPrivateToQueue:(id)a0 withHandler:(id /* block */)a1;
- (void)_startAudioAccessoryAccelerometerUpdatesToQueue:(id)a0 withHandler:(id /* block */)a1;
- (void)_startAudioAccessoryDeviceMotionStatusUpdatesPrivate:(id)a0 withHandler:(id /* block */)a1;
- (void)_startAudioAccessoryDeviceMotionStatusUpdatesToQueue:(id)a0 withHandler:(id /* block */)a1;
- (void)_startAudioAccessoryDeviceMotionUpdatesPrivate:(id)a0 lowLatencyMode:(BOOL)a1 withHandler:(id /* block */)a2;
- (void)_startAudioAccessoryDeviceMotionUpdatesToQueue:(id)a0 lowLatencyMode:(BOOL)a1 withHandler:(id /* block */)a2;
- (void)_startAudioAccessoryGyroUpdatesPrivateToQueue:(id)a0 withHandler:(id /* block */)a1;
- (void)_startAudioAccessoryGyroUpdatesToQueue:(id)a0 withHandler:(id /* block */)a1;
- (void)_startAudioAccessoryMagnetometerUpdatesPrivateToQueue:(id)a0 withHandler:(id /* block */)a1;
- (void)_startAudioAccessoryMagnetometerUpdatesToQueue:(id)a0 withHandler:(id /* block */)a1;
- (void)_stopAudioAccessoryAccelerometerUpdates;
- (void)_stopAudioAccessoryAccelerometerUpdatesPrivate;
- (void)_stopAudioAccessoryDeviceMotionStatusUpdates;
- (void)_stopAudioAccessoryDeviceMotionStatusUpdatesPrivate;
- (void)_stopAudioAccessoryDeviceMotionUpdates;
- (void)_stopAudioAccessoryDeviceMotionUpdatesPrivate;
- (void)_stopAudioAccessoryGyroUpdates;
- (void)_stopAudioAccessoryGyroUpdatesPrivate;
- (void)_stopAudioAccessoryMagnetometerUpdates;
- (void)_stopAudioAccessoryMagnetometerUpdatesPrivate;
- (void)onAudioAccessoryAccelerometer:(const struct Sample { double x0; struct { float x0; float x1; float x2; } x1; unsigned long long x2; unsigned short x3; } *)a0;
- (void)onAudioAccessoryDeviceMotion:(const void *)a0;
- (void)onAudioAccessoryDeviceMotionConfig:(const void *)a0;
- (void)onAudioAccessoryDeviceMotionStatus:(const int *)a0;
- (void)onAudioAccessoryGyro:(const struct Sample { double x0; struct { float x0; float x1; float x2; } x1; unsigned long long x2; unsigned short x3; float x4; } *)a0;
- (void)onAudioAccessoryMagnetometer:(const struct Sample { double x0; struct { float x0; float x1; float x2; } x1; unsigned long long x2; unsigned short x3; float x4; } *)a0;

@end
